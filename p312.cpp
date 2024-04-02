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