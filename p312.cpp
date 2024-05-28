#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>
using namespace std;

// int main()
// {
// // прога угадай число с жЫзнями))
// srand(time(NULL));
// int num, secretNum = rand() % 10 + 1;
// for(int i = 3; i > 0; i--){
//     cin >> num;
//     if (num == secretNum){
//         cout << "\nПАБЕДА))0";
//         break;
//     }
//     else{
//         printf("NE)O)), осталось %d жизней.\n", i-1);
//         continue;
//     }
// }
// cout << secretNum << endl;
// cout << "\nGAEM OWER)))000нулик";

// // овцы
// int c = 0;
// const int N = 20;
// bool sheep[N];
// srand(time(NULL));
// for (int i = 0; i < N; i++){
//     sheep[i] = rand() % 2;
//     cout << sheep[i] << ' ';
//     // c += sheep[i]; опциАНАЛьное решение
//     if (sheep[i] == false)
//     c += 1;
// }
// // printf("\nНехватае %d овец.", N - c); опциАНАЛьное решение
// printf("\nНехватае %d овец.", c);

// // теорема Пифагора
// int a,b;
// cin >> a >> b;
// cout << sqrt(pow(a,2) + pow(b,2));

// // найти FUCKториал числа
// int n,f=1;
// cin >> n;
// for (int i = 1; i <= n; i++){
//     f*=i;
// }
// printf("Факториал числа %d = %d", n, f);

// // сложить рандомные числа, и найти функцию суммы цифр этого числа
// srand(time(NULL));
// int a,b,c,c1,c2,cSum, sum;
// a = rand() % 40 + 10;
// b = rand() % 40 + 10;
// printf("%d %d\n", a,b);
// c = a + b;
// cout << c << endl;
// c1 = c / 10;
// c2 = c % 10;
// cSum = c1 + c2;
// for (int i = 1; i <= cSum; i++){
//     sum += i;
// }
// cout << sum;

// }

// // Задача с функциями ШМА ШМА ШМА)))0

// bool checkEven(int a)
// {
//     if (a % 2 == 0)
//         return true;
//     else
//         return false;
// }

// int shma(int a, bool b)
// {
//     if (b)
//         return pow(a, 2);
//     else
//         return pow(a, 3);
// }

// int main()
// {
//     int a;
//     cin >> a;
//     cout << shma(a, checkEven(a));
// }

// // ЗАДАЧА https://codeforces.com/contest/751/problem/A
// int main()
// {
//     int n, shma = 0, gifts = 0;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 3)
//             shma++;
//         else
//             shma = 0;

//         if (shma == 3)
//         {
//             gifts++;
//             shma = 0;
//         }
//     }
//     cout << gifts;
// }

// // ЗАДАЧА https://codeforces.com/contest/752/problem/A
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n] = {0};
//     int deti = 0;
//     for (int i = 1; i + 1 <= n - i; i++)
//     {
//         a[deti++] = 1;
//         n -= i;
//     }
//     if (n > 0)
//     {
//         a[deti++] = n;
//     }
//     cout << deti << endl;
//     for (int j = 0; j < deti; j++)
//     {
//         cout << a[j] << " ";
//     }
// }

// // ЗАДАЧА https://codeforces.com/contest/755/problem/A
// bool notprime(int a)
// {
//     for (int i = 2; i <= a / 2; i++)
//     {
//         if (a % i == 0)
//             return true;
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i < 1001; i++)
//     {
//         if (notprime(n * i + 1))
//         {
//             cout << i << endl;
//             break;
//         }
//     }
// }

// // Задача написать функцию, которая проверяет являются ли
// // цифры в двузначных числах однаковыми. Сделать проверку на ввод ТОЛЬКО ДВУЗНАЧНОГО числа */
// bool check(int a){
//     if (a % 10 == a / 10){
//         return true;
//     }
//     return false;
// }
// int main(){
//     int a;
//     cin >> a;
//     if (a > 9 && a < 100){
//         if (check(a)){
//             cout << "same numbers";
//         }
//         else{
//             cout << "idi naxuy";
//         }
//     }
//     else{
//         cout << "debil";
//     }
// }

// // https://codeforces.com/contest/768/problem/A
// int main()
// {
//     int n, a;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     int min = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < min)
//             min = arr[i];
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     int c = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < max && arr[i] > min)
//             c++;
//     }
//     cout << c;
// }

