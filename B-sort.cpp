#include <chrono>
#include <cstdlib>
#include <iostream>
using namespace std;
void printarr(int *arr, int arrsize) {
  for (int i = 0; i < arrsize; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << endl;
}
int main() {
  int n = 50000;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 1000000;
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j])
        swap(arr[j], arr[i]);
    }
  }
  printarr(arr, n);
}
