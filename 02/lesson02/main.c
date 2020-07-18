#include <stdio.h>

int main()
{
//    int number;
//    printf("Введите пожалуйста число: ");
//    scanf("%d", &number);
//    int d = 0;
//    int i = 1;
//    while(i <= number)
//    {
//        if(number % i++ == 0)
//        {
//            d++;
//        }
//        else
//        {
//            continue;
//        }
//        if(d == 3)
//        {
//            break;
//        }
//    }
//    printf("Введённое число %d %sявляется простым\n", number, (d == 2) ? "" : "не");
//    int i;
//    for(i = 0; i < 5; i++)
//    {
//        printf("%d", i);
//    }
//    printf("\n");
//    int i;
//    int base = 2;
//    int significative = 10;
//    int result = 1;
//    for(i = 0; i < significative; i++)
//    {
//        result *= base;
//    }
//    printf("power: %d\n", result);
//    float first;
//    float second;
//    float result;
//    unsigned char operator;
//    printf("Введите, пожалуйста, первый операнд: ");
//    scanf("%f", &first);
//    fseek(stdin, 0, SEEK_END); //Не работает!
//    printf("Введите, пожалуйста, действие: ");
//    scanf("%c%c", &operator, &operator); //Так заработало. Получено экспериментальным путём
//    if(operator == '/')
//    {
//        do
//        {
//            printf("Введите, пожалуйсти, второй операнд: ");
//            scanf("%f", &second);
//        }
//        while(second == 0);
//    }
//    else
//    {
//        printf("Введите, пожалуйста, второй операнд: ");
//        scanf("%f", &second);
//    }
//    switch(operator)
//    {
//    case '*':
//        result = first * second;
//        printf("%f %c %f = %f\n", first, operator, second, result);
//        break;
//    case '/':
//        result = first / second;
//        printf("%f %c %f = %f\n", first, operator, second, result);
//        break;
//    case '-':
//        result = first - second;
//        printf("%f %c %f = %f\n", first, operator, second, result);
//        break;
//    case '+':
//        result = first + second;
//        printf("%f %c %f = %f\n", first, operator, second, result);
//        break;
//    default:
//        printf("Неизвестный оператор: %c\n", operator);
//    }

//Задания к уроку 02:

//Выполнение заданий ко второму уроку "Основы С" Александр Юнин.

// №1

//    int a;
//    printf("Введите, любое, целое число: ");
//    scanf("%d", &a);
//    if(0 <= a && a <= 100)
//    {
//        printf("Ваше число %d входит в диапазон от 0 до 100, включительно\n", a);
//    }
//    else
//    {
//        printf("Ваше число %d не входит в диапазон от 0 до 100, включительно\n", a);
//    }

// №2

//    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
//    float as;
//    printf("Введите 10 целых чисел: ");
//    scanf("%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
//    as = (a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10);
//    as /= 10;
//    printf*("Вы ввели: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d. Среднее арифметическое этих чисел: %.1f\n", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, as);

// №3

//    int i, x;
//    printf("Введите положительное число не больше 1000: ");
//    scanf("%d", &x);
//    if(x <= 0 || 1000 < x)
//    {
//        do
//        {
//        printf("Введите положительное число не больше 1000: ");
//        scanf("%d", &x);
//        }
//        while(x <= 0 || 1000 < x);
//    }
//        if(x == 1)
//        {
//            printf("Нет ни одного положительного чётного числа стоящего до 1\n");
//        }
//        else
//        {
//            i = 1;
//            printf("Все положительные чётные числа до указанного числа %d, включительно: ", x);
//            while(i <= x)
//            {
//                i++;;
//                if(i % 2 == 0)
//                {
//                    printf("%d, ", i);
//                }
//            }
//            printf("\n");
//        }


// №4


    int s, n, x, y;
    unsigned char p = ' ';
    unsigned char l = '/';
    unsigned char r = '\\';
    unsigned char g = '^';
    unsigned char d = '_';
    printf("Введите число строк от 2-х и более: ");
    scanf("%d", &s);
    if(s < 2)
    {
        do
        {
            printf("Введите число строк от 2-х и более: ");
            scanf("%d", &s);
        }
        while(s < 2);
    }
    n = ((s - 1) * 2) + 1;
    x = 1;
    do
    {
        if(x == s)
        {
            printf("%c", g);
        }
        else
        {
            printf("%c", p);
        }
        x++;
    }
    while(x <= n);
    printf("\n");
    if(s > 2)
    {
    y = 1;
    do
    {
        x = 1;
        do
        {
            if(x == (s - y))
            {
                printf("%c", l);
            }
            else
            {
                if(x == (s + y))
                {
                printf("%c", r);
                }
                else
                {
                printf("%c", p);
                }
            }
            x++;
        }
        while(x <= n);
        printf("\n");
        y++;
    }
    while(y <= (s - 2));
    }
    x = 1;
    printf("%c", l);
    do
    {
        printf("%c", d);
        x++;
    }
    while(x <= (n - 2));
    printf("%c\n", r);
    return 0;
}
