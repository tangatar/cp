#include <iostream>

bool task(int x) {

}

int main() {
    int nums[100];
    int target;
    int n;

    std::cout << "Size of array: ";
    std::cin >> n;

    std::cout << "\nArray: ";
    for(int i=0; i<n; i++) {
        std::cin >> nums[i];
    }

    std::cout << "\nTarget: ";
    std::cin >> target;

    std::cout << n << " " << target << std::endl;
    for(int i=0; i<n; i++) {
        std::cout << nums[i] << " ";
    }
}