#include <stdio.h>
#include <stdlib.h>

int main()
{

    greet();
    while (1)
    {

        printf("Type a number to convert OR '0' to exit.\n");
        int the_num;
        scanf("%d", &the_num);
        if (the_num == 0)
        {
            return EXIT_SUCCESS;
        }
        else
        {
            printf("Decimal:     %8d\n", the_num);
            printf("Hexadecimal: %8X\n", the_num);
        }
    }
}

int greet()
{
    printf("Welcome to the number converter!\n");
    return 0;
}
