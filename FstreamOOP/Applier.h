#pragma once
class Applier 
{
	string _name = "";
	int _age = 0;
	string _speciality = "";
	string _text = "";

public:

	Applier() = default;

	Applier(string name, int age, string speciality, string text )
	{
		this->_name = name;
		this->_age = age;
		this->_speciality = speciality;
		this->_text = text;
	}
	

	string& getName() 
	{ 
		return _name;
	}

	int& getAge() 
	{ 
		return _age;
	}

	string& getSpeciality()
	{
		return _speciality;
	}

	string& getText()
	{
		return _text;
	}


	void PerconalCv()
	{
		cout << "Name: " << _name << endl;
		cout << "Age: " << _age << endl;
		cout << "Speciality: " << _speciality << endl;
		cout << "Text: " << _text << endl;
		cout << endl;
	}
};
