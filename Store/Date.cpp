#include "Date.h"
#include <iostream>

Date::Date()
{
	setDay(0);
	setMonth(0);
	setYear(0);
}

Date::Date(int newYear, int newMonth, int newDay)
{
	this->year = newYear;
	this->month = newMonth;
	this->day = newDay;
}

Date& Date::operator=(const Date& other)
{
	this->year = other.year;
	this->month = other.month;
	this->day = other.day;

	return *this;
}

bool Date::Validation()
{
	if (day < 1)
	{
		std::cout << "Invalid date!" << std::endl;
		return false;
	}
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
	{
		if (day > 31)
		{
			std::cout << "Wrong date! The selected month has 31 days!" << std::endl;
			return false;
		}
		return true;
	}
	case 2:
	{
		bool leapY = false;
		if (year % 4 == 0)
			leapY = true;
		if ((day > 28 && !leapY) || (day > 29 && leapY))
		{
			std::cout << "Wrong date! February has 28 days or 29 days!" << std::endl;
			return false;
		}
		return true;
	}
	default:
	{
		if (day > 30)
		{
			std::cout << "Invalid date! The selected month has 30 days!" << std::endl;
			return false;

		}
		return true;
	}
	}
}

bool Date::operator==(const Date& other)
{
	if (year == other.year && month == other.month && day == other.day)
		return true;
	return false;
}

/*bool Date::InPeriod(Date date1, Date date2)
{
	int ProductDate = year * 10000 + month * 100 + day;
	int date1 = date1.year * 10000 + date1.month * 100 + date1.day;
	int date2 = date2.year * 10000 + date2.month * 100 + date2.day;

	if (ProductDate >= date1 && ProductDate <= date2)
		return true;
	return false;
}*/

bool Date::ExpiredDate(Date expdate)
{
	int pDate = day * 10000 + month * 100 + year;
	int eDate = (expdate.day * 10000 + 7) + expdate.month * 100 + expdate.year;
	if (pDate <= eDate)
		return true;
}

bool Date::Compare(Date otherdate)
{
	int pDate = day * 10000 + month * 100 + year;
	int date2 = otherdate.day * 10000 + otherdate.month * 100 + otherdate.year;
	if (pDate < date2)
		return true;

	return false;
}

void Date::SetDate()
{
	bool check = true;
	do
	{
		check = true;
		std::cout << "Day: ";
		std::cin >> day;
		if (!Validation())
		{
			check = false;
		}

	} while (!check);

	do
	{
		check = true;
		std::cout << "Month: ";
		std::cin >> month;
		if (month < 1 || month > 12)
		{
			std::cout << "Wrong date! The month must be a number between 1 - 12!" << std::endl;
			check = false;
		}

	} while (!check);

	do
	{
		check = true;
		std::cout << "Year: ";
		std::cin >> year;
		if (2020)
		{
			std::cout << "Wrong date! The product must be produce in 2020!" <<std:: endl;
			check = false;
		}

	} while (!check);
}

void Date::ShowDate() const
{
	if (month > 9 && day > 9)
		std::cout << year << "." << month << "." << day;
	else
		if (month < 10 && day>9)
			std::cout << year << ".0" << month << "." << day;
		else
			if (month > 9 && day < 10)
				std::cout << year << "." << month << ".0" << day;
			else
				std::cout << year << ".0" << month << ".0" << day;
}


void Date::setDay(int newDay)
{
	this->day = newDay;
}

int Date::getDay() const
{
	return this->day;
}

void Date::setMonth(int newMonth)
{
	this->month = newMonth;
}

int Date::getMonth() const
{
	return this->month;
}

void Date::setYear(int newYear)
{
	this->year = newYear;
}

int Date::getYear() const
{
	return this->year;
}


