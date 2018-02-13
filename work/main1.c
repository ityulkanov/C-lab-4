
#include "task1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 25
#define M 80

int main() {
    //    здесь мы храним собственно весь текст, который мы будем обрабатывать linesort для этого создаем двумерный массив с N линий и выделяем в каждой по M символов
    char text[N][M] = { 0 };
    //    здесь мы будем хранить только указатели на каждую из линий N
    const char * str[N] = { NULL };
    //    так как линий может быть и меньше, вводим счетчик и инкрементируем его каждый раз когда добавляем новую линию
    int count = 0;
    printf("Enter lines: \n ");
    //    пока количество линий меньше n и пока мы не вводим пустую строку вводим данные в массив text и заодно пишем начало каждой строки в массив str
    while (count < N && *fgets( text[count], M, stdin) != '\n' ) {
        str[count] = text[count];
        count++;
    }
    //    проводим сортировку массива str с помощью linesort
    lineSort(str, count);
    printLines(str, count);
    return 0;
}

