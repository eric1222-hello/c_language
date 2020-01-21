#include <iostream>
#include <math.h>
using namespace std;

int primeday(int date)
{
    int flag = 1;
    int i;
    int s = int(pow(10,8));
    while((date != 0) && (flag ==1))
    {
        for(i=2;i<sqrt(date);i++)
        {
            if(date % i == 0)
            {
                flag = 0;
                break;
            }
        }
        date = date % s;
        s = s / 10;
    }
    if(flag==1)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int num,i,j,ans;
        for(i=0;i<n;i++)
        {
            cin>>num;
            ans = primeday(num);
            if(ans)
                cout<<num<<" is a Prime Day!"<<endl;
            else
                cout<<num<<" isn¡¦t a Prime Day!"<<endl;
        }
    }
}
