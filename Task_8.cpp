#include <iostream> // Підключаємо бібліотеку для вводу/виводу

using namespace std; // Дозволяємо використовувати стандартні елементи без префікса std::

int main() { // Головна функція програми
    int N, temp, lastDigit, firstDigit, digitsCount = 0; // Оголошуємо змінні
    cout << "Enter a natural number N: "; // Запитуємо користувача ввести натуральне число
    cin >> N; // Зчитуємо введене число
    temp = N; // Зберігаємо значення N у змінну temp для обчислень

    // Рахуємо кількість цифр у N
    do {
        temp /= 10; // Ділимо temp на 10, щоб відкинути останню цифру
        digitsCount++; // Збільшуємо лічильник цифр
    } while (temp > 0); // Продовжуємо, поки temp більше 0

    // Витягуємо першу та останню цифри
    firstDigit = N / (int)pow(10, digitsCount - 1); // Обчислюємо першу цифру
    lastDigit = N % 10; // Обчислюємо останню цифру

    // Міняємо місцями першу та останню цифри
    N = (N - firstDigit * (int)pow(10, digitsCount - 1)) + lastDigit * (int)pow(10, digitsCount - 1); // Витягуємо першу цифру і ставимо на її місце останню
    N = (N - lastDigit) + firstDigit; // Витягуємо останню цифру і ставимо на її місце першу

    cout << "The number with swapped first and last digits is: " << N << endl; // Виводимо результат

    return 0; // Завершуємо програму
}
