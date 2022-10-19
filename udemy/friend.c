// functions
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_int_in_range(int upper, int lower);
char name[] = "Julia";

void hug()
{
    printf("Lemme hug you you little poor meowmeow<3\n\[hug being sent\]\n");
    return;
}

void allegiance()
{
    printf("I don't think I'll meet anyone like you in my life. You're such an interesting person.\n");
    return;
}

void compliment()
{
    // Initialization, should only be called once.
    int r = rand();
    char word1[] = "inquisitive";
    char word2[] = "hard-working";
    char word3[] = "sentitive";
    char *strs[3];
    strs[1] = word1;
    strs[2] = word2;
    strs[3] = word3;
    int rand_num;
    rand_num = random_int_in_range(3, 1);
    printf("There are not many people out there as %s as you are.\n", strs[rand_num]);
    return;
}

int random_int_in_range(int upper, int lower)
{
    srand(time(0));
    int num = (rand() % (upper - lower + 1)) + lower;
    return num;
}

int main()
{
    char name[] = "Yuul";
    printf("%s, dearest!\n", name);
    hug();
    allegiance();
    compliment();
    return EXIT_SUCCESS;
}
