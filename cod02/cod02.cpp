/************************************************************
* Русакова Екатерина Алексеевна, ПИ-231, вариант №16        *
* Share-Link: https://www.onlinegdb.com/online_c++_compiler *
* Тема: Использование процедур и функций                    *
*************************************************************/

#include <iostream>
using namespace std;

  double sredAr(int *arr, int size) {
  double sredAr = 0;
  for (int elementIndex = 0; elementIndex < size; ++elementIndex) {
    sredAr += arr[elementIndex];
  }
  sredAr = sredAr / (size / 2);
  return sredAr;
}
 
int main() {
  int *X, *Y, *Z, k, n, m; //по заданию даны однобуквенные переменные
    
  cout << "Введите размер массива X:";
  cin >> k;
  X = new int[k];

  cout << "Введите размер массива Y:";
  cin >> n;
  Y = new int[n];

  cout << "Введите размер массива Z:";
  cin >> m;
  Z = new int[m];
    
  printf("Ввод элементов двумерного массива", k);
  for (int elementIndex = 0; elementIndex < k; ++elementIndex) {
    printf("Введите элемент X[%d][%d]: ", elementIndex);
    cin >> X[elementIndex];
  }
  
  printf("Ввод элементов двумерного массива", n);
  for (int elementIndex = 0; elementIndex < n; ++elementIndex) {
    printf("Введите элемент Y[%d][%d]: ", elementIndex);
    cin >> Y[elementIndex];
  }
  
  printf("Ввод элементов двумерного массива", m);
  for (int elementIndex = 0; elementIndex < m; ++elementIndex) {
    printf("Введите элемент Z[%d][%d]: ", elementIndex);
    cin >> Z[elementIndex];
  }
  
  cout << "Исходный массив X:" << endl;
  for (int elementIndex = 0; elementIndex < k; ++elementIndex) {
    cout << X[elementIndex] << " ";
  }
  
  cout << "Исходный массив Y:" << endl;
  for (int elementIndex = 0; elementIndex < n; ++elementIndex) {
    cout << Y[elementIndex] << " ";
  }
  
  cout << "Исходный массив Z:" << endl;
  for (int elementIndex = 0; elementIndex < m; ++elementIndex) {
    cout << Z[elementIndex] << " ";
  }
 
  cout << "Среднее арифметическое массива X=" << sredAr(X, k)  
  << "Среднее арифметическое массива Y=" << sredAr(Y, n) 
  << "Среднее арифметическое массива Z=" << sredAr(Z, m) << endl;

  return 0;
}
