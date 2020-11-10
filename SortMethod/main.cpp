#include <iostream>
#include <vector>
#include "mymergesort.h"
#include "myselectionsort.h"
#include "myheapsort.h"
#include "myinsertsort.h"
#include "mybubblesort.h"
#include "myquicksort.h";
using namespace std;
int main() {

	vector<int>arr = { 3,5,4,6,4,7,8,1,3 };
	//简单选择排序：
	//myselectionsort(arr, arr.size());
	
	//插入排序：
	//myinsertsort(arr,arr.size());

	//冒泡排序：
	//mybubblesort(arr, arr.size());

	//堆排序：
	//myheapsort(arr,arr.size());
	
	//快速排序：
	//myquicksort(arr,0,arr.size()-1);

	//归并排序：
	//MergeSort(arr, arr.size());
	//vector<int>::iterator it;
	//for (auto it = arr.begin(); it != arr.end(); it++) cout << *it << endl;

	for (auto& nums : arr) cout << nums << endl;
	return 0;
}