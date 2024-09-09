#include<iostream>
using namespace std;
//Finding N to Power M

//Recursive Method
int power(int m,int n )
{
    if(n==0) return 1;
    return power(m,n-1)*m;
}

//Iterative Method
int Ipower(int m,int n)
{
    if(n==0) return 1;
    if(n%2==0) 
    return Ipower(m*m,n/2);
}

int main()
{
    int r=power(2,3);
    cout<<r;
    return 0; 
}