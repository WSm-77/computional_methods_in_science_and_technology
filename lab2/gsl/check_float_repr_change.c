// for compilation remember to correctly link gsl library with '-lgsl' flag:
// gcc -o check_float_repr_change check_float_repr_change.c -lgsl

#include <gsl/gsl_ieee_utils.h>

int main() {
    float value = 1e-5;

    for (int itterations = 0; itterations < 100; itterations++) {
        if (value <= 0)
            break;

        printf("value: "); gsl_ieee_printf_float(&value);
        printf("\n");

        value /= 10;
    }

    return 0;
}
