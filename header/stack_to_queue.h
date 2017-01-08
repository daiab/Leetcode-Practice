#pragma once
#include <iostream>
#include <stack>

template<typename type_name>
class StackToQueue {
private:
	stack<type_name> stack1;
	stack<type_name> stack2;
public:
	StackToQueue() {};
	StackToQueue& push_back(type_name element) {
		stack1.push(element);
	}

	type pop_front() {
		while (!stack1.empty()) {
			stack2.push(stack1.top);
		}
		return stack2.top();
	}

	bool empty() {
		return stack1.empty() && stack1.empty();
	}

};

void test_stack_to_queue() {
	StackToQueue<int> stack_to_queue;
	stack_to_queue.push_back(12).push_back(20).push_back(30);
	while (!stack_to_queue.empty()) {
		std::cout << "pop front == " << std::endl;
	}
}