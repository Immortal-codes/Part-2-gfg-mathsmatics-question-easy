#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
   int n=9;
   int k=0;
   int count=0;

   for (int i = 1; i <=10; i++)
   {

        if (n%i==0)
        {
            count++;
        }
        
   }
   
   if (count==3)
   {
   cout<<"Yes";
   }
   else
   {
    cout<<"no";
   }
   


}