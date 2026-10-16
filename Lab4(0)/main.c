#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");
    symbols();
    expirience();
	slot();
    HomeWorkVar2();
    return(0);
}
    int symbols()
    {
        char c;
        int i;
        float f;
        double d;

        printf("=Задание 1=\n\n");
        printf("Введите символ: ");
        scanf_s(" %c", &c, 1);

        printf("Введите целое число: ");
        scanf_s("%d", &i);

        printf("Введите число для float: ");
        scanf_s("%f", &f);

        printf("Введите число для double: ");
        scanf_s("%lf", &d);
        printf("\n");

        printf("Введенный символ: '%c'\n", c);
        printf("Введенный int: %d\n", i);
        printf("Введенный float: %f\n", f);
        printf("Введенный double: %e %lf)\n\n", d, d);

        // Задача 1а
        int left_part = f;
        float right_part = f - left_part;
        printf("Целая часть: %d\n", left_part);
        printf("Дробная часть: %f\n\n", right_part);

        // Задача 1б
        printf("Десятичный код символа: %d\n", c);
        printf("Шестнадцатеричный код символа: 0x%X\n\n", c);

        // Задача 1в
        if (i != 0) {
            double result = 1.0 / i;
            printf("1 / %d = %lf\n\n\n\n", i, result);
        }
        else {
            printf("Ошибка: деление на ноль невозможно (i = 0)!\n\n\n\n");
        }

        return 0;
    }

    int expirience() 
    {

        int a = 11;
        int b = 3;

        int x = a / b;
        float y = a / b;
        double z = a / b;

        printf("=Задание 2=\n\n");
        printf("a = %d\n", a);
        printf("b = %d\n\n", b);
        printf("Неявное преобразование (a / b)\n");
        printf("x (int)    = %d\n", x);
        printf("y (float)  = %f\n", y);
        printf("z (double) = %lf\n\n", z);

        printf("Явное преобразование типов\n");

        // Приведение только первого операнда 'a'
        printf("(float)a / b   = %f\n", (float)a / b);
        printf("(double)a / b  = %lf\n", (double)a / b);

        // Приведение второго операнда 'b'
        printf("a / (float)b   = %f\n", a / (float)b);

        // Приведение результата целого выражения в скобках
        printf("(float)(a / b) = %f\n\n\n\n", (float)(a / b));

        return 0;
    }

    int slot() {
        int n;

        printf("=Задание 3=\n\n");
        printf("Введите трёхзначное целое число: ");
        if (scanf_s("%d", &n) != 1 || n < 100 || n > 999) {
            printf("Ошибка: нужно ввести положительное трёхзначное число.\n");
            return 1;
        }

        int first = n / 100;
		int second = (n / 10) % 10;
        int last = n % 10;
        int sum = first + (n / 10) % 10 + last;
        int reversed = last * 100 + (n / 10) % 10 * 10 + first;

        printf("Первая цифра: %d\nВторая цифра: %d\nПоследняя цифра: %d\nСумма цифр: %d\nЧисло наоборот: %d\n\n\n\n", first, second, last, sum, reversed);
        return 0;
    }
    
    int HomeWorkVar2() {
        int A = 9;
        int B = 12;
        int C = 15;
        printf("=Домашнее задание, Вариант 2=\n\n");
        printf("A = %d\n", A);
        printf("B = %d\n", B);
        printf("C = %d\n", C);
        printf("Проверка условия кратности сил 3 героев(условие выполняется если сила у каждого персонажа кратна 3)\n");
            //Проверяем условие: каждый уровень силы должен быть кратен трем
			if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {//оператор && нужен чтобы проверить, что все три условия выполняются одновременно, а % нужен для проверки кратности чисел 3
                printf("Тройной удар активирован!\n");
            }
            else {
                printf("Условие не выполнено.\n");
            }
        return 0;
    }