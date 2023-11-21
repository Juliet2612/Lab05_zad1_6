#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    SetConsoleOutputCP(CP_UTF8);
    fflush(stdout);
    int a = 5, b = 6, c = 2, d = 4, e = 1;
    puts("Przykłady operatorów logicznych, porównań i relacji");
    printf(((a == a) && (b != c)) ? "\n1. true" : "\n1. false");
    printf(((a >= a) || (b < c)) ? "\n2. true" : "\n2. false");
    printf(((c == e) && (b > c)) ? "\n3. true" : "\n3. false");
    printf((!(a == d)) ? "\n4. true\n" : "\n4. false\n");
    fflush(stdin);
    getchar();
    printf("\n1. %d", (a == a) && (b != c));
    printf("\n2. %d", (a >= a) || (b < c));
    printf("\n3. %d", (c == e) && (b > c));
    printf("\n4. %d\n", !(a == d));
    fflush(stdin);
    getchar();
    a = 0;
    b = 1;
    if (a && b++) printf("\na=%d b=%d", a, b);
    fflush(stdin);
    getchar();
    c = 0;
    d = 1;
    if (c || d++) printf("\nc=%d d=%d\n", c, d);
    fflush(stdin);
    getchar();
    return 0;
}