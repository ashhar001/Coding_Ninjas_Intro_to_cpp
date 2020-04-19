Code : Inverted Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
55555 
4444
333
22
1
Sample Input 2:
6
Sample Output 2:
666666
55555 
4444
333
22
1

/*************************************************** SOLUTION *************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = n;
    while(i > 0){
        for(int j = 1; j <= i; j++){
            cout<<i;
        }
        cout<<endl;
        i--;
    }
}
