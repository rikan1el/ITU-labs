//8.	Найти  максимальный элемент и его порядковый номер в одномерном массиве х.
//Затем упорядочить по возрастанию элементы методом «пузырька», расположенные перед максимальным элемента .

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: "<<endl;
    for (int i = 0; i < n; i++) {
        cout <<"X["<<i<<"] = "<<x[i] <<endl;
    }
    cout << endl;
    int count=0;
    double max = x[0];
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (x[i] > max) {
            max = x[i];
            index = i;
            count++;
        }
    }
    cout<<max<<"\t"<< index<<endl;
    int temp = 0;
    for (int i = 0; i < n-1;i++){
        for (int j = 0; j < n-i-1;j++)
        {
            if (x[j]<x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout <<"X["<<i<<"] = "<<x[i] <<endl;
    }
}
