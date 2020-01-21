#include <iostream>

using namespace std;

int fib(int n)
{
    if(n==1 || n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int m;
    while(cin>>m)
    {
        int num1 = fib(m);
        int num2 = fib(m+1);
        cout<<num1<<":"<<num2<<endl;
    }
}
