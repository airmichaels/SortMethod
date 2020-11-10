#pragma once
#define _MYSELECTION_SORT_H
#include <iostream>
#include <vector>
using namespace std;

void myswap(int &a, int &b) {
	int temp  = a;
	a = b;
	b = temp;
}

void myselectionsort(vector<int>& arr,int N ) {
	int min;
	for (int i = 0; i < N - 1; i++) {
		min = i;
		for (int j =i+1; j < N; j++) {
			if (arr[j] < arr[min]) min = j;
		}
		myswap(arr[min],arr[i]);
	}
}
