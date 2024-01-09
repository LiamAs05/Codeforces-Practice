#include <iostream>
#include <cmath>

int main()
{
    int m, n;
    std::cin >> m >> n;

    if (m % 2 == 0 || n % 2 == 0)
        std::cout << std::max(n*std::floor(m/2), m*std::floor(n/2));
    else
        std::cout << (n-1)*std::floor((m-1)/2)+std::floor(m/2)+std::floor(n/2);
    return 0;
}

