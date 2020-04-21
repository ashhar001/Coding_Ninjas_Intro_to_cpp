Rotate array
Given a random integer array of size n, write a function that rotates the given array by d elements (towards left)
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer d
Output Format :
Updated array elements in a single line (separated by space)
Constraints :
0 <= N <= 10^7
0 <= d <= N
Sample Input 1:
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2
Sample Input 2:
7
1 2 3 4 5 6 7
0
Sample Output 2:
1 2 3 4 5 6 7


/***************************************************** SOLUTION **************************************************************************/



void leftrotate(int arr[],int n){
    int tmp = arr[0],i;
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=tmp;
}
void Rotate(int arr[], int d, int size) {
    for(int i=0;i<d;i++){
        leftrotate(arr,size);
    }
}	
