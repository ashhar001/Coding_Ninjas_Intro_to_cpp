Check Case
Send Feedback
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
Input format :
Single Character
Output format :
1 or 0 or -1
Constraints :
Input can be any character
Sample Input 1 :
v
Sample Output 1 :
0
Sample Input 2 :
V
Sample Output 2 :
1
Sample Input 3 :
#
Sample Output 3 :
-1


/****************************************** SOLUTION *************************************************************************************/

#include<iostream>
using namespace std;
int main() {
	// Write your code here
	char a;
    cin>> a;
    
    if(a >='a' && a <='z'){
        cout<<"0";
    }
    else if(a >= 'A' && a <= 'Z'){
        cout<<"1";
    }
    else{
        cout<<"-1";
    }
}
