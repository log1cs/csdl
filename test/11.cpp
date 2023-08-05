#include<iostream>
#include<cmath>

double ducanhngu(double n)
{
    if (abs(n) <= 2) 
    {
        return 1;
    }

    return 2;
}

int main()
{
    double x, y;
    std::cout << "Enter an interger in order (x, y): " << std::endl;
    std::cout << "x = "; std::cin >> x;
    std::cout << "y = "; std::cin >> y;

    if (ducanhngu(x) == 1) {    
        double fx = sqrt(pow(exp(1), 2 * x + 1) + 1) + 7;
        double fy = sqrt(pow(exp(1), 2 * y + 1) + 1) + 7;
        double res = pow((fx + fy), 2);

        std::cout << "f(x): " << fx << std::endl;
        std::cout << "Result of (f(x) + f(y)) ^ 2 = " << res << std::endl;    

        for (double x = -5.0; x <= 3; x+=0.1) 
        {
	        round(x * 100) / 100;
            if (ducanhngu(x) == 1) {    
                double fx = sqrt(pow(exp(1), 2 * x + 1) + 1) + 7;
                std::cout << "Result of x = " << x << " in f(x) = " << fx << std::endl;
            } else {
                double fx = pow(x, 5) + pow(5 * x, 3) + x + 1;
                std::cout << "Result of x = " << x << " in f(x) = " << fx << std::endl;
            }        
        }
        
    } else {
        double fx = pow(x, 5) + pow(5 * x, 3) + x + 1;
        double fy = pow(y, 5) + pow(5 * y, 3) + y + 1;
        double res = pow((fx + fy), 2);
        std::cout << "Result: " << fx << std::endl;
        std::cout << "Result of (f(x) + f(y)) ^ 2 = " << res << std::endl;

            for (double x = -5.0; x <= 3; x+=0.1) 
            {
		        round(x * 100) / 100;
                if (ducanhngu(x) == 1) {    
                    double fx = sqrt(pow(exp(1), 2 * x + 1) + 1) + 7;
                    std::cout << "Result of x = " << x << " in f(x) = " << fx << std::endl;
                } else {
                    double fx = pow(x, 5) + pow(5 * x, 3) + x + 1;
                    std::cout << "Result of x = " << x << " in f(x) = " << fx << std::endl;
                }        
            }
        }

    return 0;
}
