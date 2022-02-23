// Написати програму, яка перевіряє користувача на знання таблиці множення. Програма виводить на екран два числа, користувач має ввести їхній добуток.
//Розробити кілька рівнів складності(відрізняються складністю та кількістю питань).Вивести користувачеві оцінку його знань.
//Єдиною умовою є зчитування даних з файлу і запис даних в файл
#include <iostream>
#include<Windows.h>
#include<fstream>
using namespace std;
int main()
{   SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    const int N = 8;
    int mass[N] = { 0 };
    ifstream fileIn;
    fileIn.open("D:/Users8/Я/Desktop/text.txt");    
    for (int i = 0; i < N; i++) {
        fileIn >> mass[i];//заповнюю масив числами з першого файлу
    }
    fileIn.close();
    const int s = 12;
    int arr1[s] = { 0 };
    ifstream fileI;
    fileI.open("D:/Users8/Я/Desktop/tuxt.txt");
    for (int i = 0; i < s; i++) {
        fileI >> arr1[i];//заповнюю масив числами з другого файлу
    }
    fileI.close();
    int arr2[s] = { 0 };
    ifstream fileN;
    fileN.open("D:/Users8/Я/Desktop/taxt.txt");
    for (int i = 0; i < s; i++) {
        fileN >>arr2[i];//заповнюю масив числами з третього файлу
    }
    fileN.close();
    const int a = 20;
    int mas1[a] = { 0 };
    ifstream fileQ;
    fileQ.open("D:/Users8/Я/Desktop/taext.txt");
    for (int i = 0; i < a; i++) {
        fileQ >> mas1[i];//заповнюю масив числами з четвертого файлу
    }
    fileQ.close();
    int mas2[a] = { 0 };
    ifstream fileW;
    fileW.open("D:/Users8/Я/Desktop/teaxt.txt");
    for (int i = 0; i < a; i++) {
        fileW >> mas2[i];//заповнюю масив числами з п'ятого файлу
    }
    fileW.close();
    int v;//змінна для вибору складності
    cout << "Перевір свої знання звичайної та складнішої таблиці множення " << endl;
    cout << "Доступні рівні складності:1 , 2 , 3 "<<endl;
    cout << "Будь ласка виберіть рівень :";
    cin >> v;  
    int bal = 0;//змінна для підрахунку кількості правильних відповідей
    int mark = 0;//зміна для запису оцінки по дванадцятибальній системі
    int ans;//зміна для вводу відповіді
    if (v == 1) {
        for (int i = 0; i < N; i++) {
            cout << mass[i] << "*" << mass[i] << "= ";//показ чисел які множаться
            cin >> ans;
            if (ans == (mass[i] * mass[i])) {//перевірка чи правильно порахований добуток
                bal++;
            }
        }
        mark = (12 * bal) / 8;//перевід з кількості правильних відповідей в дванадцятибальну систему
    }
    if (v == 2) {
        for (int i = 0; i < s; i++) {
            cout << arr1[i] << "*" << arr2[i] << "= ";//показ чисел які множаться
            cin >> ans;
            if (ans == (arr1[i] * arr2[i])) {//перевірка чи правильно порахований добуток
                bal++;
            }
        }
        mark = (12 * bal) / 12;//перевід з кількості правильних відповідей в дванадцятибальну систему
    }
    if (v == 3) {
        for (int i = 0; i < a; i++) {
            cout << mas1[i] << "*" << mas2[i] << "= ";//показ чисел які множаться
            cin >> ans;
            if (ans == (mas1[i] * mas2[i])) {//перевірка чи правильно порахований добуток
                bal++;
            }
        }
        mark = (12 * bal) / 20;//перевід з кількості правильних відповідей в дванадцятибальну систему
    }
    cout << "Ball = " << mark;
    ofstream fileH;
    fileH.open("D:/Users8/Я/Desktop/Mark.txt",fstream::app);
    fileH <<"\nВаша оцінка = " << mark <<" балів";
    fileH.close();
}


