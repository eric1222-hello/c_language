#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct vid //rec =  p * (w /l ) * r
{
	string s; //�v���W�� 
	//int p; //�[�ݤH�� 
	//int l; //�v������ 
	//int w; //�����[�ݮɶ� 
	//int r;  //�����Y��
	double rec; 
}name[1000];

bool cmp(vid a,vid b)
{
	return a.rec>b.rec;
}

int inputvid(int i)
{
	int p,l,w,r;
	cin>>name[i].s>>p>>l>>w>>r;
	name[i].rec = p * (double(w) / double(l)) * r;
}

int sortmovie(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		inputvid(i);
	}
		
	sort(name,name+n,cmp);
		
	for(i=0;i<n;i++)
	{
		cout<<name[i].s<<endl;
	}
}

int main()
{
	int n;
	while(cin>>n)
	{
		sortmovie(n);
	}
}
