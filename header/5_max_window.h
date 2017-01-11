#pragma once

#include<header/base.h>



class MaxWindow {
public:
	vector<int> vec_;
	int win_width;
	int size;
	MaxWindow(vector<int> vec, int width) :vec_(vec), win_width(width), size(vec.size()) {};

	void solution() {
		deque<int> deq;
		for (vector<int>::size_type i = 0; i < 2; ++i) {
			push(deq , i);
		}
		cout << "[ ";
		for (int i = 2; i < size; ++i) {
			push(deq, i);
			while ((i - deq.front()) > 3) {
				deq.pop_front();
			}
			cout << vec_[deq.front()] << " ";
		}
		cout << "]" << endl;
	}

	void push(deque<int>& q, int vec_idx) {
		int value = vec_[vec_idx];
		while (!q.empty() && vec_[q.back()] <= value) {
			q.pop_back();
		}
		q.push_back(vec_idx);
	}
};


void test_max_window() {
	vector<int> v = { 1, 2, 3, 2, 6, 2, 4, 9, 5 };
	MaxWindow max_win(v, 3);
	max_win.solution();
}