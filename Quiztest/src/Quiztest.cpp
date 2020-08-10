//============================================================================
// Name        : Quiztest.cpp
// Author      : Vy
// Version     :
// Copyright   : Your copyright notice
// Description :Quiz test in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;

struct student_struct {
	string name;
	int score;
};
typedef student_struct stn_t;

istream& read(istream &is, stn_t &indv) {
	is >> indv.name;
	return is;
}

/*Sorter function*/
bool result_sorter(stn_t a, stn_t b) {
	if (a.score > b.score)
		return true;
	else
		return false;
}

/*First question*/
int quiz1(int score)
{
	float ans1;
	cout << "First Question: What is the decimal number of this floating point number: \n";
	cout << " (+)0.1101101x2^4 " << endl;
	cin >> ans1;
	if (ans1 != 13.625)
	{
		throw logic_error("Wrong answer");
		return score;
	}
	else
	{
		cout << "Correct" << endl;
		score += 5;
	}
	return score;
}

/*Second Question */
int quiz2(int score)
{
	bool ans2;
	cout << "Second Question: Is dr. Takis Zourntos a strict Professor? Type: 1= yes, 0 = no "<< endl;
	cin >> ans2;
	if (ans2)
	{
		cout << "Correct!\n";
		score += 5;
	}
	else
		throw logic_error("Wrong answer");
	return score;
}

/*Third Question*/
int quiz3(int score)
{
	int ans3;
	cout << "Third question: 11^2 = ? :" << endl;
	cin >> ans3;
	if (ans3 == 121)
	{
		cout << "Correct! \n";
		score += 5;
	}
	else
		throw logic_error("Wrong answer");
	return score;
}

/*Test function*/
stn_t test(stn_t a)
{
	int score = 0;
	try {
		score = quiz1(score);
	} catch (logic_error str) {
		cout << str.what() << endl;
	}
	cout << "Your score: " << score << endl;
	try {
		score = quiz2(score);
	} catch (logic_error str1) {
		cout << str1.what() << endl;
	}
	cout << "Your score: " << score << endl;
	try {
		score = quiz3(score);
	} catch (logic_error str2) {
		cout << str2.what() << endl;
	}
	/*Displaying the score and return score of the individual*/
	cout << "Your score: " << score << endl << endl;
	a.score = score;
	return a;
}

/*Main Function*/
int main()
{
	/*Variables declaration*/
	vector<stn_t> victims;
	stn_t indv;
	cout << "Enter your name and take the test" << endl;
	cout << "Press Ctrl + D when done" << endl << endl;
	/*Looping and taking exam for each student*/
	while (read(cin, indv))
	{
		indv = test(indv);
		victims.push_back(indv);
		cout << "Student Name: " << indv.name << "--- Score: " << indv.score
				<< endl << "Next!" << endl << endl;
	}
	/*Sorting and Displaying the result.*/
	sort(victims.begin(), victims.end(), result_sorter);
	cout << " The Results are: " << endl;
	for (vector<stn_t>::size_type ii = 0; ii != victims.size(); ++ii)
	{
		cout << "Student: " << victims[ii].name << "---Score: "
				<< victims[ii].score << endl;
	}
	return 0;
}
