Remove Consecutive Duplicates
Given a string, remove all the consecutive duplicates that are present in the given string. That means, if 'aaa' is present in the string then it should become 'a' in the output string.
Sample Input:
aabccbaa
Sample Output:
abcba


/********************************************************* SOLUTION *******************************************************************/


void removeConsecutiveDuplicates(char input[]) { 
    int nextIndex = 1;
    char lastChar = input[0];
    for(int i = 0; input[i] != '\0';) { 
        if(input[i] == lastChar) { 
            i++; 
        } 
        else {
            input[nextIndex] = input[i];
            nextIndex++; 
            lastChar = input[i];
            i++;
        }
    }
    input[nextIndex] = '\0';
}
