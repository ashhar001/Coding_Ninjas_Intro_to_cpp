Code : Star Pattern
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
 
 /*************************************************** SOLUTION *************************************************************************/
 
 
 #include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 0;
    while(i < n){
        for(int sp = 1; sp < n-i;sp++){
            cout<< " ";
        }
        for(int k = 0; k < ((2*i)+1); k++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}
