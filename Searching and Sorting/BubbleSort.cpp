Code:Bubble Sort
Given a random integer array. Sort this array using bubble sort.
Change in the input array itself. You don't need to return or print elements.


Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Output format :
Elements of array in sorted order. Print them in a single line and space-separated
Constraints :
0 <= N <= 10^4
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9


/***************************************************** SOLUTION **************************************************************************/


// arr - input array
// n - size of array
void BubbleSort(int arr[], int n){
    int k=0;
  while( k < n-1){    // for n-1 round to sort the array
        for(int i=0;i<n-1;i++){    // for 1 round
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
      k++;
  }
}
// CN SOLUTION
/*
using namespace std;
void BubbleSort(int * input, int size){
    for(int i=0;i<size;i++){ 
        for(int j=0;j<size-i-1;j++){ 
            if(input[j]>input[j+1]){ 
                swap(input[j],input[j+1]); 
            }
        }
    }
}

*/
