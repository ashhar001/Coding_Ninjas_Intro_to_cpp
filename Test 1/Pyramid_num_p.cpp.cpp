Pyramid Number Pattern
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345
		
		
/*************************************************** SOLUTION *************************************************************************/
		
		
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i, j, k, l;
    
    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            cout<<(" ");
        }
        for (k = i; k >= 1; k--)
        {
            cout<< k;
        }
        for (l = 2; l <= i; l++)
        {
            cout<<l;
        }
        cout<<"\n";
    }
}