// // ТЕСТ
// int main()
// {
//     const int N = 7;
//     string questions[N]{"\nЧВК лох?\n1. да\n2. да\n3. да\n4. да\n", "\nЧВК лох?\n1. да\n2. да\n3. да\n4. да\n", "\nЧВК лох?\n1. да\n2. да\n3. да\n4. да\n", "\nЧВК лох?\n1. да\n2. да\n3. да\n4. да\n", "\nЧВК лох?\n1. да\n2. да\n3. да\n4. да\n", "\nЧВК лох?\n1. да\n2. да\n3. да\n4. да\n", "\nЧВК лох?\n1. да\n2. да\n3. да\n4. да\n"};
//     int answers[N]{1, 1, 1, 1, 1, 1, 1};
//     int a, c = 0;
//     for (int i = 0; i < N; i++)
//     {
//         cout << questions[i];
//         cin >> a;
//         switch (a == answers[i])
//         {
//         case true:
//             cout << "+";
//             c++;
//             break;

//         default:
//             cout << "-";
//             break;
//         }
//     }
//     printf("\n%d верных ответов из %d", c, N);
// }

// // РАСЧЁТ ЗАРПЛАТЫ С ПРЕМИЕЙ В ЗАВИСИМОТИ ОТ СТАЖА
// int main(){
//     string surname;
//     int exp, salary, hours;
//     cout << "Фамилия: ";
//     getline(cin, surname);
//     cout << "Стаж работы: ";
//     cin >> exp;
//     cout << "Зарплата за час работы: ";
//     cin >> salary;
//     cout << "Отработанные часы: ";
//     cin >> hours;
//     if (exp < 1)
//         cout << salary * hours;
//     else if (exp >= 1 and exp < 3)
//         cout << salary * hours * 1.05;
//     else if (exp >= 3 and exp < 5)
//         cout << salary * hours * 1.08;
//     else if (exp >= 5)
//         cout << salary * hours * 1.15;
// }

// // Пользователь вводит 2 числа:
// // Первое число: кол-во чисел массива
// // Второе число: первое число массива
// int main(){
//     int n, f;
//     cin >> n >> f;
//     int arr[n];

//     // 1 ВАРИК
//     // for (int i = f; i < n + f; i++){
//     //     int j = 0;
//     //     arr[j] = i;
//     //     j++;
//     // }

//     // 2 ВАРИК
//     // for (int i = 0; i < n; i++){
//     //     arr[i] = f;
//     //     f++;
//     // }

//     for (int i = 0; i < n; i++){
//         cout << arr[i] << ' ';
//     }
// }

// // Создать массив из 16 чисел в диапозоне [-9:9]
// // Вывести чётные числа по возрастанию,
// // Нечетные по убыванию.
// int main()
// {
//     const int N = 16;
//     srand(time(NULL));
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         arr[i] = rand() % 19 - 9;
//         cout << arr[i] << ' ';
//     }
//     for (int i = 0; i < N - 1; i++)
//     {
//         for (int j = 0; j < N - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     cout << endl;
//     for (int i = 0; i < N; i++){
//         if (arr[i] % 2 == 0){
//             cout << arr[i] << ' ';
//         }
//     }
//     cout << endl;
//     for (int i = N; i > 0; i--){
//         if (arr[i] % 2 != 0){
//             cout << arr[i] << ' ';
//         }
//     }
// }

// // Написать программу, которая вводит
// // двумерный массив и вычисляет сумму
// // его элементов по столбцам и двум диагоналям.
// int main()
// {
//     int arr[7][7];
//     srand(time(NULL));
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//             arr[i][j] = rand() % 10;
//             cout << arr[i][j] << ' ';
//         }
//         cout << endl;
//     }
//     int sum = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//             sum += arr[j][i];
//         }
//         cout << sum << ' ';
//         sum = 0;
//     }
//     cout << endl;
//     for (int i = 0; i < 7; i++)
//     {
//         sum += arr[i][i];
//     }
//     cout << sum << endl;
//     sum = 0;
//     int j = 6;
//     for (int i = 0; i < 7; i++)
//     {
//         sum += arr[i][j];
//         j--;
//     }
//     cout << sum;
// }

// // Создать и вывести массив из 16 чисел [-8:8]
// // Написать функцию которая принимает этот массив
// // по указателю и выводит '+' или '-' в
// // зависимости от знака элемента (если 0 то '=')

