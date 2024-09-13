#include <iostream>
#include <locale>
using namespace std;

int main() {
    // Для підтримки кирилиці
    setlocale(LC_ALL, "ukr");

    // Задача 1: Знаходимо довжини відрізків AC і BC, та їх суму
    double A, B, C;

    cout << "Введіть координати A, B, C: ";
    cin >> A >> B >> C;

    double AC = abs(A - C);
    double BC = abs(B - C);
    double sum = AC + BC;

    cout << "Довжина AC: " << AC << endl;
    cout << "Довжина BC: " << BC << endl;
    cout << "Сума: " << sum << endl;

    // Задача 2: Переводимо кут з градусів в радіани
    double alpha;
    cout << "\nВведіть кут в градусах: ";
    cin >> alpha;

    if (alpha >= 0 && alpha < 360) {
        const double pi = 3.14;
        double radians = (alpha * pi) / 180.0;
        cout << "Кут в радіанах: " << radians << endl;
    }
    else {
        cout << "Кут має бути від 0 до 360!" << endl;
    }

    // Затримка завершення програми
    system("pause");

    return 0;
}
