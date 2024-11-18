#include<iostream>
using namespace std;

int main()
{
    int n, p, q, sum = 0;
    cin >> n;
    int a[2];
    for(int i = 0; i < n ; i++ )
    {
        cin>>p>>q;
        if( q - p >= 2 )
        {
            sum++;
        }
        else
            continue;
    }
    cout<<sum<<endl;
}
