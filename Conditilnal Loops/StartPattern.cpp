Start Pattern
Print the following pattern
Pattern for N = 4
    *
   *** 
  *****
 *******
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
 
 /************************************************** SOLUTION *****************************************************************************/
 
 #include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=1;
    int val=1;
    
    while(i<=N){
        int space=1;
      
	
        while(space<=N-i){
        		cout<<" ";
        		space=space+1;
			}
		int j=0;
        val=i;
        while(j!= 2*i-1){
            cout<<"*";
            j=j+1;
        }
        space=1;
        while(space<=N-i){
        		cout<<" ";
        		space=space+1;
			}
        cout<<endl;
        i=i+1;  
	}
}
