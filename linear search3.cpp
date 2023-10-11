#include <iostream>
using namespace std;
int main() {
    int i,l,s=0,n;
    cout<<"no of integer";
    cin>>n;
    int a[20]={33,100,77,42,12};
    for(i=0;i<n;i++)
    {
        l=a[i]/=10;
        s+=l;
    }
    cout<<"sum of numbers after deleting last digits:"<<s;
}
