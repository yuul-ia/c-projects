#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int MAX = 1000;

bool isOutOfBounds(int limit)
{
    return (limit < 2 || limit > MAX);
}

bool isPrime(int number)
{
    bool prime = true;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printLimitError()
{
    printf("Error: must be 2 < limit <MAX\n");
}

int main()
{
    printf("===Prime Nums Improved===\n");

    int upperLimit;
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    if (isOutOfBounds(upperLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }
    printf("Prime numbers up to %d: \n", upperLimit);

    for (int number = 2; number < upperLimit; number++)
    {
        if (isPrime(number))
        {
            printf("%d\n", number);
        }
    }

    int lowerLimit;
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    if (isOutOfBounds(lowerLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }
    int firstPrimeNumber = -1;
    for (int number = lowerLimit + 1; number < MAX; number++)
    {
        if (isPrime(number))
        {
            firstPrimeNumber = number;
            break;
        }
    }

    if (firstPrimeNumber == -1)
    {
        printf("Cannot find prime numbers above %d\n", lowerLimit);
    }
    else
    {
        printf("First prime number above %d is %d\n", lowerLimit, firstPrimeNumber);
    }

    return EXIT_SUCCESS;
}

/*
func taking a an b and deciding which is upp which low
func checking upper num
func checking lower num








*/