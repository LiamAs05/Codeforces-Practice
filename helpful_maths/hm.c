#include <stdio.h>
#include <string.h>

int main() {
    int sums[3] = {0,0,0}, max = 0;
    char c;

    while ((c = getchar()) != '\n') {
        if (c != '+') {
            sums[c - '0' - 1]++;
            if (c - '0' > max)
                max = c - '0';
        }
    }

    char* f_string = "%d+"; 
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < sums[i]; j++) {
            if (i == max-1 && j == sums[i] - 1) {
                f_string = "%d";
            }
            printf(f_string, i+1);
        }
    }

    return 0;
}
