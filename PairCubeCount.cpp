#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{

    int n=9;
    int a=0;
    int b=0;

    for (int i = 1; i <=n; i++)
    {
        for (int j = i+1; j <=n; j++)
        {
            a=i*i*i;
            b=j*j*j;

            if (a+b==n)
            {
               cout<<i<<" "<<j;
               break;
            }
            
            
        }
        
    }
    


}