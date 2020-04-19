Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7


/*************************************************** SOLUTION *************************************************************************/


#include<iostream>
using namespace std;
int main() {
	int n, rem, tmp, dec = 0, b=1;
    cin>>n;
    tmp = n;
    
    while(n > 0){
        rem = n % 10;
        dec = dec + rem * b;
        b *= 2;
        n /= 10;
    }
    cout<<dec;
}
