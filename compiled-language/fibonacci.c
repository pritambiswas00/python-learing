#include <stdio.h>
#include <gmp.h>
#include <time.h>

int main() {
    mpz_t a, b, temp;
    int n = 899999;
    clock_t start, end;

    // Initialize GMP integers
    mpz_init_set_ui(a, 0);  // F(0)
    mpz_init_set_ui(b, 1);  // F(1)
    mpz_init(temp);

    start = clock(); // Start timer

    if(n == 0) {
        mpz_out_str(stdout, 10, a);
        printf("\n");
    } else if(n == 1) {
        mpz_out_str(stdout, 10, b);
        printf("\n");
    } else {
        for(int i = 2; i <= n; i++) {
            mpz_add(temp, a, b); // temp = a + b
            mpz_set(a, b);       // a = b
            mpz_set(b, temp);    // b = temp
        }
        mpz_out_str(stdout, 10, b);
        printf("\n");
    }

    end = clock(); // End timer
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    // Clear GMP integers
    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(temp);

    return 0;
}
