#include <iostream>
#include <vector>

int findLastMaxBeforeFirstEven(const std::vector<int>& arr, int c, int d) {
    int maxIndex = -1, maxValue = c - 1; // Початкові значення

    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) break; // Зупиняємось на першому парному

        if (arr[i] >= c && arr[i] <= d && arr[i] >= maxValue) {
            maxValue = arr[i]; // Оновлюємо максимальне значення
            maxIndex = i; // Запам'ятовуємо індекс
        }
    }

    return maxIndex; // Повертаємо індекс або -1, якщо не знайдено
}

int main() {
    std::vector<int> A = { 1, 7, 3, 9, 12, 5, 9, 4 }; // Приклад масиву
    int c, d;

    std::cout << "Enter range [c, d]: ";
    std::cin >> c >> d;

    int result = findLastMaxBeforeFirstEven(A, c, d);

    if (result != -1)
        std::cout << "Last max element before first even is at index: " << result << std::endl;
    else
        std::cout << "No valid elements found." << std::endl;

    return 0;
}
