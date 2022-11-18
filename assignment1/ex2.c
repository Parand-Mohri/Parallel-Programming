#include <stdio.h>

int factorial(int n); //doest work without this line if the function is under main

int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%i", &n);
    printf("The number is: %i\n", factorial(n));
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n*factorial(n-1);
}