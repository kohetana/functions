/***************************************
* Автор:   Кучина Мария                *
* Задание: Функции                     *
* Вариант: 11                          *
****************************************/
  #include <iostream>
  #include <vector>

  using namespace std;

  int countNegative(const vector<double>& arr) {
      int count = 0;
      for (size_t i = 0; i < arr.size(); ++i) {
          if (arr[i] < 0) {
              ++count;
          }
      }
      return count;
  }

  int main() {
      int sizeS;
      int sizeW;

      cout << "Enter the size of array S: ";
      cin >> sizeS;
      if (sizeS <= 0 || sizeS > 100) {
          cout << "INVALID" << "\n";
          return 0;
      }

      cout << "Enter the size of array W: ";
      cin >> sizeW;
      if (sizeW <= 0 || sizeW > 100) {
          cout << "INVALID" << "\n";
          return 0;
      }

      vector<double> arrS(sizeS);
      vector<double> arrW(sizeW);

      cout << "Enter " << sizeS << " elements of array S: ";
      for (int i = 0; i < sizeS; ++i) {
          cin >> arrS[i];
      }

      cout << "Enter " << sizeW << " elements of array W: ";
      for (int i = 0; i < sizeW; ++i) {
          cin >> arrW[i];
      }

      int negCountS = countNegative(arrS);
      int negCountW = countNegative(arrW);

      cout << "The number of negative values in S: " << negCountS << "\n";
      cout << "The number of negative values in W: " << negCountW << "\n";

      return 0;
  }