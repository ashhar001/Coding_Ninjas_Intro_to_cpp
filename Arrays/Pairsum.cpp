Pair sum
Given a random integer array A and a number x. Find and print the pair of elements in the array which sum to x.
Array A can contain duplicate elements.
While printing a pair, print the smaller element first.
That is, if a valid pair is (6, 5) print "5 6". There is no constraint that out of 5 pairs which have to be printed in 1st line. You can print pairs in any order, just be careful about the order of elements in a pair.
Input format :
Line 1 : Integer N (Array size)
Line 2 : Array elements (separated by space)
Line 3 : Integer x
Output format :
Line 1 : Pair 1 elements (separated by space)
Line 2 : Pair 2 elements (separated by space)
Line 3 : and so on
Constraints :
0 <= N <= 10^4
0 <= x <= 100
Sample Input 1:
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
1 6
3 4
3 4
2 5
2 5
3 4
3 4


/***************************************************** SOLUTION **************************************************************************/


void pairSum(int input[], int size, int x) {
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
            if(i!=j){
                if((input[i] + input[j]) == x){
                    if(input[i] < input[j]){
                        cout << input[i]<<" "<< input[j] << endl;
                       
                    }
                    else{
                        cout << input[j]<<" "<< input[i] << endl;
                    }
                }
            }
        }
    }
}
