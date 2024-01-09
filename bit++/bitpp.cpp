#include <iostream>
#include <string>

int main()
{
    int n, x = 0;
    std::string l;

    std::cin >> n;

    while (n--)
    {
        std::cin >> l;
        if (l.find("++") != std::string::npos) {
            x++;
        }
        else {
            x--;
        }
    }
    std::cout << x << std::endl;
    
    return 0;
}
