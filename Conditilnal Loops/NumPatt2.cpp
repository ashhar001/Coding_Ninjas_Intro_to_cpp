Number Pattern 2
Print the following pattern
Pattern for N = 4
       1
     23
   345
 4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
          1
        23
      345
    4567
  56789
  
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
		int j=1;
        val=i;
        while(j<=i){
            cout<<val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;  
	}
}
