#include <iostream>
using namespace std;

int main() 
{
    int n = 6;
    int a = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<a<<" ";
            a += 2;
        }
    cout<<endl;    
    }
    return 0;
}
