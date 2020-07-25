//#include <stdio.h>

//void printArray(int *arr, int len)
//{
//    int i = 0;
//    while(i < len)
//    {
//        printf("%03d,", arr[i++]);
//    }
//    printf("\n");
//}
//float average(int *arr, int len)
//{
//    float result = 0;
//    int j;
//    for(j = 0; j < len; j++)
//    {
//        result += *(arr + j);
//    }
//    return result / len;
//}

//#include <time.h>
//#include <stdlib.h>
//#define ARRAY_LENGHT 50
//#define NUMBERS_AMOUNT 1000000
//#define boolean int
//#define true 1==1
//#define false !true

//#include "header.h"
//int sum(const int a, const int b);
//int isPrime(int number);
//void swap_variables(int* x, int* y)
//{
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//int main(int argc, const char** argv)
//{
//    printf("Hello World!\n");
//    int x = sum(50, 60);
//    printf("Сумма двух чисел = %d\n", sum(10, 35));

//    int number = 71;
//    printf("Введённое число %d %sявляется простым\n", number, isPrime(number) ? "" : "не");
//    int a = 50;
//    printf("Значение a = %d\n", a);
//    printf("Адрес a: %p\n", &a);
//    int* pointer;
//    pointer = &a;
//    printf("Значение указателя pointer = %p\n", pointer);
//    printf("Адрес указателя pointer = %p\n", &pointer);
//    printf("Переменная pointer указывает на: %d\n", *pointer);
//    *pointer = 70;
//    printf("Значение a = %d\n", a);
//    int b = 10;
//    printf("a = %d, b = %d\n", a, b);
//    swap_variables(&a, &b);
//    printf("a = %d, b = %d\n", a, b);


//    srand(time(NULL)); //Начальное значение для генератора псевдослучайных чисел
//    int frequency[ARRAY_LENGHT] = {0};
//    int a;
//    int i;
//    for(i = 0; i < NUMBERS_AMOUNT; i++)
//    {
//        a = rand() % ARRAY_LENGHT;
//        frequency[a]++;
//    }
//    for(i = 0; i < ARRAY_LENGHT; i++)
//    {
//        printf("Число %d сгенерировалось %6d (%5.2f%%) раз\n",
//               i, frequency[i], ((float)frequency[i] / NUMBERS_AMOUNT * 100));
//    }


//    const int ARRAY_LENGTH = 10;
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    printArray(arr, ARRAY_LENGTH);
//    printf("Среднее арифметическое: %f\n", average(arr, ARRAY_LENGTH));
//    return 0;

    //Так можно вручную заполнять двумерные массивы:
//    int arr[3][4] =
//    {
//    {0,1,2,3},
//    {4,5,6,7},
//    {8,9,10,11}
//    };

//    const int ROWS = 10;
//    const int COLS = 10;
//    int table[ROWS][COLS];
//    int r;
//    int c;
//    for(r = 0; r < ROWS; r++)
//    {
//        for(c = 0; c < COLS; c++)
//        {
//            table[r][c] = (r + 1) * (c + 1);
//        }
//    }

//    for(r = 0; r < ROWS; r++)
//    {
//        for(c = 0; c < COLS; c++)
//        {
//            printf("%4d", table[r][c]);
//        }
//        printf("\n");
//    }

//    char* stringArray[3] = {"Hello", "C-language", "World"};
//    printf("%s %s %s\n", stringArray[0], stringArray[1], stringArray[2]);
//}

//***************************************************************************
//Выполнение заданий к третьему уроку "Основы С" Александр Юнин.


#include <stdio.h>
//#include <math.h>

//Функция для задания №1:

//int calcSquareEq(int a, int b, int c, double* x1, double* x2)
//{
//    float D;
//    D = (b * b) - (4 * a * c);
//    if(D < 0)
//    {
//        return -1;
//    }
//    else
//    {
//        if(D == 0)
//        {
//            *x1 = (- b) / (2 * a);
//            *x2 = *x1;
//            return 0;
//        }
//        else
//        {
//            *x1 = (- b + sqrt(D)) / (2 * a);
//            *x2 = (- b - sqrt(D)) / (2 * a);
//            return 1;
//        }
//    }
//}

//Функция для задания №2:

//int evenInteger(int* arr, int ARRAY_LENGTH)
//{
//    int k = 0;
//    int j;
//    for(j = 0; j < ARRAY_LENGTH; j++)
//    {
//        if(*(arr + j) % 2 != 0)
//        {
//            arr[j] = *(arr + j) * 2;
//            k = 1;
//        }
//        else
//        {
//            continue;
//        }
//    }
//    if(k == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}

//Функция для задания №3:

void asShortPrint(unsigned* arr, int len)
{
    int i;
//    unsigned short a;
    for(i = 1; i < len; i++)
    {
//        a = *(arr + i);
        printf("%u ", *(arr + i) >> 16);
    }
}

int main(int argc, const char** argv)
{

// Задание №1:

//    int a, b, c;
//    double X1, X2;
//    printf("Нахождение корней уравнения вида: a*x**2 +b*x +c=0\n Введите значение для a: \n");
//    scanf("%d", &a);
//    printf("Введите значение для b: \n");
//    scanf("%d", &b);
//    printf("Введите значение для c: \n");
//    scanf("%d", &c);
//    int d;
//    double* x1 = &X1;
//    double* x2 = &X2;
//    d = calcSquareEq(a, b, c, x1, x2);
//    if(d == 0)
//    {
//        printf("Уравнение имеет один корень. x1 = x2 = %f\n", X1);
//    }
//    else
//    {
//        if(d == 1)
//        {
//            printf("Уравнение имеет два корня:\n x1  = %f\n x2 = %f\n", X1, X2);
//        }
//        else
//        {
//            printf("Уравнение решений не имеет\n");
//        }
//    }

// Задание №2:

//    const int ARRAY_LENGTH = 10;
//    int ARRAY[ARRAY_LENGTH];
//    int i = 0;
//    printf("Поочерёдно введите 10 целых чисел: \n");
//    do
//    {
//        scanf("%d \n", &ARRAY[i]);
//        i++;
//    }
//    while(i < ARRAY_LENGTH);
//    if((evenInteger(ARRAY, ARRAY_LENGTH)) == 1)
//    {
//    printf("В массиве были нечётные числа.\n");
//        for(i = 0; i < ARRAY_LENGTH; i++)
//        {
//            printf("%d  ", *(ARRAY + i));
//        }
//        printf("\n");
//    }
//    else
//    {
//        printf("В массиве отсутствуют нечётные числа\n");
//    }

// Задание №3:

    const int ARRAY_LENGTH = 10;
    unsigned int ARRAY[] = {0, 1, 2, 3, 4, 65541, 65542, 65543, 65544, 65545};
    asShortPrint(ARRAY, ARRAY_LENGTH);
return 0;
}
