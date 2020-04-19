Nth Fibonacci Number
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
Integer n
Output Format :
Nth Fibonacci term i.e. F(n)
Constraints:
1 <= n <= 25
Sample Input 1:
4
Sample Output 2:
3 
Sample Input 1:
6
Sample Output 2:
8

/*************************************************** SOLUTION *************************************************************************/


#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int pn=1;int nn=1;
    int fib=0;
    if(N ==1){
    	cout<<pn;
	}
	else if(N==2){
		cout<<nn;
	}
	else{
		for(int i=1; i< N-1; i++){
        fib = pn + nn;
        
        pn=nn;
        nn=fib;
	}
	cout<<fib;
	}
}
