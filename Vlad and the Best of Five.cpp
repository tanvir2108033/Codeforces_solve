#include <iostream>
using namespace std;

int main() {
   string s;
   int a, cnta = 0, cntb = 0;
   cin >> a;
   for (int i = 0; i < a ; i ++)
   {
       cin >> s ;
       for(int j = 0; j < a ; j++)
       {
           if( s[j] == 'A' )
           {
               cnta ++;
           }
           else if(s[j] == 'B')
           cntb++;
       }
       if( cnta > cntb)
       {
           cout <<"A"<<endl;
       }
       else
       {
           cout<<"B"<<endl;
       }
       cnta = 0;
       cntb = 0;
   }


    return 0;
}
