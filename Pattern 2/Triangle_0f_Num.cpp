Code : Triangle of Numbers
Print the following pattern for the given number of rows.
Pattern for N = 3
       1
     232
   34543
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
     
     
/*************************************************** SOLUTION *************************************************************************/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i <= n) {
        
        for(int sp = 1 ;sp <= n - i; sp++){
            cout << " ";
        }
        int temp = i;
        for(int k = 1; k <= i; k++){
            cout << temp++;
        }
        temp--;
        for(int j = 1; j < i; j++){
            cout << --temp;
        }
        cout << endl;
        i++;
    }
}
