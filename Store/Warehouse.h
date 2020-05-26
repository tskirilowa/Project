#pragma once
#include<iostream>

class Warehouse
{
private:

	int section;
	int shelf;
	int number;

public:
	Warehouse();
	Warehouse(const Warehouse& other);
	Warehouse& operator=(const Warehouse& other);

	void setSection(int section);
	int getSection()const;

	void setShelf(int shelf);
	int getShelf()const;

	void setNumber(int number);
	int getNumber()const;

	friend std::ostream& operator<<(std::ostream&, const Warehouse&);


};

