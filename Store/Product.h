#pragma once
# include<iostream>

class Product
{
private:
	char name[32];
	double expiryDate;
	double dateAraival;
	char manufacturer[32];
	double unit;
	int quantity;
	int location;
	char comment;

public:
	Product();
	//Product(const Product& other);
	Product& operator=(const Product& other);
	Product(const char newName, double newExpiry, double newDateAraival, const char newManufacturer,double newUnit,int newQuantity, int newLocation, const char newComment);
	~Product();

	void setName(const char* newName);
	const char* getName()const;

	void setExpiryDate(double newExpiryDate);
	double getExpiryDate()const;

	void setDateAraival(double newDateAraival);
	double getDateArival()const;

	void setManufacturer(const char* newManufacturer);
	const char* getManufacturer()const;

	void setUnit(double newUnit);
	double getUnit()const;

	void setQuantity(int newQuantity);
	int getQuantity()const;

	void setLocation(int newLocation);
	int getLocation()const;

	void setComment(const char* newComment);
	const char* getComment()const;

	friend std::ostream& operator<<(std::ostream& out, const Product& other);
	friend std::istream& operator>>(std::istream& in, Product& other);

};

