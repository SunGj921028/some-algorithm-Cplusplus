#include<iostream>

using namespace std;

class Solution{
    public:
        void insertion_sort_up(int *A, int len){
            for(int i = 1; i < len; i++){
                int key = A[i];
                int j = i-1;
                while(j >= 0 && A[j] > key){
                    A[j+1] = A[j];
                    j--;
                }
                A[j + 1] = key;
            }
        }

        void insertion_sort_down(int *A, int len){
            for(int i = 1; i < len; i++){
                int key = A[i];
                int j = i-1;
                while(j >= 0 && A[j] < key){
                    A[j+1] = A[j];
                    j--;
                }
                A[j + 1] = key;
            }
        }

        void print_array(int *A, int len){
            for(int i = 0; i < len; i++){
                cout << A[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    int A[] = {5, 2, 4, 6, 1, 3};
    int len = sizeof(A) / sizeof(int);
    Solution sol;
    sol.insertion_sort_up(A, len);
    sol.print_array(A, len);
    sol.insertion_sort_down(A, len);
    sol.print_array(A, len);
    return 0;
}