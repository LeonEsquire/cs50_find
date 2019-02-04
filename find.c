/**
 * Запрашивает у пользователя значение соответсвущее показателю MAX, 
 * пока не будет достигнут EOF (конец файла / END OF FILE). 
 * Далее переходя к поиску needle (иголки) в данном "haystack" (стоге сена).
 *
 *
 * Usage: ./find needle
 *
 * needle - значение, которое мы ищем в значениях стоги сена (haystack)
 * 
 */
       
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

// максимальное количество сена (hay) в стоге сена (haystack)
const int MAX = 65536;

int main(int argc, string argv[])
{
    // проверка на правильный ввод
    if (argc != 2)
    {
        printf("Usage: ./find needle\n");
        return -1;
    }

    // запомнить иголку
    int needle = atoi(argv[1]);

    // заполнить стог сена (haystack)
    int size;
    int haystack[MAX];
    for (size = 0; size < MAX; size++)
    {
        printf("\nhaystack[%i] = ", size);
        int straw = get_int();
        if (straw == INT_MAX)
        {
            break;
        }
     
        // добавить сено в стог (кучу)
        haystack[size] = straw;
    }
    printf("\n");

    // сортировка стога сены
    sort(haystack, size);

    // поиск иголки в стоге сены
    if (search(needle, haystack, size))
    {
        printf("\nFound needle in haystack!\n\n");
        return 0;
    }
    else
    {
        printf("\nDidn't find needle in haystack.\n\n");
        return 1;
    }
}
