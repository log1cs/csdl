#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int i = 4;
    while(i)
    {
        if(i>3)
        {
            --i;
        }

        i = i + 4;

        if (i > 20)
        {
            break;
        }
    }

    cout << i;
}