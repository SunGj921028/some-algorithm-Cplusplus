#include<bits/stdc++.h>

using namespace std;

void merge(int array[], int const left, int const mid, int const right){
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;

    auto *leftArray = new int[subArrayOne], *rightArray = new int[subArrayTwo];

    for(auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for(auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int array[], int const begin, int const end){
    if(begin >= end)
        return;
    auto mid = begin + (end - begin) / 2; // avoid overflow
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void printArray(int *A, int len){
    for(int i = 0; i < len; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(){
    int A[] = {5, 2, 4, 6, 1, 3};
    int len = sizeof(A) / sizeof(A[0]);
    cout << "Given array is \n";
    printArray(A, len);
    mergeSort(A, 0, len - 1); // len - 1 because we throw the index of the last element
    printArray(A, len);
    return 0;
}