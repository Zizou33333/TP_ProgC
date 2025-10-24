cat > variables.c << 'EOF'
#include <stdio.h>

int main() {
    printf("Affectation et affichage des variables de types de base :\n\n");

    // Types caractères
    signed char c_signe = -65;
    unsigned char c_non_signe = 200;

    // Types entiers courts
    signed short s_signe = -32000;
    unsigned short s_non_signe = 65000;

    // Types entiers
    signed int i_signe = -123456;
    unsigned int i_non_signe = 123456;

    // Types long
    signed long int l_signe = -1234567890L;
    unsigned long int l_non_signe = 1234567890UL;

    // Types long long
    signed long long int ll_signe = -9876543210LL;
    unsigned long long int ll_non_signe = 9876543210ULL;

    // Types à virgule flottante
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.414213562373095L;

    // Affichage
    printf("char (signed)        : %d\n", c_signe);
    printf("char (unsigned)      : %u\n", c_non_signe);

    printf("short (signed)       : %d\n", s_signe);
    printf("short (unsigned)     : %u\n", s_non_signe);

    printf("int (signed)         : %d\n", i_signe);
    printf("int (unsigned)       : %u\n", i_non_signe);

    printf("long int (signed)    : %ld\n", l_signe);
    printf("long int (unsigned)  : %lu\n", l_non_signe);

    printf("long long (signed)   : %lld\n", ll_signe);
    printf("long long (unsigned) : %llu\n", ll_non_signe);

    printf("float                : %.2f\n", f);
    printf("double               : %.9f\n", d);
    printf("long double          : %.15Lf\n", ld);

    return 0;
}
EOF
