#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l;
        cin>>n;
        for(l=0;l<=3;l++)
        {
            if((n-5*l)<0)
            {
                cout<<-1<<endl;
                break;
            }
            else if((n-5*l)%3==0)
            {
                for(int i=1;i<=(n-5*l);i++)
                    cout<<5;
                for(int i=(n-5*l)+1;i<=n;i++)
                    cout<<3;
                cout<<endl;
                break;
            }
            else
                continue;
        }
    }
    return 0;
}