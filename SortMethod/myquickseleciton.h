#pragma once
#include <iostream>
#include <vector>
using namespace std;
vector<int> res;
vector<int> getLeastNumbers(vector<int>& arr, int k) {
    if (arr.size() == 0 || k == 0) return {};
    return quickselection(arr, 0, arr.size() - 1, k);
}
vector<int> quickselection(vector<int>& arr, int left, int right, int k) {
    int index = myquicksort(arr, left, right);
    if (index == k - 1) {
        for (int i = 0; i <= index; i++) {
            res.push_back(arr[i]);
        }
        return res;
    }
    return index < k - 1 ? quickselection(arr, index + 1, right, k) : quickselection(arr, left, index - 1, k);
}

int myquicksort(vector<int>& arr, int left, int right) {
    int low = left;
    int high = right + 1;
    int pivot = arr[left];
    while (1) {
        while (++low <= right && arr[low] < pivot);
        while (--high >= left && arr[high] > pivot);
        if (low < high) swap(arr[low], arr[high]);
        else break;
    }
    swap(arr[high], arr[left]);
    return high;
}