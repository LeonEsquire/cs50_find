/**
 * generate.c
 *
 * Генерирует псевдослучайные числа в диапазоне [0, MAX), число на линию.
 *
 * Usage: generate n [s]
 *
 * n - число выводимых на экран псевдочисел (print)
 * s - по желанию задаваемое зернышко
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// максимально возможное количество генерируемых целых чисел (integer'ов)
#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: добавьте коммент
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // TODO: добавьте коммент
    int n = atoi(argv[1]);

    // TODO: добавьте коммент
    if (argc == 3)
    {
        srand48((long) atoi(argv[2]));
    }
    else
    {
        srand48((long) time(NULL));
    }

    // TODO: добавьте коммент
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // успех
    return 0;
}
