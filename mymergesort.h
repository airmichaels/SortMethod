#pragma once
#ifndef _MYMERGESORT_H_
#define _MYMERGESORT_H_

#include <vector>
#include <iostream>

using namespace std;
void myMertgeSort(int left, int right, int rightedge, vector<int>& arr, vector<int>& temp) {
	int leftedge = right - 1;
	int tempn = left;//有序序列的起始位置
	int nums = right - left + 1;//有序序列的数量
	int i;
	while (left <= leftedge && right <= rightedge) {
		if (arr[left] <= arr[right]) temp[tempn++] = arr[left++];
		else temp[tempn++] = arr[right++];
	}
	while (left <= leftedge) {
		temp[tempn++] = arr[left++];
	}
	while (right <= rightedge) {
		temp[tempn++] = arr[right++];
	}
	for (i = 0; i < nums; i++, rightedge--) {
		arr[rightedge] = temp[rightedge];
	}
}
void merge(int left, int right, vector<int>& arr, vector<int>& temp) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		merge(left, mid, arr, temp);//递归解决左边
		merge(mid + 1, right, arr, temp);//递归解决右边
		myMertgeSort(left, mid + 1, right, arr, temp);//合并两端有序数列
	}
	return;
}

void MergeSort(vector<int>& arr, int N) {
	vector<int> temp(N);
	if (temp.size() != 0) {
		merge(0, N - 1, arr, temp);
	}
	else cout << "空间不足" << endl;
	return;
}

#endif // !

