//============================================================================
// Name        : MaxMinAve.cpp
// Author      : Vy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * fl.cpp
 *
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

/*
 *
 *
 */
int Max(vector<int> thearr)
{
	int max = thearr[0];
	int next;
	vector<int>::size_type i =1;
	while (i != thearr.size())
	{
		next = thearr[i];
		if (max < next)
			max = next;
		++i;
	}
	return max;

}
int Min(vector<int> thearr)
{
	int min = thearr[0];
	int next;
	vector<int>::size_type i =1;
	while (i != thearr.size())
	{
		next = thearr[i];
		if (min > next)
			min = next;
		++i;
	}
	return min;
}
float Median(vector<int> thearr)
{
	float Median;
	if ((thearr.size() % 2) == 0)
		Median = (thearr[thearr.size()/2]+thearr[(thearr.size()/2)-1])/2;
	else
		Median = thearr[(thearr.size()/2)];
	return Median;
}
int main()
{
	/* store integers in a vector from standard input */
	vector<int> myarr;	// our container
	int token; 			// our container content variable
	cout << "Please enter some integers, followed by <CTRL><D>:" << endl;
	while (cin >> token) // loop exits when user enters <CTRL><D>
	{
		myarr.push_back(token);
	}
	cout << endl << endl;

	/* print integers from vector */
	cout << "Your integers are:" << endl;
	for (vector<int>::size_type j = 0; j != myarr.size(); ++j)
	{
		cout << myarr[j] << endl;
	}
	cout << endl;

	/* The largest integer */
	int max = Max(myarr);
	cout << endl << "The largest integer in the array is: " << max << endl;

	/*The smallest integer*/
	int min = Min(myarr);
	cout << endl << "The smallest integer in the array is: " << min << endl;
	/* The Median integer*/
	float median = Median(myarr);
	cout << endl << "The median of the array is: " << median << endl;

	/* exit happily */
	return 0;
}
