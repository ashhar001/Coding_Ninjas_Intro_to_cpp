Sum of even & odd
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :
 Integer N
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
Constraints
0 <= N <= 10^8
Sample Input 1:
1234
Sample Output 1:
6 4
Sample Input 2:
552245
Sample Output 2:
8 15

/************************************************** SOLUTION *****************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int num, sumeven = 0, sumodd = 0, rem;
    cin>>num;

    while ( num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
          sumeven = sumeven + rem;
        }
      else
      {
          sumodd = sumodd + rem;
      }
        num = num/ 10;
    }

    cout << sumeven << " " <<sumodd;
}
