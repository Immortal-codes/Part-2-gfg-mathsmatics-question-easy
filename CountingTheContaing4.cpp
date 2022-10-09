#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{

    int n=44;
    int count=0;
    for (int i = 0; i <=n; i++)
    {
       if (i%10==4)
       {
        count++;
       }
       
    }
    cout<<count;
    




}