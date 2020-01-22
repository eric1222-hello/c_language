#include <iostream>

using namespace std;

int main()
{
    int n,m;
    char ch;
    while(cin>>n>>m)
    {
        int i,j;
        cin>>ch;
        int num[n]={0};
        int ans[n][m];
        //int ans[n][m]={0};
        //int ans1[3][3] = {0};
        for(int x=0;x<n;x++)
        {
        	for(int y=0;y<m;y++)
        		ans[x][y] = 0;
		}
        for(i=0;i<n;i++)
            cin>>num[i];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
				if(num[i]%2 == 1)
                    ans[i][j] = 1;
                else
                    ans[i][j] = 0;
				num[i] /= 2;
            }
            for(j=m-1;j>=0;j--)
            {
                if(ans[i][j])
                    cout<<ch<<" ";
                else
                    cout<<". ";
            }
            cout<<endl;
        }
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            	cout<<ans[i][j]<<" ";
            cout<<endl;
    	}
    	cout<<endl;*/
        /*for(i=0;i<n;i++)
        {
            int ans[63]={0};
            for(j=0;j<m;j++)
            {
                if(tmp%2 == 1)
                    ans[j] = 1;
                tmp = tmp / 2;
            }
            for(int k=m-1;k>=0;k--)
            {
                if(ans[k]==1)
                    cout<<ch<<" ";
                else
                    cout<<". ";
            }
            cout<<endl;
        }*/

    }
}

