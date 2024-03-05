#include<iostream>

using namespace std;

class Solution{
    public:
        int binary_search(int *array, int len, int target){
            int left = 0;
            int right = len - 1;
            while(left <= right){
                int mid = left + (right - left) / 2; // avoid overflow
                if(array[mid] == target){
                    return mid;
                }else if(array[mid] < target){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }
            return -1;
        }
};

int main(){
    int A[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(A) / sizeof(int);
    Solution sol;
    cout << sol.binary_search(A, len, 3) << endl;
    cout << sol.binary_search(A, len, 7) << endl;
    return 0;
}