#include "Warehouse.h"

Warehouse::Warehouse()
{

}

Warehouse::Warehouse(const Warehouse& other)
{
}

Warehouse& Warehouse::operator=(const Warehouse& other)
{
	// TODO: insert return statement here
}

void Warehouse::setSection(int section)
{
	this->section = section;
}

int Warehouse::getSection() const
{
	return this->section;
}

void Warehouse::setShelf(int shelf)
{
	this->shelf = shelf;
}

int Warehouse::getShelf() const
{
	return this->shelf;
}

void Warehouse::setNumber(int number)
{
	this->number = number;
}

int Warehouse::getNumber() const
{
	return this->number;
}

std::ostream& operator<<(std::ostream&, const Warehouse&)
{
	// TODO: insert return statement here
}
