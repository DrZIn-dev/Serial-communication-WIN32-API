#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int line;
    int word;
    printf("--- Start Generater ---\n");
    printf("Enter words per line (number) : ");
    scanf("%d", &word);
    printf("Enter lines (number):");
    scanf("%d", &line);
    printf("--------");
    printf("words per line : %d\n", word);
    printf("lines : %d\n", line);
    printf("--- start process ---");
    FILE *fp;
    fp = fopen("sent.txt", "w");
    srand(time(NULL));
    for (int i = 0; i < line; i++)
    {
        if (i % 2 == 0)
        {
            char sent_txt[word];
            for (int j = 0; j < word; j++)
            {
                sent_txt[j] = 'A' + (rand() % 26);
            }
            fprintf(fp, "%s", sent_txt);
        }
        else
        {
            int rand_num[word + 1];
            for (int j = 0; j < word; j++)
            {
                rand_num[j] = rand() % 10;
                fprintf(fp, "%d", rand_num[j]);
            }
                }
        fprintf(fp, "  \n");
    }
    fclose(fp);
    printf("\n--- write to file complete ---");
    return 0;
}