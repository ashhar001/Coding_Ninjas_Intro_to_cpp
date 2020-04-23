Reverse Word Wise
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Sample Input:
Welcome to Coding Ninjas
Sample Output:
Ninjas Coding to Welcome


/********************************************************* SOLUTION *******************************************************************/

int length(char input[])
{
    int len = 0; 
    for(int i = 0; input[i] != '\0'; i++) 
    {
         len++;
    }
        return len; 
}
void reverse(char input[], int start, int end){
    int i = start,
    j = end; 
    while(i < j) 
    { 
        char temp = input[i]; 
        input[i] = input[j]; 
        input[j] = temp; 
        i++; 
        j--; 
    } 
}

void reverseCompleteString(char input[]) { 
    int i = 0, 
    j = length(input) - 1; 
    while(i < j) {
        char temp = input[i]; 
        input[i] = input[j]; 
        input[j] = temp;
         i++; 
        j--; 
    } 
}
void reverseStringWordWise(char input[]){
    reverseCompleteString(input); 
    int start = 0, 
    end = 0, i; 
    for(i = 0; input[i] != '\0'; i++){
         if(input[i] == ' '){
            end = i - 1; 
            reverse(input, start, end);
            start = i + 1; 
        }
    } 
end = i - 1; 
reverse(input, start, end); 
}
//SOLUTION
/*
int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        len++; 
    }
    return len;
}
void reverse(char input[], int start, int end) {
    int i = start, j = end;
    while(i < j) {
        char temp = input[i];
        input[i] = input[j]; 
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseCompleteString(char input[]) { 
    int i = 0, j = length(input) - 1;
    while(i < j) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseStringWordWise(char input[]) {
    reverseCompleteString(input);
    int start = 0, end = 0, i;
    for(i = 0; input[i] != '\0'; i++) { 
        if(input[i] == ' ') {
            end = i - 1;
            reverse(input, start, end);
            start = i + 1;
        }
    }
    end = i - 1;
    reverse(input, start, end); 
}
*/
