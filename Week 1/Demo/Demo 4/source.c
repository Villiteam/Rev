#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char flag[32] = "Em0t3t{STRIng_May_BE_g0od}", input[32];
    puts("Password: ");
    fgets(input, 32, stdin);
    if(!strcmp(flag, input)) {
        puts("Correct password!!");
    } else {
        puts("Incorrect password!!");
    }
    return 0;
}