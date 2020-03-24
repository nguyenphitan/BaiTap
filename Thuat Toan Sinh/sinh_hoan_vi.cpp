
#include <bits/stdc++.h>
using namespace std;

/* 
3
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1

 */

int a[20], n;

void init();
bool isend();
bool cmp();
bool xx();
void display();
void gene();

void init()
{
	for(int i=1 ; i<=n ; i++) a[i]=i;
}

bool isend()
{
	for(int i=1 ; i<=n ; i++)
	{
		if(a[i] == n-i+1) return true;
		else return false;
	}
}

bool cmp(int a, int b)
{
	return a>b;
}
bool xx()
{
	return is_sorted(a+1,a+n+1,cmp);
}
void display()
{
	for(int i=1 ; i<=n ; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}

void gene()
{
	for(int i=n-1 ; i>=1 ; i--)    // chay tu n-1 de khi xet a[i+1] khong bi tran mang.
	{
		if(a[i] < a[i+1])
		{
			for(int j=n ; j>i ; j--)
			{
				if(a[j] > a[i])
				{
					swap(a[i],a[j]);
					sort(a+i+1,a+n+1);
				}
			}
		}
	}
}

int main()
{
	init();
	cin>>n;
	while( !isend())
	{
		display();
		gene();
	}
	display();
	return 0;
}
