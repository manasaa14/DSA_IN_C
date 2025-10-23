//GCD OF 2 NOS
#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int a, b;
    printf("Enter values for a and b: ");
    scanf("%d%d", &a, &b);
    //if (a < 0) a = -a;
    //if (b < 0) b = -b;
    printf("GCD of both numbers is: %d\n", gcd(a, b));
    return 0;
}


// TOWER OF HANOI 
#include <stdio.h>
#include <stdlib.h>

void TOH(int n, char s, char d, char t) {
    if (n == 1)
        printf("Move disc 1 from %c to %c\n", s, d);
    else {
        TOH(n - 1, s, t, d);
        printf("Move disc %d from %c to %c\n", n, s, d);
        TOH(n - 1, t, d, s);
    }
}

int main() {
    int n;
    printf("Enter number of discs: ");
    scanf("%d", &n);
    printf("Steps to solve Tower of Hanoi with %d discs:\n", n);
    TOH(n, 'S', 'D', 'T');
    return 0;
}

