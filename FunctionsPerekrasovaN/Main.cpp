#include <iostream>

template<typename T>
void mirror_arr(T arr[], const int length) {
	for (int j = 0; j <= length; j++) {
		for (int i = length - 2; i >= 0; i--)
			std::swap(arr[i], arr[i + 3]);

	}
}

template<typename T>
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

int range_sum(int arr1[], int arr2[], int begin, int end, const int length1, const int length2) {
	for (int i = begin; i < end; i++)
		if (begin < length1 && begin < length2 && begin >= 0)
			std::cout << arr1[i] + arr2[i] << ", ";
	return arr1[begin] + arr2[begin], arr1[end] + arr2[end];
}

template<typename T>
T max2(T arr[], const int length) {

	T max1 = arr[0];
	T max2 = arr[0];

	for (int i = 0; i < length; i++) {
		if (arr[i] > max1) {
			max2 = max1;
			max1 = arr[i];
		}

		if (arr[i] > max1) {
			max2 = arr[i];
		}
	}

	std::cout << max1 << ", " << max2;
	return max1, max2;
}
void perfect_range(int num1, int num2) {
	for (int i = num1; i <= num2; i++) {
		int counter = 0;
		for (int j = 1; j <= i - 1; j++) {
			if (i % j == 0) {
				counter += j;
			}
		}
		if (counter == i)
			std::cout << i << ", ";
	}
	std::cout << "\b\b.\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int m, m1, A, B;
	const int size = 4;
	int arr[size]{ 9, 37, 10, 25 };

	std::cout << "Задача 1. Массив в зеркальном виде.\n";

	std::cout << "Массив изначальный ";
	show_arr(arr, size);
	std::cout << "Массив в зеркальном виде: ";
	mirror_arr(arr, size);
	show_arr(arr, size);
	std::cout << "\n\n";

	std::cout << "Задача 2.Сумма элементов двух массивов, в переданном диапазоне. \n";
	const int size1 = 5;
	int arr1[size1] = { 1, 2, 3, 4, 5 };
	std::cout << "Первый массив: ";
	std::cout << "[";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ", ";
	std::cout << "\b\b]\n";

	const int size2 = 5;
	int arr2[size2] = { 6, 7, 8, 9, 10 };
	std::cout << "Второй массив: ";
	std::cout << "[";
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ", ";
	std::cout << "\b\b]\n";
	std::cout << "Введите начало диапазона: ";
	std::cin >> m;
	std::cout << "Введите конец диапазона: ";
	std::cin >> m1;
	std::cout << range_sum(arr1, arr2, m, m1, size1, size2) << "\n";
	std::cout << "\n";

	std::cout << "Задача 3. Поиск 2-х максимальных элементов массива. \n";
	std::cout << "Mассив: ";
	const int size3 = 10;
	int arr3[size3] = { 2, 5, -6, 7, 3, 9, -2, 4, -8, 25 };
	show_arr(arr3, size3);

	std::cout << "Два максимальных числа массива: ";
	max2(arr3, size3);
	std::cout << "\n\n";

	std::cout << "Задача 4.Вывод совершенных чисел переданных в диапазоне от A до B. \n";
	std::cout << "Введите начало диапазона: ";
	std::cin >> A;
	std::cout << "Введите начало диапазона: ";
	std::cin >> B;
	std::cout << "Совершенные числа в указанном диапазоне: ";
	perfect_range(A, B);


	return 0;
}