//
// Created by Parand on 18/11/2022.
//
int anotherFactorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n*anotherFactorial(n-1);
}
