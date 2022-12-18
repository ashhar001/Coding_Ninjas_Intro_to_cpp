Remove Consecutive Duplicates
Given a string, remove all the consecutive duplicates that are present in the given string. That means, if 'aaa' is present in the string then it should become 'a' in the output string.
Sample Input:
aabccbaa
Sample Output:
abcba


/********************************************************* SOLUTION *******************************************************************/


void removeConsecutiveDuplicates(char input[]) { 
        int k=0;
    int l=strlen(input);
    int j;
    for(int i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(input[i]!=input[j]){
                j=j-1;
                break;
                
            }
        }
            input[k]=input[i];
            k++;
            i=j;
        }
    input[k]='\0';
}
