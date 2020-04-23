Remove character
Given a string and a character x. Write a function to remove all occurrences of x character from the given string.
Leave the string as it is, if the given character is not present in the string.
Input format :

Line 1 : Input string

Line 2 : Character x

Sample Input :
welcome to coding ninjas
o
Sample Output :
welcme t cding ninjas


/********************************************************* SOLUTION *******************************************************************/


#include<cstring>
void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int j, n = strlen(input); 
    for (int i=j=0; i<n; i++) 
       if (input[i] != c) 
          input[j++] = input[i]; 
      
    input[j] = '\0'; 
}
