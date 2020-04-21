Push Zeros to end
Given a random integer array, push all the zeros that are present to end of the array. The respective order of other elements should remain same.
Change in the input array itself. You don't need to return or print elements. Don't use extra array.
Note : You need to do this in one scan of array only.


Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Output Format :
Array elements in a single line (separated by space)
Constraints :
0 <= N <= 10^6
Sample Input 1:
7
2 0 4 1 3 0 28
Sample Output 1:
2 4 1 3 28 0 0
Sample Input 2:
5
0 3 0 2 0
Sample Output 2:
3 2 0 0 0


/***************************************************** SOLUTION **************************************************************************/


// arr - input array
// n - size of array

void PushZeroesEnd(int arr[], int n){
    int count=0;
    for(int i=0; i<n;i++){
        if(arr[i] != 0){
            arr[count] = arr[i];    //count no of non zeros and place them from 0
            count++;
        }
    }
    while(count<n){
        arr[count]=0;    //after countin no. of non zeros copy 0 for rest of the elemnt
        count++;
    }
    
}
