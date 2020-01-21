#include <iostream>

using namespace std;

int main()
{
    int b,p; //b為最少人流之公車站牌，p為示共有多少人要搭乘此公車
    while(cin>>b>>p)
    {
        int i,j,n,m,tmp;
        int num[1001] = {0};
        for(i=1;i<=p;i++)
        {
            cin>>n>>m;
            if(n>m)
            {
                tmp = n;
                n = m;
                m = tmp;
            }
            for(j=n;j<=m;j++)
                num[j]+=1;
        }
        int max_index,min_index;
        int maxi = 1;
        int mini = 1000;
        for(i=1;i<=b;i++)
        {
            if(mini > num[i])
            {
                mini = num[i];
                min_index = i;
            }
            if(maxi <= num[i])
            {
                maxi = num[i];
                max_index = i;
            }
        }

        cout<<min_index<<" "<<max_index<<endl;


    }
}
