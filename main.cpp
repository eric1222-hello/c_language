#include <iostream>

int judge()
{

}

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int i,j;
        int num[n][n]={};
        int ans[n][n]={};
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>num[i][j];
        }
        for(i=0;i<n;i+=2)
        {
            for(j=0;j<n;j+=2)
            {
                int maxi = num[i][j];

                if(maxi < num[i+1][j])
                    maxi = num[i+1][j];
                if(maxi < num[i][j+1])
                    maxi = num[i][j+1];
                if(maxi < num[i+1][j+1])
                    maxi = num[i+1][j+1];
                ans[i][j] = maxi;
            }
        }

        for(i=0;i<n;i+=2)
        {
            for(j=0;j<n;j+=2)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }


}
}
