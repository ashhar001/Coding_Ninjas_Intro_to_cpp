Print 2D array
Send Feedback
Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.
Input format :

Line 1 : No of rows(n) & No of columns(m) (separated by space)

Line 2 : Row 1 elements (separated by space)

Line 3 : Row 2 elements (separated by space)

Line 4 : and so on

Sample Input :
3 3
1    2    3
4    5    6
7    8    9
Sample Output :
1    2    3
1    2    3
1    2    3
4    5    6
4    5    6
7    8    9
/****************************************** SOLUTION *************************************************************************************/

	
	
#include <iostream>
using namespace std;
void print2DArray(int **input, int row, int col) {
	// Write your code here
    int k = row;
    for(int i=0;i<row;i++){
        for(int l =k-1;l>=0;l--){
            for(int j=0;j<col;j++){
                cout<<input[i][j]<<" ";
            }
            cout<<endl;
        }
        k--;
    }
}