// void sidr(int *arr, int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         if (*(arr + i) > 0)
//         {
//             cout << "+ ";
//         }
//         else if (*(arr + i) < 0)
//         {
//             cout << "- ";
//         }
//         else
//         {
//             cout << "= ";
//         }
//     }
// }

// int main()
// {
//     srand(time(NULL));
//     const int N = 16;
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         arr[i] = rand() % 17 - 8;
//         cout << *(arr + i) << ' ';
//     }
//     cout << endl;
//     sidr(arr, N);
// }

// // Написать примитивный калькулятор, пользуясь только указателями.

// void add(int *a, int *b)
// {
//     cout << *a + *b;
// }
// void sub(int *a, int *b)
// {
//     cout << *a - *b;
// }
// void multi(int *a, int *b)
// {
//     cout << *a * *b;
// }
// void div(int *a, int *b)
// {
//     cout << *a / *b;
// }

// int main()
// {
//     int a, b;
//     char c;
//     cin >> a >> c >> b;
//     if (c == '+')
//         add(&a, &b);
//     else if (c == '-')
//         sub(&a, &b);
//     else if (c == '*')
//         multi(&a, &b);
//     else if (c == '/')
//         div(&a, &b);
//     else
//         cout << "DUYAK";
// }

// // Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).
// // Необходимо создать третий массив минимально возможного размера,
// // в котором нужно собрать элементы обоих массивов.

// void gawno(int *a, int *b, int *c, int *m, int *n)
// {
//     int j = 0, k = 0;
//     for (int i = 0; i < *m + *n; i++)
//     {
//         if (i < *m)
//         {
//             *(c + i) = *(a + j);
//             j++;
//         }
//         else
//         {
//             *(c + i) = *(b + k);
//             k++;
//         }
//         cout << *(c + i) << ' ';
//     }
// }

// int main()
// {
//     srand(time(NULL));
//     int m, n;
//     cin >> m >> n;
//     int a[m];
//     int b[n];
//     for (int i = 0; i < m; i++)
//     {
//         a[i] = rand() % 21 - 10;
//         cout << a[i] << ' ';
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         b[i] = rand() % 21 - 10;
//         cout << b[i] << ' ';
//     }
//     cout << endl;
//     int c[m + n];
//     gawno(a, b, c, &m, &n);
// }

// // Написать функцию, которая получает указатель
// // на массив и его размер, и возвращает сумму и
// // произведение его элементов в двух параметрах-указателях.

// int *gawno(int *arr, int *N)
// {
//     int *sum = new int;
//     *sum = 0;
//     int *multi = new int;
//     *multi = 1;
//     for (int i = 0; i < *N; i++)
//     {
//         *sum += *(arr + i);
//         *multi *= *(arr + i);
//     }
//     int *arr2 = new int[2];
//     *(arr2 + 0) = *sum;
//     *(arr2 + 1) = *multi;
//     return arr2;
//     delete sum, multi, arr2;
// }

// int main()
// {
//     srand(time(NULL));
//     int N = 10;
//     int *arr = new int[N];
//     for (int i = 0; i < N; i++)
//     {
//         *(arr + i) = rand() % 21 - 10;
//         cout << *(arr + i) << ' ';
//     }
//     cout << endl << *gawno(arr, &N) << endl;
//     cout << *(gawno(arr, &N) + 1);
//     delete arr;
// }

// // Написать функцию, которая получает
// // указатель на массив и его размер,
// // и возвращает количество отрицательных,
// // положительных и нулевых элементов массива.
// int *func(int *arr, int *N)
// {
//     int *pos = new int;
//     int *neg = new int;
//     int *zero = new int;
//     *pos = 0;
//     *neg = 0;
//     *zero = 0;
//     for (int i = 0; i < *N; i++)
//     {
//         if (*(arr + i) > 0)
//         {
//             *pos += 1;
//         }
//         else if (*(arr + i) < 0)
//         {
//             *neg += 1;
//         }
//         else
//         {
//             *zero += 1;
//         }
//     }
//     int *massiv = new int[3];
//     *massiv = *pos;
//     *(massiv + 1) = *neg;
//     *(massiv + 2) = *zero;
//     return massiv;
//     delete pos, neg, zero, massiv;
// }

