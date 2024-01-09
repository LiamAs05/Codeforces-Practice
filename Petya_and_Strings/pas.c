#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char one[100], two[100];
    
    memset(one, 0, 200);
    scanf("%100s", one);
    scanf("%100s", two);
    
    for (int i = 0; i < 100; i++) {
        one[i] = tolower(one[i]);
        two[i] = tolower(two[i]);
    }

    printf("%d", strcmp(one, two));
    return 0;
}
