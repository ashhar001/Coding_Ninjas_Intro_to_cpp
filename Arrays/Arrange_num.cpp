Arrange Numbers in Array
Given a number n, put all elements from 1 to n in an array in order - 1,3,.......4,2.
Input Format :
 Integer n
Output Format :
 Elements of the array separated by space.
Constraints :
1 <= n <= 10^7
Sample Input 1 :
6
Sample Output 1 :
 1 3 5 6 4 2
Sample Input 2 :
9
Sample Output 2 :
 1 3 5 7 9 8 6 4 2
 
 
 /***************************************************** SOLUTION **************************************************************************/
 
 
 void arrange(int arr[],int n){
    int j = 0;
	int i = 0;
    
    while(j <= n){
        
        if( j % 2 != 0){
            arr[i] = j;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    j = n;
    while(j >= 1){
        
        if(j % 2 == 0){
            arr[i] = j;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
}

/*
	void arrange(int arr[],int n){
    
 	int i,j=0;
	for(i = 1; i <= n; i++)
	{
		if( i % 2 != 0)
		{
			arr[j] = i;
			j++;
		}
		
	}
	
	for(i = n ; i > 0;i--)
	{
		if( i%2 == 0)
		{
			arr[j] = i;
			j++ ;
		}
	}

}
*/
