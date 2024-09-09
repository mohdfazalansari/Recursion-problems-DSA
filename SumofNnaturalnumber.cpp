#include<iostream>
using namespace std;

//Sum of N natural number
//Recursive method to solve problem
int sum(int n)
{ 
  if(n==0) return 0;
    return sum(n-1)+n;
}

//Iterative method to solve problem
int Isum(int n)
{
    int s = 0,i;
    for(i=1;i<=n;i++)
    s=s+i;
    return s;
}

int main()
{
    int r=sum(8);
    cout << r;
    return 0; 
}