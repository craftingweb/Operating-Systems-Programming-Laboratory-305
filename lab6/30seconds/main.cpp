#include <iostream>
#include "math.h"
#include <unistd.h>
using namespace std;
int main()
{
    int n=1800;
    float total=0;
    int i=0;
    int * array;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            array = new int[5];
            for(int k=0;k<n;k++){
                total=total+((float)k*0.75);///pow(2,n);
                array[0]=total;
            }
            delete  array;
        }
    }
    return 0;
}