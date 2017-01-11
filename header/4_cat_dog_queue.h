#pragma once
#include<queue>
#include<iostream>
#include<string>

using std::queue;
using std::cout;
using std::endl;

class Pet {
public:
	std::string name;
	Pet(std::string n) :name(n) {};
};

class Cat : public Pet {
public:
	Cat(std::string cat_name):Pet(cat_name) {};
};

class Dog : public Pet {
public:
	Dog(std::string dog_name) :Pet(dog_name) {};
};

class CatDog {
public:
	Pet* pet;
	int count;
	CatDog(Pet* p_ptr, int c) :pet(p_ptr), count(c) {};
};

class CatDogQueue {
private:
	queue<CatDog> cat_queue_;
	queue<CatDog> dog_queue_;
	int count;
public:
	CatDogQueue() :count(0) {};

	void push_dog(Dog dog) {
		CatDog cd(&dog, ++count);
		dog_queue_.push(cd);
	}

	void push_cat(Cat cat) {
		CatDog cd(&cat, ++count);
		cat_queue_.push(cd);
	}

	void pop_front() {
		/*if (!dog_queue_.empty() && !cat_queue_.empty()) {
			cout << "---" << endl;
			CatDog dog = dog_queue_.front();
			CatDog cat = cat_queue_.front();
			if (dog.count > cat.count) {
				cout << cat.pet->get_name() << endl;
				cat_queue_.pop();
			}
			else {
				cout << dog.pet->get_name() << endl;
				dog_queue_.pop();
			}
		}
		else if(!dog_queue_.empty()){
			cout << "-+--" << endl;
			cout << dog_queue_.front().pet->get_name() << endl;
			dog_queue_.pop();
		}
		else if (!cat_queue_.empty()) {
			cout << "------" << endl;
			cout << cat_queue_.front().pet->get_name() << endl;
			cat_queue_.pop();
		}
		else {
			cout << "over" << endl;
		}*/
		cout << "daiango" << endl;
		cout << "daiango" << endl;
		cout << cat_queue_.front().count << endl;
		cout << cat_queue_.front().pet->name << endl;
		//cout << cat_queue_.front().pet->get_name() << endl;
		cat_queue_.pop();
	}

	bool empty() {
		return cat_queue_.empty() && dog_queue_.empty();
	}
};


void test_cat_dog() {
	CatDogQueue q;
	Dog d1("dog1");
	Dog d2("dog2");
	Cat c1("cat1");
	Cat c2("cat2");
	q.push_cat(c1);
	q.push_dog(d1);
	q.push_cat(c2);
	q.push_dog(d2);
	while (!q.empty()) {
		q.pop_front();
		break;
	}
}