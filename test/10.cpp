#include<iostream>
#include<math.h>

float calc(float c, float d)
{
    float s;
    for (float i = 1.00; 1/i >= d; i++) 
    {
        s = (pow(-1, i) * pow(c, i - 1)) / i;
        std::cout << "S(" << i << ") = " << std::endl;
    }
    return s;
}

int main()
{
    int e, x;
    std::cin >> x >> e;

    std::cout << calc(x * 1.00, e * 1.00) << std::endl;
    return 0;
}