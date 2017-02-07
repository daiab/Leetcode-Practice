#include<header/base.h>

void BubbleSort(int arr[], int size){
    for (int i = 0; i < size; ++i) { 
        for (int j=0; j < size - 1; ++j) { 
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            } 
        } 
    }  
}


void MergeSort(int arr[], int l_idx, int r_idx){
    if((r_idx - l_idx) < 1) return;
    int mid = (l_idx + r_idx) / 2;
    MergeSort(arr, l_idx, mid);
    MergeSort(arr, mid+1, r_idx);
    int tmp, i , j;
    for (i = mid+1; i <= r_idx; ++i) { 
        tmp = arr[i];
        for(j = i - 1; j >= l_idx && arr[j] > tmp; --j){
            arr[j + 1] = arr[j];
        }
        arr[j+1] = tmp;
    } 
}

void MergeSortMain(int arr[], int size){
    MergeSort(arr, 0, size - 1);
}

//default use the last as pivot
void QuickSort(int arr[], int l_idx, int r_idx){
    if((r_idx - l_idx) <= 1) return;
    int pivot_val = arr[r_idx];
    int tmp_idx = 0;
    for (int i = 0; i < r_idx; ++i) { 
        if(arr[i] < pivot_val){
            std::swap(arr[i], arr[tmp_idx]);
            ++tmp_idx;
        }
    } 
    std::swap(arr[tmp_idx], arr[r_idx]);
    QuickSort(arr, l_idx, tmp_idx -1);
    QuickSort(arr, tmp_idx, r_idx);
}

void QuickSortMain(int arr[], int size){
    QuickSort(arr, 0, size - 1); 
}



void test_sort(){
    int arr[7] = {1, 23, 2, 7, 19, 10, 9};
    //BubbleSort(arr, 7);
    //MergeSortMain(arr, 7);
    QuickSortMain(arr, 7);
    for(int i = 0; i < 7; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
