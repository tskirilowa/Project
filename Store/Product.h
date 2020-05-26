#pragma once
# include<iostream>
#include"Warehouse.h"
#include"Date.h"

class Product
{
private:
	char name[32];
	Date expiryDate;
	Date dateAraival;
	char manufacturer[32];
	double unit;
	int quantity;
	Warehouse location;
	char comment[264];

	void copy(const Product& other);

public:
	Product();
	Product(const Product& other);
	Product& operator=(const Product& other);
	Product(const char* newName, Date newExpiryDate, Date newDateAraival, const char* newManufacturer,double newUnit,int newQuantity, Warehouse newLocation, const char* newComment);
	
	void setName(const char* newName);
	const char* getName()const;

	void setExpiryDate(int newDay, int newMonth,int newYear);
	Date getExpiryDate()const;

	void setDateAraival(int newDay,int newMonth, int newYear);
	Date getDateArival()const;

	void setManufacturer(const char* newManufacturer);
	const char* getManufacturer()const;

	void setUnit(double newUnit);
	double getUnit()const;

	void setQuantity(int newQuantity);
	int getQuantity()const;

	void setLocation(const Warehouse&);
	const Warehouse& location()const;

	void setComment(const char* newComment);
	const char* getComment()const;

	friend std::ostream& operator<<(std::ostream& out, const Product& other);
	friend std::istream& operator>>(std::istream& in, Product& other);

};

