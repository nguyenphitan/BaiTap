#include <iostream>
using namespace std;

int a[20], n;
void init()
{
	for(int i=1 ; i<=n ; i++)
	{
		a[i]=0;
	}
}
void display()
{
	for(int i=1 ; i<=n ; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
void quaylui(int i)
{
	for(int j=0 ; j<=1 ; j++)
	{
		if(1)
		{
			a[i]=j;
			if(i==n) display();
			else quaylui(i+1);
		}
	}
}
int main()
{
	init();
	cin>>n;
	quaylui(1);
	return 0;
}