// int main()
// {
//     srand(time(NULL));
//     int N = 10;
//     int *arr = new int[N];
//     for (int i = 0; i < N; i++)
//     {
//         *(arr + i) = rand() % 21 - 10;
//         cout << *(arr + i) << ' ';
//     }
//     cout << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << *(func(arr, &N) + i) << ' ';
//     }
//     delete arr;
// }

// // Напишите программу, в которой пользователь вводит размер массива, и программа динамически
// // выделяет массив такого размера для хранения значений типа int. Используя указатель, инициализируйте
// // все элементы массива так, чтобы значение элемента по индексу i было равно i * i (то есть квадрату числа i).
// // Вычислите сумму элементов, используя синтаксис массивов (обращение к элементам по индексу в квадратных скобках), и выведите результат.
// int main()
// {
//     int N;
//     cin >> N;

//     int *arr = new int[N];

//     for (int i = 0; i < N; i++)
//     {
//         *(arr + i) = i * i;
//         cout << *(arr + i) << ' ';
//     }

//     delete[] arr;

//     int n;

//     cout << "Размер массива введи епта: ";
//     cin >> n;

//     int *arr = new int[n];

//     srand(time(NULL));

//     for (int i = 0; i < n; i++)
//     {
//         *(arr + i) = rand() % 122 - 53;
//         cout << *(arr + i) << ' ';
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             sum += (arr + i) * (arr + i);
//         }
//     }

//     cout << "\nСумма квадратов: " << sum << endl;

//     delete[] arr;
// }

// // Напишите программу которая запрашивает у пользователя
// // размер динамического массива, затем заполняет массив
// // рандомными числами и выводит содержимое массива.
// // Рандом от -53 до 68. После вывода,
// // все нечетные числа должны возводится в 2 степень и
// // складываться между собой.

// int main()
// {
//     int N;
//     cin >> N;
//     int *sum = new int;
//     *sum = 0;
//     int *arr = new int[N];

//     for (int i = 0; i < N; i++)
//     {
//         *(arr + i) = rand() % 122 - 53;

//         cout << *(arr + i) << ' ';

//         if (*(arr + i) % 2 != 0)
//         {
//             *sum += *(arr + i) * *(arr + i);
//         }
//     }

//     cout << endl
//          << *sum;

//     delete sum;
//     delete[] arr;
// }

// // Создание и вывод двумерного динамического массива
// int main()
// {
//     int **arr = new int *[10];

//     for (int i = 0; i < 10; i++)
//     {
//         *(arr + i) = new int[5];
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             arr[i][j] = rand() % 10;
//             cout << arr[i][j] << ' ';
//         }
//         cout << endl;
//     }
// }

// // Массив из 10 чисел в диапозоне [-10;10]
// // Найти сумму ВТОРОГО минимального и ВТОРОГО максимального.
// void zabiv(int* arr, int* N){
//     for (int i = 0; i < *N; i++){
//         *(arr + i) = rand() % 21 - 10;
//     }
// }

// void sort(int* arr, int* N){
//     int *temp = new int;
//     for (int i = 0; i < *N-1; i++){
//         for(int j = 0; j < *N-1-i; j++){
//             if (arr[j] > arr[j+1]){
//                 *temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = *temp;
//             }
//         }
//     }
// }

// void printarr(int* arr, int* N){
//     for (int i = 0; i < *N; i++){
//         cout << arr[i] << ' ';
//     }
//     cout << endl;
// }

// int main(){
//     srand(time(NULL));
//     int *N = new int;
//     *N = 10;
//     int *arr = new int[*N];
//     zabiv(arr, N);
//     printarr(arr, N);
//     sort(arr, N);
//     printarr(arr, N);
//     cout << arr[1] + arr[*N-2];
// }

// // Вам нужно определить на какую линую пойти (мид, сложная, легкая, лес)
// // Необходимо ввести имя героя и его статы (ловкость, сила, интеллект).
// // Если ловкость главный атрибут (больше остальных параметров)
// // то герой идет на легкую.
// // Если сила главный атрибут, то герой идет на сложную.
// // Если интеллект главный атрибут, то герой идет в мид.
// // Если все атрибуты равны, то идет в лес.
// // Если атрибут меньше либо равен нулю, то герой получает БАН.
// // НЕ РАБОТАЕ
// string* checkLine(int* AGI, int* STR, int* INT){
//     string* line = new string;
//     if(*AGI > *STR && *AGI > *INT){
//         *line = "EASY";
//         return line;
//     }
//     else if(*STR > *AGI && *STR > *INT){
//         *line = "HARD";
//         return line;
//     }
//     else if(*INT > *AGI && *INT > *STR){
//         *line = "MID";
//         return line;
//     }
//     else if(*AGI == *STR && *AGI == *INT){
//         *line = "JUNGLE";
//         return line;
//     }
//     *line = "BAN";
//     return line;
//     delete line;
// }

