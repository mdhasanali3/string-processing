#include<iostream>
#include<math.h>
using namespace std;

main()
{

  int j,k,n=1,r,t,a,b=0,i,s=0;
   cin>>a;

   for(i=1;i<=n;i++)
   {
       s=s+i;
       b=b+s;

       if(b>a)
        {cout<<n-1;break;}
       else if(b==a)
        {cout<<n;break;}
        n++;

   }


      }
