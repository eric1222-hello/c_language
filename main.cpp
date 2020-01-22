#include <iostream>

using namespace std;

int main()
{
    int n,t;
    while(cin>>n>>t)
    {
        int i,j,num[t];
        int ans[t] = {0};

        for(i=0;i<n;i++)  //這個超級重要的啦!!
        {
            for(j=0;j<t;j++)
            {
                cin>>num[j];

                if(num[j] == 1)
                    ans[j] += 1;
            }
        }

        cout<<"AND: ";
        for(i=0;i<t;i++)
        {
            if(ans[i] == n)
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
        cout<<" OR: ";
        for(i=0;i<t;i++)
        {
            if(ans[i] > 0)
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
        cout<<"XOR: ";
        for(i=0;i<t;i++)
        {
            if(ans[i] % 2 == 1)
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
