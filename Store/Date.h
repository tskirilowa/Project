 struct Date
{
	int day;
	int month;
	int year;

	Date();
	Date(int newYear, int newMonth, int newDay);
	Date& operator=(const Date& other);
	bool Validation();
	bool operator==(const Date& other); //proverqva dali ima produkt sus sushtata data
	/*bool InPeriod(Date d1, Date d2);    */
	bool ExpiredDate(Date expdate); // proverqva sroka na godnost
	bool Compare(Date otherdate);
	void SetDate();
	void ShowDate() const;
	
    void setDay(int newDay);
	int getDay()const;

	void setMonth(int newMonth);
	int getMonth()const;

	void setYear(int newYear);
	int getYear()const;


};