#pragma once
#define MYINSERTSORT_H
#include <iostream>
#include <vector>
using namespace std;

void  myinsertsort(vector<int>& arr, int N) {
	int temp;
	int j;
	for (int i = 1; i < N; i++) {
		temp = arr[i];
		for (j = i; j > 0 && temp < arr[j - 1]; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
}
