#include <iostream>


int twoSum(int nums[100], int target) {
    bool flag = false;
    int len = sizeof(nums) / sizeof(int);

    for(int i=0; i<len; i++) {
        for(int j=i+1; j<len; j++) {
            if(nums[i]+nums[j] == target) {
                std::cout << "[" << i << "," << j << "]";
                return 0;
            }
        }
    }

}

int main() {
    int nums[100];
    int target;
    int n;
    
    std::cout << "Size of array: ";
    std::cin >> n;

    std::cout << "Array: \n";
    for(int i=0; i<n; i++) {
        std::cin >> nums[i];
    }

    std::cout << "Target: ";
    std::cin >> target;
    std::cout << twoSum(nums, target) << std::endl;
}
