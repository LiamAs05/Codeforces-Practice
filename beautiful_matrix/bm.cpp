#include <iostream>
#include <string>

int main()
{
    int c, k = 0;
    
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            std::cin >> c;
            if (c == 1) {
                k = std::abs(2 - i) + std::abs(2 - j);
                break;
            } 
        }

    std::cout << k << std::endl;
    return 0;
}
