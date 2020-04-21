Second Largest in array
Given a random integer array of size n, find and return the second largest element present in the array.
If n <= 1 or all elements are same in the array, return -2147483648 i.e. -2^31.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Second largest element
Constraints :
0 <= N <= 10^6
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
13
Sample Input 2:
5
9 3 6 2 9
Sample Output 2:
6
Sample Input 3:
2
6 6
Sample Output 3:
-2147483648


/***************************************************** SOLUTION **************************************************************************/


// arr - input array
// n - size of array

int FindSecondLargest(int arr[], int n){
    long a = 2147483648;
     int count=0;int i=0,j=1;
    for(j;j<n;j++){
        if(arr[i] == arr[j]){
        	count++;
        }
    }
    if((count)==n-1 || n <= 1)
    	return -a;
    else{
        int max = -9999999;
	    int j = 0;
	    for(int i = 0; i < n; i++){
		    if(arr[i] > max){
			    max = arr[i];
		    }
	    }
	    int temp = max;
	    max = -9999999;
	    for(int i = 0; i < n; i++){
		    if(arr[i] > max && arr[i] != temp){
			    max = arr[i];
		    }
	    }
        return max;
	}
}

// CN SOLUTION
/*
#include<limits.h>
using namespace std;
int FindSecondLargest(int *input,int n){
    if(n<=0)
        return INT_MIN;
    int maxx=input[0];
    int secmax=INT_MIN;
    for(int i=1;i<n;i++) {
        if(input[i]>maxx){
            secmax=maxx;
            maxx=input[i];
        }
        else if(input[i]>secmax && input[i] != maxx)
            secmax=input[i];
    }
    return secmax;
}
*/
