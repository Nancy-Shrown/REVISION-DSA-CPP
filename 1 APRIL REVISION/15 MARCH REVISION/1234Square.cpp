/*print
         1234
         1234
         1234
         1234
*/
#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}