#include "Product.h"


void Product::copy(const Product& other)
{
	setName(other.name);
	expiryDate =other.expiryDate;
	dateAraival =other.dateAraival;
	setManufacturer(other.manufacturer);
	setUnit(other.unit);
	setQuantity(other.quantity);
	setLocation(other.location);
	setComment(other.comment);
}

Product::Product()
{
	setName("Default");
	setExpiryDate(5,8,2021);
	setDateAraival(3,4,2012);
	setManufacturer("Default");
	setUnit(0.500);
	setQuantity(100);
	setLocation(5);
	setComment("Default");
}

Product::Product(const Product& other)
{
	copy(other);
}

Product& Product::operator=(const Product& other)
{
	if (this != &other)
	{
		copy(other);
	}
	return *this;
}

Product::Product(const char* newName, Date newExpiryDate, Date newAraivalDate, const char* newManufacturer, double newUnit, int newQuantity, Warehouse newLocation, const char* newComment)
{
	setName(newName);
	setManufacturer(newManufacturer);
	setUnit(newUnit);
	setQuantity(newQuantity);
	setLocation(newLocation);
	setComment(newComment);
}

void Product::setName(const char* newName)
{
	strcpy_s(this->name, 32, newName);
}

const char* Product::getName() const
{
	return this->name;
}

void Product::setExpiryDate(int newDay, int newMonth, int newYear)
{
	this->expiryDate.day = newDay;
	this->expiryDate.month = newMonth;
	this->expiryDate.year = newYear;
}

Date Product::getExpiryDate() const
{
	return expiryDate;
}

void Product::setDateAraival(int newDay, int newMonth, int newYear)
{
	this->expiryDate.day = newDay;
	this->expiryDate.month = newMonth;
	this->expiryDate.year = newYear;
}

Date Product::getDateArival() const
{
	return dateAraival;
}

void Product::setManufacturer(const char* newManufacturer)
{
	strcpy_s(this->name, 32, newManufacturer);
}

const char* Product::getManufacturer() const
{
	return this->manufacturer;
}

void Product::setUnit(double newUnit)
{
	this->unit = newUnit;
}

double Product::getUnit() const
{
	return this->unit;
}

void Product::setQuantity(int newQuantity)
{
	this->quantity = newQuantity;
}

int Product::getQuantity() const
{
	return this->quantity;
}

void Product::setComment(const char* newComment)
{
	strcpy_s(this->comment, 264, newComment);
}

const char* Product::getComment() const
{
	return this->comment;
}

std::ostream& operator<<(std::ostream& out, const Product& other)
{
	std::cout << "Name: ";
	out << other.name<< std::endl;

	std::cout << "Manufacturer: ";
	out << other.manufacturer << std::endl;

	std::cout << "Quantity: ";
	out << other.quantity << std::endl;

	std::cout << "Location: ";
	out << other.location << std::endl;

	std::cout << "Comment: ";
	out << other.comment << std::endl;

	std::cout << "Expiry Date:";
	out << other.expiryDate << std::endl;

	std::cout << "Araival Date:";
	out << other.dateAraival << std::endl;

	return out;
	
}

std::istream& operator>>(std::istream& in, Product& other)
{
	std::cout << "Name: ";
	in >> other.name;

	std::cout << "Enter Expiry Date below" << std::endl;
	std::cout << "Day: ";
	in >> other.expiryDate.day;
	std::cout << "Month: ";
	in >> other.expiryDate.month;
	std::cout << "Year: ";
	in >> other.expiryDate.year;

	std::cout << "Enter Araival Date below" << std::endl;
	std::cout << "Day: ";
	in >> other.expiryDate.day;
	std::cout << "Month: ";
	in >> other.expiryDate.month;
	std::cout << "Year: ";
	in >> other.expiryDate.year;

	std::cout << "Manufacturer: ";
	in >> other.manufacturer;

	std::cout << "Unit: ";
	in >> other.unit;

	std::cout << "Quantity: ";
	in >> other.quantity;

	std::cout << "Location: ";
	in >> other.location;

	std::cout << "Comment: ";
	in >> other.comment;



	return in;
}



