#include <stdio.h>

void print_alphabet() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";

    // Print alphabet and space
    for (int i = 0; i < 53; i++) {
        putchar(alphabet[i]);
    }

    putchar('\n');
}

int main() {
    print_alphabet();
    return 0;
}

