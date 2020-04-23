Trim Spaces
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi


/********************************************************* SOLUTION *******************************************************************/


#include<string.h>
void trimSpaces(char input[]) {

    int count = 0;
    int len = strlen(input);
    for(int i = 0; input[i]; i++){
        if(input[i] != ' '){
            input[count]=input[i];
            count++;
        }
    }
    input[count] = '\0';
}
