#include <iostream>
//using namespace std;
//рекурсия на спуске (данный случай) и на подъеме, также называются 
/*int rec(int number) {

    if (number == 0)
    {
        return 0;
    }else{
        return (number%10 + rec(number/10));

    }
}
int rec1(int number) {
    if (number != 0){
        int ostat = rec1(number / 10);
        return ostat + number % 10;
    } else {
        return 0;
    }

}

int main(){
    setlocale(LC_ALL, "ru");
    int number=0;
    int summa=0;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    //проверка корректности введённых значений
    if (number <= 0) {
        std::cerr << "Ошибка! x<0";
        return 1;
    }
    summa = rec(number);
    std::cout <<"Сумма цифр числа на спуске равна: " << summa;
    summa = rec1(number);
    std::cout << "Сумма цифр числа на возурате равна: " << summa;
    return 0;
}*/

int max_spusk(int number,int max) {
    if (number < max) {
        return max;
    }else {
        if (number % 10 > max) {
            max = number % 10;
        }
        max_spusk(number / 10,max);
    }
}

int max_podyom(int number) {
    if (number<10) {
        return number;
    } else {
        int max = max_podyom(number / 10);
        if (number % 10 > max) {
            max = number % 10;
        }
        return max;
    }
}

//Поиск максимума в натуральном числе решить 2 рекурсии
int main() {
    setlocale(LC_ALL, "ru");
    int number = 0;
    std::cout << "введите натуральное число: ";
    std::cin >> number;
    int max = 0;
    int res = max_spusk(number,max);
    std::cout << "Максимальное цифра в числе равна: " << res<<std::endl;
    res = max_podyom(number);
    std::cout << "Максимальное цифра в числе равна: " << res;
    return 0;
}
