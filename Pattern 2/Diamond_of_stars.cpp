Code : Diamond of stars
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 7
   *
  ***
 *****
*******
 *****
  ***
   *
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
  
  
/*************************************************** SOLUTION *************************************************************************/


#include<bits/stdc++.h>
using namespace std; 
int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= (n/2) + 1) {
        int k = 1; //k is the number of spaces
        while(k <= (n/2) + 1 - i) {
            cout << " "; k++; 
        }
        int j = 1; 
        while(j <= (2*i) - 1) {
            cout << "*"; 
            j++;
        }
        cout << endl;
        i++; 
    }
    i = 1;
    while(i <= n / 2){
        int k = 1;
        while(k <= i) {
            cout << " "; 
            k++;
        } 
        int j = 2 * ((n/2) - i + 1) - 1;
        while(j >= 1) {
            cout << "*"; 
            j--; 
        }
        cout << endl;
        i++;
    }
}
