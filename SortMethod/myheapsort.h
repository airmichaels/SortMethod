#pragma once
#define MY_HEAPSORT_
#include <iostream>
#include <vector>
using namespace std;

void percdown(vector<int>& arr, int node, int N) {
	int parent, child;
	int tempvalue;
	tempvalue = arr[node];//ȡ��������ŵ�ֵ
	for (parent = node; (parent * 2 + 1) < N; parent = child) { //��0��ʼ�洢�����û�����ӣ���ȻҲû���Һ���
		child = parent * 2+1;
		if ((child != N - 1) && (arr[child] < arr[child + 1])) child++;
		if (tempvalue >= arr[child]) break;
		else arr[parent] = arr[child];
	}
	arr[parent] = tempvalue;
}
void myheapsort(vector<int>& arr,int N) {
	for (int i = N / 2 ; i >= 0; i--) { //��������
		percdown(arr,i,N);
	}
	for (int i = N - 1; i > 0; i--) { //ɾ����� �Ѷ�
		swap(arr[0],arr[i]);
		percdown(arr,0,i);
	}
}