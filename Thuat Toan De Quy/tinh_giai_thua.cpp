#include <iostream>
using namespace std;

long long giaithua(int n){
    if(n==0) return 1;
    else{
        return n*giaithua(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<giaithua(n);
}