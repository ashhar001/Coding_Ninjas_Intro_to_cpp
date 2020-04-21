Sort 0 1 2
You are given an integer array containing only 0s, 1s and 2s. Write a solution to sort this array using one scan only.
You need to change in the given array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Updated array elements in a single line (separated by space)
Constraints :
1 <= n <= 10^6
Sample Input 1:
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 
Sample Input 2:
5
0 1 0 0 1
Sample Output 2:
0 0 0 1 1 


// arr - input array
// n - size of array

void sort012(int arr[], int n)  {  
    int count0 = 0,count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){    //count 0   
        if(arr[i] == 0){
            count0++;
        }
        if(arr[i] == 1){    //count 1
            count1++;
        }  
    }
    
    for(int i=0;i<count0;i++){    //print 0
        arr[i]=0;
    }
    int temp = count0 + count1;
     for(int i=count0;i<temp;i++){    //print 1
        arr[i]=1;
    }
     for(int i=temp;i<n;i++){    //print 2
        arr[i]=2;
    }
}
// CN SOLUTION
/*
#include<bits/stdc++.h>
using namespace std;
void sort012(int *A, int n) {
    int k = n - 1; 
    int i = 0;
    for (; i < n; ++i) {
        if (A[i] != 0) {
            break;
        }
    }
    int j = i;
    for (; i <= k; ++i) {
        if (A[i] == 0) {
            swap(A[j++], A[i]); 
        }
        else if (A[i] == 2) {
            swap(A[i--], A[k--]); 
        }
    }
}*/