// void printLine(string* name, string* lane){
//     if(*lane == "BAN"){
//         printf("Player %s should go fuck himself xd. BANNED.", *name);
//     }
//     else{
//         printf("Player %s should go to %s lane.", *name, *lane);
//     }
// }

// int main()
// {
//     cout << "Name: ";
//     string *name = new string;
//     cin >> *name;
//     cout << "AGI: ";
//     int *AGI = new int;
//     cin >> *AGI;
//     cout << "STR: ";
//     int *STR = new int;
//     cin >> *STR;
//     cout << "INT: ";
//     int *INT = new int;
//     cin >> *INT;
//     printLine(name, checkLine(AGI, STR, INT));
//     delete name, AGI, STR, INT;
// }

// // Написать функцию для рассчёта индекса массы тела (индекс массы = вес / рост^2 (В М3ТРАА4АААХ)).
// // если индекс <= 18.5 return "МАЛА ВЕСИШ"
// // если индекс <= 25.0 return "НАРМСАС НАРМАС"
// // если индекс <= 30.0 return "ТОВСТЫЙ"
// // если индекс > 30 return "ПИПЕС ТЫ ЖЫРНИЙ"
// string weightIndex(int *weight, int *height)
// {
//     float *index = new float;
//     *index = *weight / (*height * *height / 10000);
//     if (*index <= 18.5)
//         return "SOPLYA";
//     else if (*index <= 25)
//         return "MOLOKO NE VISOHLO";
//     else if (*index <= 30)
//         return "LEU";
//     return "FEMKA";
//     delete index;
// }
// int main()
// {
//     int *weight = new int;
//     cin >> *weight;
//     int *height = new int;
//     cin >> *height;
//     cout << weightIndex(weight, height);
//     delete weight, height;
// }

// // Создать функцию которая проверяет является ли число нечетным.
// // Числа забиваются в массив из 10 чисел [-10:10]
// // Если да: умножить его на 3 и вернуть
// // Если нет: разделить его на 2 и вернуть
// // Если нуль: прибавить 861 и вернуть
// // СТРОГО ЧЕРЕЗ SWITCH-CASE
// int *caseShit(int *arr)
// {
//     int *jest = new int;
//     switch (*arr % 2 != 0)
//     {
//     case true:
//         *jest = *arr * 3;
//         return jest;
//         break;
//     case false:
//         switch (*arr == 0)
//         {
//         case true:
//             *jest = 861;
//             return jest;
//             break;

//         case false:
//             *jest = *arr / 2;
//             return jest;
//             break;
//         }
//         delete jest;
//     }
// }
// int main()
// {
//     srand(time(NULL));
//     int *n = new int;
//     *n = 10;
//     int *arr = new int[*n];
//     int *i = new int;
//     for (*i = 0; *i < *n; *i += 1)
//     {
//         arr[*i] = rand() % 21 - 10;
//         cout << arr[*i] << ' ';
//     }
//     cout << endl;
//     for (*i = 0; *i < *n; *i += 1)
//     {
//         arr[*i] = *caseShit((arr + *i));
//         cout << arr[*i] << ' ';
//     }
// }

// // Написать программу которая будет выводить последовательность Фибоначчи
// // (складываются последние 2 числа).
// // Певые 2 числа - 0, 1
// // Длину последовательности задаёт пользователь.
// // Если че можете загуглить: fibonacci sequence
// void fibonacci(int* n){
//     int* arr = new int[*n];
//     arr[0] = 0;
//     arr[1] = 1;
//     int* c = new int;
//     cout << arr[0] << ' ' << arr[1] << ' ';
//     for (int i = 2; i < *n; i++){
//         arr[i] = arr[i-1] + arr[i-2];
//         cout << arr[i] << ' ';
//     }
//     delete[] arr;
// }
// int main(){
//     int* n = new int;
//     cin >> *n;
//     fibonacci(n);
//     delete n;
// }

