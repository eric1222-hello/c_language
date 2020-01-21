#include <iostream>

using namespace std;

int fib_loop(int n)
{
    int a = 1;
    int b =1;
    int c;
    if(n==1 || n==2)
        return 1;
    else
    {
        for(int i=3;i<=n;i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main()
{
    int m;
    while(cin>>m)
    {
        int num1 = fib_loop(m);
        int num2 = fib_loop(m+1);
        cout<<num1<<":"<<num2<<endl;
    }
}
