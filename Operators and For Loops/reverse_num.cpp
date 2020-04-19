Reverse of a number
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
Sample Input 2 :
1980
Sample Output 2 :
891


/*************************************************** SOLUTION *************************************************************************/


#include<iostream>
using namespace std;
int main() {
	int n;
    cin >> n;
    int rev = 0,rem;
    
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << rev;
}
