#include <iostream>
using namespace std;
//Функции Swap
void mySwap(int n, int m) {
	int tmp = n;
	n = m;
	m = tmp;
}
void pSwap(int* pn, int* pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;

}
void refSwap(int& refn, int& refm) {
	int tmp = refn;
	refn = refm;
	refm = tmp;
}

int a[10][2];

//Задача с двумерным массивом
int& rf(int index) {
	return a[index][1];
}

int& maxEl(int arr[], int length) {
	int iMax = 0;
	for (int i = 1; i < length; i++)
		if (arr[i] > arr[iMax])
			iMax = i;
	return arr[iMax];
}

int main() {
	setlocale(LC_ALL, "Russian");

	int arr[5] = { 4, 5, 3, 8, 6 };
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";

	cout << "Максимальный элемент = " << maxEl(arr, 5) << endl;
	maxEl(arr, 5) = 0;
	cout << "Максимальный элемент = " << maxEl(arr, 5) << endl;
	maxEl(arr, 5) = 0;
	cout << "Максимальный элемент = " << maxEl(arr, 5) << endl;
	maxEl(arr, 5) = 0;
	cout << "Максимальный элемент = " << maxEl(arr, 5) << endl;
	maxEl(arr, 5) = 0;
	cout << "Максимальный элемент = " << maxEl(arr, 5) << endl;
	maxEl(arr, 5) = 0;

	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";

	 //Задача с двумерным массивом
	/*for (int i = 0; i < 10; i++) {
		cout << "Введите " << i << " элемент: ";
		cin >> a[i][0];
		rf(i) = a[i][0];
	}
	cout << "Итоговый массив:\n";

	for (int i = 0; i < 10; i++)
		cout << a[i][0] << "\t" << rf(i) << endl;*/

	//Функции Swap
	/*int n, m;
	cout << "Введите 2 числа: \n";
	cin >> n >> m;
	//mySwap(n, m);
	//pSwap(&n, &m);
	refSwap(n, m);
	cout << "n = " << n << ", m = " << m << endl;*/

	//Ссылки
	/*/int n = 11, m = 20;
	int& refn = n;
	int* pn = &n;
	
	//Вывод значения
	cout << refn << endl;
	cout << pn << endl;
	
	//Адрес/разыменованые
	cout << &refn << endl;
	cout << *pn << endl;

	///Меняем переменную через ссылку и указатель
	refn = 12;
	cout << n << endl;

	//Перенаправляем
	*pn = 13;
	cout << n << endl;

	refn = m;
	pn = &m;*/

	return 0;
}