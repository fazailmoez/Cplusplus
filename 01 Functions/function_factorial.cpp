#include <iostream>
using namespace std;
int Fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
       

    }
     return ans;
}
int main()
{
    int a;
    cout<<"Enter the number :";

    cin>>a;
    cout<<Fact(a);
    cout<<endl;
}