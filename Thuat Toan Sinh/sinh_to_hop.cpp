#include <iostream>
using namespace std;

int n,k,a[20];

void init();
bool isend();
void display();
void gene();

int main()
{
    init();
    while( ! isend() )
    {
        display();
        gene();
    }
    display();
}
void init()
{
    cin>>n>>k;
    for(int i=1 ; i<=n ; i++) a[i]=i;
}
bool isend()
{
    if(a[1] == n-k+1) return true;
    else return false;
}
void display()
{
    for(int i=1 ; i<=k ; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}
void gene()
{
    for(int i=k ; i>=1 ; i--)
    {
        if(a[i] != n-k+i)
        {
            a[i]++;
            for(int j=i+1 ; j<=k ; j++)
            {
                a[j]=a[i]+j-i;
            }
            break;
        }
    }
}