// Money.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void main()
{
	int N = -1;
	vector<double> resultsVec;
	cout << "N=?\n";
	while (1)
	{
		cin >> N;
		if (N == 0)
			break;
		double *A = new double[N];
		double sum = 0,average=0,resultSum=0;
		for (int i = 0; i < N; i++)
		{
			cin >> A[i];
			sum += A[i];
		}
		average = sum / N;
		for (int i = 0; i < N; i++)
		{
			resultSum += abs(A[i] - average);
		}
		resultsVec.push_back(resultSum / 2);
		delete[]A;
	}
	cout << endl << "Results:" << endl;
	for (auto i : resultsVec)
	{
		cout << i <<endl;
	}
	system("pause");
}