// // Через цикл создать массив из 16 чисел в диапазоне [-16:12]
// // Вывести этот массив.
// // 1. Вывести все нечетные числа массива. (VOID ФУНКЦИЯ)
// // 2. Вывести кол-во элементов массива, превосходящих по модулю максимальный элемент. // #include <cmath>; abs(); (INT)
// // 3. Вывести произведение второго, пятого и предпоследнего элемента массива. (INT)
// // 4. Максимальный из отрицательных элементов поменять местами с последним элементом массива и вывести. (VOID)
// void firstFunc(int* arr){
//     for(int i = 0; i < 16; i++){
//         if (*(arr+i) % 2 != 0){
//             cout << *(arr+i) << ' ';
//         }
//     }
// }
// int* secondFunc(int* arr){
//     int* max = new int;
//     int* c = new int;
//     *max = *arr;
//     *c = 0;
//     for(int i = 0; i < 16; i++){
//         if (*(arr+i) > *max){
//             *max = *(arr+i);
//         }
//     }
//     for(int i = 0; i < 16; i++){
//         if (abs(*(arr+i)) > *max){
//             *c += 1;
//         }
//     }
//     return c;
//     delete max, c;
// }
// int* thirdFunc(int* arr){
//     int* a = new int;
//     *a = *(arr+1) * *(arr+4) * *(arr+14);
//     return a;
//     delete a;
// }
// void fourthFunc(int* arr){
//     int* maxNeg = new int;
//     int* temp = new int;
//     int* index = new int;
//     *maxNeg = *arr;
//     for(int i = 0; i < 16; i++){
//         if(*(arr+i) > *maxNeg && *(arr+i) < 0){
//             *maxNeg = *(arr+i);
//             *index = i;
//         }
//     }
//     *temp = *(arr+ *index);
//     *(arr+ *index) = *(arr+15);
//     *(arr+15) = *temp;
//     for(int i = 0; i <  16; i++){
//         cout << arr[i] << ' ';
//     }
//     delete maxNeg, temp, index;
// }
// int main(){
//     int* arr = new int[16];
//     srand(time(NULL));
//     for(int i = 0; i <  16; i++){
//         arr[i] = rand() % 29 - 16;
//         cout << arr[i] << ' ';
//     }
//     firstFunc(arr);
//     cout << endl << *secondFunc(arr);
//     cout << endl << *thirdFunc(arr) << endl;
//     fourthFunc(arr);
// }


// // Создать класс для треугольника который имеет 2 свойства: длины сторон, величины углов.
// // Создать методы:
// // Существует ли треугольник (bool)
// // Найти периметр (int)
// // Проверить является ли он прямоугольным (bool)
// // (ЕСЛИ ДА) Найти площадь (int)
// // Является ли он равнобедренным (bool)
// // Является ли он равносторонним (bool)
// class Triangle
// {
// public:
//     int side1, side2, side3;
//     int angle1, angle2, angle3;
//     int S = 0;
//     bool Existance()
//     {
//         if (side1 + side2 >= side3 && side2 + side3 >= side1 && side1 + side3 >= side2 && angle1 + angle2 + angle3 == 180)
//         {
//             return true;
//         }
//         return false;
//     }
//     int P()
//     {
//         if (Existance()){
//             return side1 + side2 + side3;
//         }
//         return 0;
//     }
//     bool RightVersion()
//     {
//         if (Existance())
//         {
//             if (angle1 == 90 || angle2 == 90 || angle3 == 90)
//             {
//                 return true;
//             }
//             return false;
//         }
//         return false;
//     }
//     int aSS()
//     {
//         if (RightVersion())
//         {
//             if (side1 > side2 && side1 > side3)
//             {
//                 S = (side2 * side3) / 2;
//                 return S;
//             }
//             else if (side2 > side1 && side2 > side3)
//             {
//                 S = (side1 * side3) / 2;
//                 return S;
//             }
//             S = (side1 * side2) / 2;
//             return S;
//         }
//         return S;
//     }
//     bool Ravnobedr()
//     {
//         if (Existance())
//         {
//             if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3)
//             {
//                 return true;
//             }
//             return false;
//         }
//         return false;
//     }
//     bool Ravnostoron()
//     {
//         if (Existance())
//         {
//             if (angle1 == angle2 && angle1 == angle3)
//             {
//                 return true;
//             }
//             return false;
//         }
//         return false;
//     }
// };
// int main()
// {
//     Triangle a;
//     cout << "Enter 3 sides of a triangle: ";
//     cin >> a.side1 >> a.side2 >> a.side3;
//     cout << "Enter 3 angles of a triangle: ";
//     cin >> a.angle1 >> a.angle2 >> a.angle3;
//     cout << "\nExistance: " << a.Existance();
//     cout << "\nPerimetre: " << a.P();
//     cout << "\nRightVerion: " << a.RightVersion();
//     cout << "\nSquare Area: " << a.aSS();
//     cout << "\nRavnobedr: " << a.Ravnobedr();
//     cout << "\nRavnostoron: " << a.Ravnostoron();
// }


