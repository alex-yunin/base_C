//Работа на первом уроке:
//#include <stdio.h>

//int main()
//{
//    printf("Привет Мир\\\t");
//    printf("Hello World!\n");
//    int a = 50;
//    printf("%d\n", a);
//    printf("%05d\n", a);
//    printf("%.2f\n", 5.12345);
//    printf("Заполнители - это \"%5d%%\" форматирования текста!\n", a);
//    unsigned char symbol = 75;
//    printf("%c\n", symbol);
//    float real = 5.345f;
//    double doublereal = 5.345;
//    printf("%d\n", real == doublereal);
//    int x = 10;
//    int y = 10;
//    printf("%d\n", x == y);
//    printf("Переменная x имеет значение: %d\n", x);
//    printf("Переменная х хранится по адресу: %p\n", &x);
//    int input;
//    printf("Введите пожалуйста число: ");
//    scanf("%d", &input);
//    printf("Вы ввели число %d, мы удвоили его для Вас, и получилось: %d\n", input, input*2);

//    int variable = 70;
//    printf("Переменная variable = %d\n", variable);
//    variable = variable + 50;
//    printf("Переменная variable = %d\n", variable);
//    variable += 50;
//    printf("Переменная variable = %d\n", variable);
//    variable /= 2;
//    printf("Переменная variable = %d\n", variable);
//    variable /= 2;
//    printf("Переменная variable = %d\n", variable);
//    int remainder = variable % 5;
//    printf("Остаток от деления %d на %d: %d\n", variable, 5, remainder);
//    remainder++;
//    printf("Инкремент: %d\n", remainder);

//Задания к уроку 01:

//Выполнение заданий к первому уроку "Основы С" Александр Юнин.

#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    int n;
    printf("Введите, пожалуйста, любое целое число:");
    scanf("%d", &n);
    printf("Вы ввели число: %d, квадрат данного числа равен: %d\n", n, n*n);

    double Uo, Ui, R1, R2;
    printf("Введите значение для Ui в \"В\": ");
    scanf("%lf", &Ui);
    printf("Введите значение для R1 в \"Ом\": ");
    scanf("%lf", &R1);
    printf("Введите значение для R2 в \"Ом\": ");
    scanf("%lf", &R2);
    Uo = Ui * (R1 / (R2 + R1));
    printf("Расчётное значение для Uo на резисторе R1: %.3lf В\n", Uo);

    printf("Введите значение для Uo на резисторе R1 в \"В\": ");
    scanf("%lf", &Uo);
    printf("Введите значение для R1 в \"Ом\": ");
    scanf("%lf", &R1);
    printf("Введите значение для R2 в \"Ом\": ");
    scanf("%lf", &R2);
    Ui = Uo * ((R2 + R1) / R1);
    printf("Расчётное значение входного напряжения \"Ui\" равно: %.3lf В\n", Ui);

    printf("Введите значение для Ui в \"В\": ");
    scanf("%lf", &Ui);
    printf("Введите значение для Uo на резисторе R1 в \"В\": ");
    scanf("%lf", &Uo);
    printf("Введите значение для R2 в \"Ом\": ");
    scanf("%lf", &R2);
    R1 = R2 * (Uo / (Ui - Uo));
    printf("Расчётное значение для R1: %.3lf Ом\n", R1);

    printf("Введите значение для Ui в \"В\": ");
    scanf("%lf", &Ui);
    printf("Введите значение для Uo на резисторе R1 в \"В\": ");
    scanf("%lf", &Uo);
    printf("Введите значение для R1 в \"Ом\": ");
    scanf("%lf", &R1);
    R2 = R1 * ((Ui - Uo) / Uo);
    printf("Расчётное значение для R2: %.3lf Ом\n", R2);
    return  0;
}
