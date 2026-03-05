#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char captcha[6];
    char user[6];

    srand(time(0));

    printf("CAPTCHA Verification System\n");
    printf("----------------------------\n");

    for(int i = 0; i < 5; i++)
    {
        captcha[i] = 'A' + rand() % 26;
    }

    captcha[5] = '\0';

    printf("Generated CAPTCHA: %s\n", captcha);

    printf("Enter CAPTCHA: ");
    scanf("%s", user);

    if(strcmp(captcha, user) == 0)
        printf("Verification Successful. Human confirmed.\n");
    else
        printf("Verification Failed. Try again.\n");

    return 0;
}