Find duplicate
Given an array of integers of size n which contains numbers from 0 to n - 2. Each number is present at least once. That is, if n = 5, numbers from 0 to 3 is present in the given array at least once and one number is present twice. You need to find and return that duplicate number present in the array.
Assume, duplicate number is always present in the array.
Input format :
Line 1 : Size of input array
Line 2 : Array elements (separated by space)
Output Format :
Duplicate element
Constraints :
2 <= n <= 10^4
Sample Input 1:
9
0 7 2 5 4 7 1 3 6
Sample Output 1:
7
Sample Input 2:
5
0 2 1 3 1
Sample Output 2:
1



/***************************************************** SOLUTION **************************************************************************/


int DuplicateNumber(int arr[], int size) {
    int duplicate;
    for(int i = 0; i < size - 1; ++i) {
        for(int j = i + 1; j < size; ++j) {
            if(arr[i] == arr[j]) { 
                duplicate = arr[i];
                break;
            }
        }
    }
    return duplicate;
}
