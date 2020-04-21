Code: Insertion Sort
Given a random integer array. Sort this array using insertion sort.
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
void InsertionSort(int arr[], int n){
	// Write your code here
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for( j = i-1; j >= 0;j--){
            if(current < arr[j]){
                arr[j+1]=arr[j];    // shifting by 1 position
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
}
// CN SOLUTION
/*
void InsertionSort(int *input,int size){
    int i=1;
    int temp;
    while(i<size){
        temp=input[i];
        // scan left and insert ith element to its correct position to its left .
        int j=i-1;
        while(j>=0) {
            if(input[j]>temp)
                input[j+1]=input[j];
            else 
                break;
            j--;
        }
        input[j+1]=temp;
        i++;
    }
}
*/
