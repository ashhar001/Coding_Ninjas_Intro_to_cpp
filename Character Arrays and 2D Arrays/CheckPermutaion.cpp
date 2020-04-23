Check Permutation
Given two strings, check if they are permutations of each other. Return true or false.
Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
Note : Input strings contain only lowercase english alphabets.
Input format :
Line 1 : String 1
Line 2 : String 2
Sample Input 1 :
abcde
baedc
Sample Output 1 :
true
Sample Input 2 :
abc
cbd
Sample Output 2 :
false


/********************************************************* SOLUTION *******************************************************************/


bool isPermutation(char input1[], char input2[]) {
    int freq[256] = {0};
    for(int i = 0; input1[i] != '\0'; i++) { 
        int index = input1[i];
        freq[index]++; 
    }
    for(int i = 0; input2[i] != '\0'; i++) {
        int index = input2[i];
        freq[index]--; 
    }
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) { 
            return false;
        }
    }
    return true;
}
