#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{

    int n=4;
    int d=12;
    int k=0;
    int a=0;
    int b=0;

    int arr[]={2375, 7682, 2325, 2352};
    int fine[]= {250, 500, 350, 200};
 
    for (int i = 0; i <4; i++)
    {
        if (arr[i]%2!=0)
        {
            a=i;
            b=fine[a];
            k=k+b;
            
            
        }
        
    }
    
  cout<<k;

}