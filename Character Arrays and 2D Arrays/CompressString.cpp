Compress the String
Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
For e.g. if a String has 'x' repeated 5 times, replace this "xxxxx" with "x5".
Note : Consecutive count of every character in input string is less than equal to 9.
Input Format :
Input string S
Output Format :
Compressed string 
Sample Input:
aaabbccdsa
Sample Output:
a3b2c2dsa



/********************************************************* SOLUTION *******************************************************************/


// input - given string
// You need to update in the given string itself i.e. in input. No need to return or print.

void stringCompression(char input[]){
    int count = 1;
    char currentChar = input[0];
    int i, nextIndex = 1;
    for(i = 1; input[i] != '\0'; i++){
        // Count the occurrence of consecutive duplicate character
        if(input[i] == currentChar){
            count++;
        }
        else{
            // Append the count with string
            if(count > 1){
                input[nextIndex] = char(count + 48);
                nextIndex++;
            }
            currentChar = input[i];
            input[nextIndex] = input[i];
            nextIndex++; count = 1;
        }
    }
    if(count > 1){
        input[nextIndex] = char(count + 48);
        nextIndex++;
    }input[nextIndex] = '\0';
}
