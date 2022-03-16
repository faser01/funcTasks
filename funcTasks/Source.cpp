//Персональный шаблон проекта С++
#include <iostream>

using namespace std;

template <typename T> void showArr(T array[], int length);

template <typename T> double meanArr(T array[], int length);




int main() {
	setlocale (LC_ALL, "Russian");
	int n;


	//Задача 1
cout << "Задача 3\nИзначальный массив: " << endl;
double z1[5] = { 1.6, 1.4, 0.0, 1.0, 1.5 };
showArr(z1, 5);
cout << " ср арифм массива =" << meanArr(z1, 5) << "/n/n";
	return 0;
}
template <typename T> double meanArr(T array[], int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}


template <typename T> void showArr(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";


}
