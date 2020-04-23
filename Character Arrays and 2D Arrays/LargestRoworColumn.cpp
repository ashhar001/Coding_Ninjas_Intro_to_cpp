Largest Row or Column
Given an NxM 2D array, you need to find out which row or column has largest sum (sum of its elements) overall amongst all rows and columns.
Input Format :
 Line 1 : 2 integers N and M respectively, separated by space 
 Line 2: Single line having N*M elements entered in row wise manner, each separated by space.
Output Format :
 If row sum is maximum then - "row" row_num max_sum
 If column sum is maximum then - "column" col_num max_sum
Note : If there are more than one rows/columns with maximum sum consider the row/column that comes first. And if ith row and jth column has same sum (which is largest), consider the ith row as answer.
Sample Input 1 :
2 2 
1 1 1 1
Sample Output 1 :
row 0 2
Sample Input 2 :
3 3
3 6 9 1 4 7 2 8 9
Sample Output 2 :
column 2 25


/********************************************************* SOLUTION *******************************************************************/


#include<climits>
void findLargest(int arr[][1000], int row, int col){
    	int i,j,sum = 0;
	    int tempr = INT_MIN;
	    int maxrow = 0, maxr = 0;
	// finding each row sum 
	for(i = 0; i < row; i++){ 
		for (j = 0; j < col; j++) { 
			// Add the element 
			sum = sum + arr[i][j]; 
		}
        //finding th greatest row
		if(sum > tempr){
			maxrow = sum;
			maxr = i;
			tempr = maxrow;
		}
		// Reset the sum 
		sum = 0; 
	}
	
	i=0,j=0,sum = 0; 
	int tempc = INT_MIN;
	int maxcol = 0, maxc = 0;
	
	// finding the each column sum 
	for (i = 0; i < col; ++i) { 
		for (j = 0; j < row; ++j) { 

			// Add the element 
			sum = sum + arr[j][i]; 
		}
        // finding th greatest column
		if(sum > tempc){
			maxcol = sum;
			maxc = i;
			tempc = maxcol;
		}
		// Reset the sum 
		sum = 0;
	}
    //comparing the max row or col
	if(maxrow > maxcol){
		cout<<"row " << maxr<<" "<<maxrow;
	}
	else if(maxrow < maxcol){
		cout<<"column " << maxc<<" "<<maxcol;
	}
	else{
		cout<<"row " << maxr<<" "<<maxrow;
	}
}
