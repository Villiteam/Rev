#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char input[32];
    puts("Password: ");
    fgets(input, 32, stdin);
    int i = 0;
    if (input[0] != 'E')
        i=1;
    else if (input[11] != '3')
        i=1;
    else if (input[1] != 'm')
        i=1;
    else if (input[2] != '0')
        i=1;
    else if (input[3] != 't')
        i=1;
    else if (input[12] != 't')
        i=1;
    else if (input[4] != '3')
        i=1;
    else if (input[16] != '$')
        i=1;
    else if (input[5] != 't')
        i=1;
    else if (input[6] != '{')
        i=1;
    else if (input[13] != '_')
        i=1;
    else if (input[8] != 'f')
        i=1;
    else if (input[17] != 'y')
        i=1;
    else if (input[9] != '_')
        i=1;
    else if (input[15] != '@')
        i=1;
    else if (input[10] != 'g')
        i=1;
    else if (input[18] != '}')
        i=1;
    else if (input[14] != 'e')
        i=1;
    else if (input[7] != 'I')
        i=1;
    
    if(i) {
        puts("Incorrect password!!");
    } else {
        puts("Correct password!!");
    }
    return 0;
}