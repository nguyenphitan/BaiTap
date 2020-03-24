#include <iostream>
using namespace std;
int a[20],n,k;

void init()
{
	for(int i=1 ; i<=k ; i++)
	{
		a[i]=i;
	}
	a[0]=0;
}
void display()
{
	for(int i=1 ; i<=k ; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
void quaylui(int i)
{
	for(int j = a[i-1] + 1 ; j<=n-k+i ; j++)
	{
		a[i]=j;
		if(i==k) display();
		else quaylui(i+1);
	}
}
int main()
{
	cin>>n>>k;
	init();
	quaylui(1);
	return 0;
}

