#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string firstNumber, secondNumber;

    cout << "Enter first binary number: ";
    cin >> firstNumber;

    cout << "Enter second binary number: ";
    cin >> secondNumber;

    int sum = 0;
    int maxValue = max(firstNumber.length(), secondNumber.length());
    string result = "";

    // İkilik sayıları toplarken her iki sayının bitlerini kontrol et
    for (int i = 0; i < maxValue; i++) {
        int bit1 = (i < firstNumber.length()) ? firstNumber[firstNumber.length() - 1 - i] - '0' : 0;  // Eğer ilk sayı bitse bile 0 ekle
        int bit2 = (i < secondNumber.length()) ? secondNumber[secondNumber.length() - 1 - i] - '0' : 0; // Aynı şekilde

        int bitSum = bit1 + bit2 + sum;

        // Sonucun hesaplanması ve taşımanın yönetilmesi
        if (bitSum == 0) {
            result += '0';
            sum = 0;
        } else if (bitSum == 1) {
            result += '1';
            sum = 0;
        } else if (bitSum == 2) {
            result += '0';
            sum = 1; // Taşıma
        } else {
            result += '1';
            sum = 1; // Taşıma
        }
    }

    // Son taşıma varsa ekleyin
    if (sum == 1) {
        result += '1';
    }

    // Sonucu ters çevirin (çünkü sayılar sağdan sola işleniyor)
    reverse(result.begin(), result.end());

    cout << "Sum: " << result << endl;

    return 0;
}
