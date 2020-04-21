Code Binary Search
Given a sorted integer array (in ascending order) and an element x. You need to search this element x in the given input array using binary search. Return the index of element in the input.
Indexing starts from 0.
Return -1 if x is not present in the input array.


Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Line 3 : Element to be searched (i.e. x)
Output Format :
Index of 'x' if found. Otherwise, '-1'
Constraints :
1 <= N <= 10^6
Sample Input 1:
7
1 3 7 9 11 12 45
3
Sample Output 1:
1
Sample Input 2:
7
1 2 3 4 5 6 7
9
Sample Output 2:
-1
	
	
/***************************************************** SOLUTION **************************************************************************/
	
	
int BinarySearch(int arr[], int n, int val){
    int first = 0;
    int last = n-1;
    
    int middle = (first+last)/2;
    
    while(first <= last){
        if(arr[middle] < val){
            first = middle + 1;
        }
        else if( arr[middle] == val){
            return middle;
            break;
        }
        else{
            last = middle - 1;
            
        }
        middle = (first + last)/2;
    }
    if(first > last){
        return -1;
    }
}
/*
// CN SOLUTION
int BinarySearch(int *input,int num , int val){
    int start=0;
    int end=num-1;
    int mid=start;
    while(start<=end){ 
        mid= start + (end-start)/2;
        if(input[mid]>val) 
            end=mid-1;
        else if(input[mid]<val)
            start=mid+1;
        else
            return mid;
    }
    return -1;
}
*/
