// динамическая память 
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;





//динамический массив
template<typename T> void fuarr(T ar[], int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		ar[i] = rand() % (max - min) + min;
}

template<typename T> void showarr(T ar[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << ar[i] << ", ";
	cout << "\b\b]\b";
}

// функция увиличения массива
template<typename T> void addel(T*& ar, int length, int n) {

	if (n <= 0)
		return;
	T* tmp = new T[length + n];
	for (int i = 0; i < length; i++)
		tmp[i] = ar[i];
	delete[] ar;
	ar = tmp;
}

//функция уменьшения массива
template<typename T> void del(T*& ar, int length, int n) {
	if (n <= 0 || n >= length)
		return;
	T* tmp = new T[length - n];
	for (int i = 0; i < length - n; i++)
		tmp[i] = ar[i];
	delete[]ar;
	ar = tmp;
}

int main() {
	setlocale(LC_ALL, "ru");

	//задача 2
	cout << "задача 1\nвведите длину массива ";
	int size2;
	cin >> size2;
	int* z2 = new int[size2];
	fuarr(z2, size2, 10, 31);
	cout << "массив";
	showarr(z2, size2);
	cout << endl;


	int news2;
	cout << "введите ";

	cin >> news2;
	del(z2, size2, news2);
	cout << endl;
	//cout << " OOOOOO";

	size2 -= news2;
	showarr(z2, size2);




	delete[] z2;
	z2 = nullptr;


	//задача 1

	/*cout << "задача 1\nвведите длину массива ";
	int size1;
	cin >> size1;
	int* z1 = new int[size1];
	fuarr(z1, size1, 10, 31);
	cout << "массив";
	showarr(z1, size1);
	cout << endl;


	int news1;
	cout << "введите ";

	cin >> news1;
	addel(z1, size1, news1);
	cout << endl;
	//cout << " OOOOOO";
	size1 += news1;
	showarr(z1, size1);




	delete[] z1;
	z1 = nullptr;*/
	/*int size;
	cout << "введите рaзмер массива ";
	cin >> size;
	int* darr = new int[size];

	fuarr(darr, size, 10, 31);
	showarr(darr, size);

	delete[] darr;*/





	//динамические массивы




//динамические переменные
/*int* pn = new int;
*pn = 10;
cout << *pn << endl;
cout << pn << "\n\n";

delete pn;
pn = nullptr;



pn = new int;
if (pn != nullptr) {
	*pn = 15;
	cout << *pn << endl;
	cout << pn << endl;
	delete pn;
}
else cout << "non\n";*/





	return 0;
}