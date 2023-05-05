#include <stdio.h>
#include <string.h>

int main()
{
    int y, i, j;
    char frase[1000];
    printf("digite uma frase, para que seja transformada no jeito do personagem cebolinha\n");
    fgets(frase, 1000, stdin);

    y = strlen(frase);

    for (i = 0; i <= y; i++)
    {
        if (frase[i + 1] != ' ' && frase[i +1]!='\0')
        {
            if (frase[i] == 'r' || frase[i] == 'R')
            {

                if (frase[i+1] == 'r' || frase[i+1] == 'R' )
                {

                    for (j = i; frase[j] != '\0'; j++)
                    {

                        frase[j] = frase[j+1];
                    }
                }
                frase[i] = 'l';
            }
        }
    }
    fputs(frase, stdout);
    
    return 0;
}
