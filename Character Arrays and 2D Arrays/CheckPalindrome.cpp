Check Palindrome
Given a String s, check it its palindrome. Return true if string is palindrome, else return false.
Palindrome strings are those, where string s and its reverse is exactly same.
Input Format :
 String S
Output Format :
"true" if S is palindrome, else "false"
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
	
	
/********************************************************* SOLUTION *******************************************************************/
	
	
#include<string.h>
bool checkPalindrome(char str[]){

    int i=0;
    int j = strlen(str) - 1;
    while(j > i){
        if(str[i] != str[j]){
            return false;
        }   
        i++;
        j--;
    }    
    return true;
}
