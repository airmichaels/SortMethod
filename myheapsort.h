#pragma once
#define MY_HEAPSORT_
#include <iostream>
#include <vector>
using namespace std;

void percdown(vector<int>& arr, int node, int N) {
	int parent, child;
	int tempvalue;
	tempvalue = arr[node];//取出根结点存放的值
	for (parent = node; (parent * 2 + 1) < N; parent = child) { //从0开始存储，如果没有左孩子，自然也没有右孩子
		child = parent * 2+1;
		if ((child != N - 1) && (arr[child] < arr[child + 1])) child++;
		if (tempvalue >= arr[child]) break;
		else arr[parent] = arr[child];
	}
	arr[parent] = tempvalue;
}
void myheapsort(vector<int>& arr,int N) {
	for (int i = N / 2 ; i >= 0; i--) { //建立最大堆
		percdown(arr,i,N);
	}
	for (int i = N - 1; i > 0; i--) { //删除最大 堆顶
		swap(arr[0],arr[i]);
		percdown(arr,0,i);
	}
}