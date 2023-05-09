#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num)
{
    int reverse_num = 0;
    int original_num = num;

    while (num > 0)
    {
        int digit = num % 10;
        reverse_num = reverse_num * 10 + digit;
        num /= 10;
    }

    return (original_num == reverse_num);
}

int main()
{
    int max_palindrome = 0;

    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            int product = i * j;
            if (isPalindrome(product) && product > max_palindrome)
            {
                max_palindrome = product;
            }
        }
    }

    printf("O maior numero palindromo feito a partir do produto de dois numeros de 3 digitos eh: %d\n", max_palindrome);

    return 0;
}
