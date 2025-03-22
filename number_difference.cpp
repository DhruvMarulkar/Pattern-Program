#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int odd = 1;
    int even = 2;
    int digit_counter = 1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i%2!=0)
            {
             cout<<odd<<" ";
             odd += 2;
             digit_counter += 1;
            }
            else
            {
             cout<<even<<" ";
             even += 2;
              digit_counter += 1;
            }
        }
        cout<<endl;
    }
    return 0;
}
