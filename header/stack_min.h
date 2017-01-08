#pragma once
#include <stdlib.h>
#include <iostream>
#include <stack>

class StackMin {
public:
	StackMin() {};

	StackMin& push(int num) {
		if (stack_min.empty()) {
			stack_min.push(num);
		}
		else if (stack_min.top() > num){
			stack_min.push(num);
		}
		stack_data.push(num);
		return *this;
	}

	int get_min() {
		if (stack_min.empty()) {
			return 0;
		}
		else {
			return stack_min.top();
		}
	}

private:
	std::stack<int> stack_data;
	std::stack<int> stack_min;
};

void test_stack_min() {
	StackMin stackMin;
	stackMin.push(90).push(12).push(10).push(10).push(200).push(34);
	std::cout << "the min num == " << stackMin.get_min() << std::endl;
}