// // Создайте структуру с именем student,
// // содержащую поля: фамилия и имя,
// // номер группы, успеваемость (массив из пяти элементов). Создать массив из десяти
// // элементов такого типа, упорядочить записи
// // по возрастанию среднего балла. Добавить
// // возможность вывода фамилий и номеров групп студентов, имеющих среднюю оценку, равную 
// // больше или равно 4.
// class Students{
//     public:
//     string name;
//     int id;
//     int grades[5];
//     double avg;
//     void Sprint(){
//         cout << "\n-------------------------------------------------------";
//         printf("\n\t\tStudent№ %d:\nName: %s\nGrades: ", id, name.c_str());
//         for (int i = 0; i < 5; i++){
//             cout << grades[i] << ' ';
//         }
//         printf("\nAverage grade: %.4g\n", avg);
//         cout << "-------------------------------------------------------\n";
//     }
// };
// int main(){
//     srand(time(NULL));
//     Students student[10];
//     string letters = "qwertyuiopasdfghjklzxcvbnm";
//     int nameLength;
//     for (int i = 0; i < 10; i++){
//         nameLength = rand() % 6 + 3;
//         for (int j = 0; j < nameLength; j++){
//             student[i].name += letters[rand() % 28];
//         }
//         nameLength = rand() % 6 + 3;
//         student[i].name += " ";
//         for (int j = 0; j < nameLength; j++){
//             student[i].name += letters[rand() % 28];
//         }
//         student[i].id = i+1;
//         for(int j = 0; j < 5; j++){
//             student[i].grades[j] = rand() % 4 + 2;
//             student[i].avg += student[i].grades[j];
//         }
//         student[i].avg /= 5;
//     }
//     for (int i = 0; i < 9; i++){
//         for (int j = 0; j < 9 - i; j++){
//             if(student[j].avg > student[j+1].avg){
//                 swap(student[j], student[j+1]);
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++){
//         if (student[i].avg >= 4){
//             student[i].Sprint();
//         }
//     }
// }


// // C помощью метода реализовать ввод данных работника с клавиатуры.
// // Рассчитать с помощью методов заработную плату, за отработанное время,
// // и премию, размер которой определяется в зависимости
// // от стажа (при стаже до 1 года 0%, до 3 лет 5%, до 5 лет 8%, свыше 5 лет 15%).
// // С помощью метода печати, реализовать вывод информации о работнике на экран.
// class Worker{
//     public:
//     string name;
//     int salary;
//     int exp;
//     int workHours;
//     int PremCalc(){
//         if(exp >= 1 && exp < 3){
//             return salary * workHours * 1.05;
//         }
//         else if(exp >= 3 && exp < 5){
//             return salary * workHours * 1.08;
//         }
//         else if(exp >= 5){
//             return salary * workHours * 1.15;
//         }
//         return salary * workHours;
//     }
//     void PrintSalary(){
//         printf("\n______________________________________\nName: %s\nSalary: %d\nPrem: %d\nSalary w/ prem: %d\n______________________________________\n",name, salary * workHours, PremCalc()-(salary * workHours), PremCalc());
//     }
// };
// int main(){
//     Worker anatoli;
//     cout << "Enter ur name: ";
//     getline(cin, anatoli.name);
//     cout << "Enter ur salary: ";
//     cin >> anatoli.salary;
//     cout << "Enter ur experience: ";
//     cin >> anatoli.exp;
//     cout << "Enter ur working hours: ";
//     cin >> anatoli.workHours;
//     anatoli.PrintSalary();
// }
