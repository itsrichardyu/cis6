/**
 * Program Name: cis6Hw2FunEx1.c
 * Discussion:   Formatted Outputs
 */

#include <stdio.h>
int main() {
    char cVar;
    int iVar;
    double dVar;
    
    printf("12345678901234567890\n");
    printf("%d%c%f\n", 23, 'z', 4.1);
    printf("%c%d%f\n", 23, 'z', 4.1);
    printf("%c%d%f\n", 'z', 23, 4.1);
    printf("%c%f%d\n", 'z', 4.1, 23);

    printf("\n");
    cVar = 'z';
    iVar = 23;
    dVar = 4.1;

    printf("%d%c%f\n", iVar, cVar, dVar);
    printf("%c%d%f\n", iVar, cVar, dVar);
    printf("%c%d%f\n", cVar, iVar, dVar);
    printf("%c%f%d\n", cVar, dVar, iVar);

    return 0;
}