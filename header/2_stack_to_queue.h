#pragma once
#include <iostream>
#include <stack>

using std::stack;

template<typename type_name>
class StackToQueue {
private:
	stack<type_name> stack1;
	stack<type_name> stack2;
public:
	StackToQueue() {};

	StackToQueue& PushBack(type_name element) {
		while (!stack2.empty()) {
			stack1.push(stack2.top());
			stack2.pop();
		}
		stack1.push(element);
		return *this;
	}

	type_name PopFront() {
		while (!stack1.empty()) {
			stack2.push(stack1.top());
			stack1.pop();
		}
		int tmp = stack2.top();
		stack2.pop();
		return tmp;
	}

	bool empty() {
		return stack1.empty() && stack2.empty();
	}

};

void test_stack_to_queue() {
	StackToQueue<int> stack_to_queue;
	stack_to_queue.PushBack(12).PushBack(20).PushBack(30);
	std::cout << "-----------" << std::endl;
	while (!stack_to_queue.empty()) {
		std::cout << "pop front == " << stack_to_queue.PopFront() << std::endl;
	}
}