#include <iostream>
#include <string>

using namespace std;

int n;
string a[101];
string output;
int x;

void greedy();

int main()
{
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>x;
            a[i]=to_string(x);
        }
        greedy();
        cout<<output<<endl;
    }
    return 0;
}

void greedy()
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(a[i]+a[j]<a[j]+a[i])
            {
                swap(a[i],a[j]);
            }
        }
    }
    output=a[0];
    for(int i=1; i<n; i++)
    {
        output+=a[i];
    }
}
