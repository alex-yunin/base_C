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
    float first;
    float second;
    float result;
    unsigned char operator;
    printf("Введите, пожалуйста, первый операнд: ");
    scanf("%f", &first);
//    fseek(stdin, 0, SEEK_END);
    printf("Введите, пожалуйста, действие: ");
    scanf("%c%c", &operator, &operator);
    if(operator == '/')
    {
        do
        {
            printf("Введите, пожалуйсти, второй операнд: ");
            scanf("%f", &second);
        }
        while(second == 0);
    }
    else
    {
        printf("Введите, пожалуйста, второй операнд: ");
        scanf("%f", &second);
    }
    switch(operator)
    {
    case '*':
        result = first * second;
        printf("%f %c %f = %f\n", first, operator, second, result);
        break;
    case '/':
        result = first / second;
        printf("%f %c %f = %f\n", first, operator, second, result);
        break;
    case '-':
        result = first - second;
        printf("%f %c %f = %f\n", first, operator, second, result);
        break;
    case '+':
        result = first + second;
        printf("%f %c %f = %f\n", first, operator, second, result);
        break;
    default:
        printf("Неизвестный оператор: %c\n", operator);
    }
    return 0;
}
