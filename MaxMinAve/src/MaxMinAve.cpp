//============================================================================
// Name        : MaxMinAve.cpp
// Author      : Vy
// Version     :
// Copyright   : Your copyright notice
// Description : , Ansi-style
//============================================================================


#include <iostream>
#include <vector>
#include <algorithm> // this library contain min_element and max_element built-in
#include <numeric>

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
		Median = (thearr[thearr.size()/2]+thearr[(thearr.size()/2)-1])/2.0f;
	else
		Median = thearr[(thearr.size()/2)];
	return Median;
}
float Average(vector<int> thearr)
{
	float average;
	float sum = 0.f;
	vector<int>::size_type i =0;
	while (i != thearr.size())
	{
		sum = sum + thearr[i];
		++i;
	}
	average = sum / thearr.size();
	return average;
}
int main()
{
	/* store integers in a vector from standard input */
	vector<int> myarr;					// our container
	int token; 							// our container content variable
	cout << "Please enter some integers, followed by <CTRL><D>:" << endl;
	while (cin >> token) 				// loop exits when user enters <CTRL><D>
	{
		myarr.push_back(token);
	}
	cout << endl << endl;

	/* print integers from vector */
	cout << "Your integer array are:" << endl;
	for (vector<int>::size_type j = 0; j != myarr.size(); ++j)
	{
		cout << " " << myarr[j];
	}
	cout << endl;

	/* The largest integer */
	int max = Max(myarr);
	cout << "The largest integer in the array is: " << max << endl;
	/*The smallest integer*/
	int min = Min(myarr);
	cout << "The smallest integer in the array is: " << min << endl;
	/* The Average */
	float average = Average(myarr);
	cout << "The Average of the array is: " << average << endl;
	/* The Median integer*/
	float median = Median(myarr);
	cout << "The median of the array is: " << median << endl;
	/*
	 * Maximum, Minimum, Median using built - in functions
	 */
	cout << "Using built in functions"<< endl << endl;
	/* Maximum integer */
	cout << "The maximum integer is " << *std::max_element(myarr.begin(),myarr.end())<< endl;
	/* Minimum integer */
	cout << "The minimum integer is " << *std::min_element(myarr.begin(),myarr.end())<< endl;
	/* Average */
	cout << "The Average:" << accumulate(myarr.begin(), myarr.end(), 0.0) / myarr.size() << endl;
	/*
	 * Built in function for sorting an array
	 */
	sort(myarr.begin(),myarr.end());
	cout << "The sorted array is"<<endl;
		for (vector<int>::size_type j = 0; j != myarr.size(); ++j)
		{
			cout << " " << myarr[j];
		}
		cout << endl;
	cout << "The Median after sorting the array: " << Median(myarr) << endl;

	/* exit happily */
	return 0;
}
