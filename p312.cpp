#include <iostream>
#include <cmath>
#include <string>
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