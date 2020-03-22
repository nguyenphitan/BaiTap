#include <iostream>
using namespace std;

void thap(int n, char a,char b, char c){
    if(n==1) cout<<a<<"---->"<<c<<endl;
    else
    {
        thap(n-1,a,b,c);
        thap(1,a,c,b);
        thap(n-1,b,a,c);
    }
}
int main()
{
    int n;
    char a='A';
    char b='B';
    char c='C';
    cin>>n;
    thap(n,a,b,c);
}