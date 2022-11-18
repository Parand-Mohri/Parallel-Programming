#include <stdio.h>
#include "ex3.c"

int factorial(int n); //doest work without this line if the function is under main
int fib(int n);

int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%i", &n);
    printf("The factorial is: %i\n", factorial(n));
    printf("The fibonacci is: %i\n", fib(n));
    printf("The factorial called from another file is: %i\n", anotherFactorial(n));
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n*factorial(n-1);
}

int fib(int n) {
    if(n<2)
        return n;
    return (fib(n-1) + fib(n-2));

}