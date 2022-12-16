#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main() {

int64_t num = 612852475143;
int64_t largest_factor = 1;

int64_t max_factor = (int64_t) sqrt(num);
for (int64_t i = 2; i <= max_factor; i++) {
while (num % i == 0) {
largest_factor = i;
num /= i;
}
}

if (num > 1) {
largest_factor = num;
}

printf("%lld\n", largest_factor);
return 0;
}
