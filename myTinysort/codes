#include <iostream>
#include <vector>
using namespace std;
//选择排序
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




//插入排序
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



//堆排序
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
	for (int i = N / 2 - 1; i >= 0; i--) { //建立最大堆
		percdown(arr,i,N);
	}
	for (int i = N - 1; i > 0; i--) { //删除最大 堆顶
		swap(arr[0],arr[i]);
		percdown(arr,0,i);
	}
}



//归并排序 
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
