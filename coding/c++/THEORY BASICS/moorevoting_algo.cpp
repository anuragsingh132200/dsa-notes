// moore voting algo

#include <iostream>
#include <vector>

int findMajorityElement(std::vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }

        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 2, 4, 2, 2, 5};
    int majorityElement = findMajorityElement(nums);

    std::cout << "The majority element is: " << majorityElement << std::endl;

    return 0;
}