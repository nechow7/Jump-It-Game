// nc2418_hwk8_q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int cost(int * arr, int arrSize,int position);

int main()
{
	int arr[6] = { 0,3,80,6,57,10 };
	int cost2;

	cost2 = cost(arr, 6, 0);

	cout << "The lowet cost is " << cost2;

	return 0;
}

int cost(int * arr, int arrSize, int position) {
	if (position == arrSize -1)
	{
		return arr[position];
	}
	else
	{
		if (position + 2 >= arrSize)
		{
			return arr[position] + cost(arr, arrSize, position + 1);
		}

		int min1 = cost(arr, arrSize, position + 1);
		int min2 = cost(arr, arrSize, position + 2);

		if (min1 > min2)
		{
			return arr[position] + min2;
		}
		else
		{
			return arr[position] + min1;
		}
	}
}
