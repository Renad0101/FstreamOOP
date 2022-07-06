
#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

#include"Applier.h"
#include"Ccompany.h"



int main()
{
	Applier* cv1 = new Applier("Sahin", 24, "Programmer", "Empty1");
	Applier* cv2 = new Applier("Ali", 23, "IT", "Empty2");

	Company company;

	company.hireUp(cv1);
	company.hireUp(cv2);


	company.writeToFile("company.txt");
	company.readToFile("company.txt");

	company.showAllCV();
}