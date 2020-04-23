Spiral Print
Given an N*M 2D array, print it in spiral form. That is, first you need to print the 1st row, then last column, then last row and then first column and so on.
Print every element only once.
Input format :
Line 1 : N and M, No. of rows & No. of columns (separated by space) followed by N*M  elements in row wise fashion.
Sample Input :
 4 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
Sample Output :
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 


/********************************************************* SOLUTION *******************************************************************/


#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int row, int col){
    int i, k = 0, l = 0; 
    while (k < row && l < col) { 
        for (i = l; i < col; i++) { 
            cout << input[k][i] << " "; 
        } 
        k++; 
  
        for (i = k; i < row; i++) { 
            cout << input[i][col - 1] << " "; 
        } 
        col--; 
  
        if (k < row){ 
            for (i = col - 1; i >= l; i--) { 
                cout << input[row - 1][i] << " "; 
            } 
            row--; 
        } 
  
        if (l < col){ 
            for (i = row - 1; i >= k; i--) { 
                cout << input[i][l] << " "; 
            } 
            l++; 
        } 
    } 
}

