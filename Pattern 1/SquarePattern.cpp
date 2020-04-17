Code : Square Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
Sample Input 1:
7
Sample Output 1:
7777777
7777777
7777777
7777777
7777777
7777777
7777777
Sample Input 1:
6
Sample Output 1:
666666
666666
666666
666666
666666
666666

/************************************************************* SOLUTION **************************************************************/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp =n;
    while(temp > 0){
    	for(int i = 0; i < n; i++ ){
    		cout<< n;
		}
		cout<<endl;
		temp--;
	}
}
