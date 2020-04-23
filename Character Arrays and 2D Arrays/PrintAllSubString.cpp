Print All Substrings
Given a String S of length n, print all its substrings.
Substring of a String S is a part of S (of any length from 1 to n), which contains all consecutive characters from S.
Input Format :
String S
Output Format :
 All Substrings of S, one in each line.
Note : The order in which you print substrings doesn't matter.
Sample Input 1 :
xyz
Sample Output 1 :
x
xy
xyz
y
yz
z


/********************************************************* SOLUTION *******************************************************************/


#include<cstring>
void printSubstrings(char str[]){
    for(int start = 0; str[start] != '\0'; start++){
        for(int end = start; str[end] != '\0'; end++){
            for(int i = start; i <= end; i++){
                cout << str[i];
            }
            cout << endl;
        }
    }
}
