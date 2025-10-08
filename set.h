#pragma once
#include<vector>

class set
{
public:
	bool insert(int x);
	bool remove(int x);
	bool contains(int x);
	int size();
	bool isEmpty();
	bool clear();
	void display();
private:
	std::vector<int> elements;
};

