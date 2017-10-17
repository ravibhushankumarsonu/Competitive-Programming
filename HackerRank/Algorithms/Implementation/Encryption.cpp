#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
 
int main()
{
    char s[1000];
    gets(s);
    int length = strlen(s);
    int width, height;
    int lo = floor(sqrt(length)), hi = ceil(sqrt(length));
    int i, j;
    bool found = false;
    for(i = lo; i<=hi; i++)
    {
        for(j = i; j<=hi; j++)
        {
            if(i*j>=length)
            {
                found = true;
                break;
            }
        }
        if(found) break;
    }
    width = j; height = i;
    int N = 0;
    for(i = 0; i<width; i++)
    {
        for(j = 0; j<height; j++)
        {
            N = j*width +i;
            if(N<length) putchar(s[N]);
        }
        putchar(' ');
    }
    return 0;
}