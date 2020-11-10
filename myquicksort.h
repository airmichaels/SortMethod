#define MYQUICKSORT_H_
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

//快速排序，随机选取哨兵放前面
/*void myquicksort(vector<int>& h, int left, int right)
{
    if (h.size()==0) return;
    if (left >= right) return;

    //防止有序队列导致快速排序效率降低
    int len = right - left;
    int kindex = rand() % (len + 1) + left;
    swap(h[left], h[kindex]);

    int key = h[left], i = left, j = right;
    while (i < j)
    {
        while (h[j] >= key && i < j) --j;
        if (i < j) h[i] = h[j];
        while (h[i] < key && i < j) ++i;
        if (i < j) h[j] = h[i];
    }

    h[i] = key;

    //QuickSort(&h[left],0,i-1);
    //QuickSort(&h[j+1],0,right-j-1);

    myquicksort(h, left, i - 1);
    myquicksort(h, j + 1, right);*/

void myquicksort(vector<int>& arr, int left, int right) {
    if (left < right) {
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
        myquicksort(arr, left, high - 1);
        myquicksort(arr, high + 1, right);
        return;
    }
}
