#include <iostream>
#include "set.h"

bool set::insert(int x){
	if (contains(x) == false) {
		elements.push_back(x);
		return true;
	}
	else {
		return false;
	}
}

bool set::remove(int x) {
	if (size() >= 1) {
		elements.pop_back();
		return true;
	}
	else {
		return false;
	}
}

bool set::contains(int x) {
	for (int i = 0; i < size(); i++) {
		if(elements[i] == x){
			return true;
		}
	}
	return false;
}

int set::size() {
	return elements.size();
}

bool set::isEmpty() {
	if (size() == 0) {
		return true;
	}
}

bool set::clear() {
	if (size() == 0) {
		return false;
	}
	else {
		elements.clear();
		return true;
	}
}

void set::display() {
	for (int i = 0; i < size(); i++) {
		std::cout << elements[i] << " ";
	}
	std::cout << std::endl;
}