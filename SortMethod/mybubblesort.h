#define MYBUBBLESORT_H_
#include <iostream>
#include <vector>
using namespace std;
void mybubblesort(vector<int>& arr, int n) {
	bool flag;
	for (int P = n - 1; P > 0; P--) {
		flag = false;
		for (int i = 1; i <= P; i++) {
			if (arr[i] < arr[i -1]) {
				swap(arr[i],arr[i-1]);
				flag = true;
			}
		}
		if (flag == false) break;
	}
}