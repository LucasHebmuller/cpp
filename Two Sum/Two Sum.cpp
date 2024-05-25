#include <iostream>
#include <vector>

int main()
{
    int target = 5;
	std::vector<int> nums{ 1,2,2,4 };
    std::vector<int> numbers;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                numbers.push_back(i);
                numbers.push_back(j);
            }
        }
    }

    for (int index : numbers)
        std::cout << index << " ";


	return 0;
}

