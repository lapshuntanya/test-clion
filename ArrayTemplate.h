#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

//Заповнити масив випадковими числами від 1 до 10
template <typename T>
void randArray(T arr[], int size, int a = 1, int b = 10){
	for (int i = 0; i < size; i++)	{
		arr[i] = rand() % (b - a + 1) + a;
	}
}

//Виведення масиву на екран
template <typename T>
void printArray(T arr[], int size, int w_cout = 5){
	for (int i = 0; i < size; i++)	{
		cout.width(w_cout);
		cout << arr[i];
	}
	cout << endl;
}

//Додавання нового елементу в кінець масиву
template<typename  T>
void addItemBack(T*&arr, int& size, T value) {
	//1 - Створюємо новий масив на +1 клітинку
	T* tmp = new T[size + 1];

	//2 - Перенесення даних зі старого масиву в новий
	for (int i = 0; i < size; i++) {
		tmp[i] = arr[i];
	}

	//3 - Вносимо нове значення в останню клітинку
	tmp[size] = value;

	// 4 - Видаляємо старий масив
	delete[] arr;
	//5 - Оновлюємо розмір масиву
	size++;

	//6 - Перепривʼязуємо покажчик на нову адресу
	arr  = tmp;
}


//Додавання нового елементу в початок масиву
template<typename  T>
void addItemFront(T*&arr, int& size, T value) {
	//1 - Створюємо новий масив на +1 клітинку
	T* tmp = new T[size + 1];

	//2 - Перенесення даних зі старого масиву в новий
	for (int i = 0; i < size; i++) {
		tmp[i + 1] = arr[i];
	}

	//3 - Вносимо нове значення в першу клітинку
	tmp[0] = value;

	// 4 - Видаляємо старий масив
	delete[] arr;
	//5 - Оновлюємо розмір масиву
	size++;

	//6 - Перепривʼязуємо покажчик на нову адресу
	arr  = tmp;
}

//Додавання нового елементу в початок масиву
template<typename  T>
void delItemPos(T*&arr, int& size, int pos) {
	//1 - Створюємо новий масив на -1 клітинку
	T* tmp = new T[size -1];

	//2 - Перенесення даних зі старого масиву в новий
	for (int i = 0, j=0; i < size; i++) {
		if (i == pos ) continue;

		tmp[j++] = arr[i];
	}

	// 4 - Видаляємо старий масив
	delete[] arr;
	//5 - Оновлюємо розмір масиву
	size--;

	//6 - Перепривʼязуємо покажчик на нову адресу
	arr  = tmp;
}