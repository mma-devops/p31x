#include <iostream>
#include <string>
using namespace std;

int main()
{
    // прога угадай число с жЫзнями))
    srand(time(NULL));
    int num, secretNum = rand() % 10 + 1;
    for(int i = 3; i > 0; i--){
        cin >> num;
        if (num == secretNum){
            cout << "\nПАБЕДА))0";
            break;
        }
        else{
            printf("NE)O)), осталось %d жизней.\n", i-1);
            continue;
        }
    }
    cout << secretNum << endl;
    cout << "\nGAEM OWER)))000нулик";
    
}
