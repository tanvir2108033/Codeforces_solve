#include<iostream>
using namespace std;

int main()
{
    int a, i, c=0;
    cin>>a;
    int b[a];
    for( i = 0 ; i < a ; i++ )
    {
        cin>>b[i];
    }

    for(i = 0 ; i < a ; i++)
    {
        if( b[i] == 1)
        {
            c = 1;
            break;
        }
    }

    if( c == 1 )
    {
        cout<< "HARD" <<endl;
    }
    else
    {
        cout<< "EASY" << endl;
    }
}

