void swap_int_sum_and_minus(int *a, int *b)
{
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
}

void swap_int_Xor(int *a, int *b)
{
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
}
