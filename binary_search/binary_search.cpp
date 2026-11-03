#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int item) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    int guess = arr[mid];

    if (guess == item) {
      return mid;
    } else if (guess > item) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {
  int my_list[5] = {1, 3, 5, 7, 9};

  int low = 0;
  int high = sizeof(my_list) / sizeof(my_list[0]) - 1;

  int result = binary_search(my_list, low, high, 3);

  cout << result;

  return 0;
}
