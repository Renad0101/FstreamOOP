#pragma once
#pragma once
class Company 
{
	vector<Applier*> appliers;

public:
	void hireUp(Applier* cv)
	{
		appliers.push_back(cv);
	}

	void showAllCV()
	{
		for (size_t i = 0; i < appliers.size(); i++)
		{
			appliers[i]->PerconalCv();
		}
	}


	void writeToFile(string filename)
	{
		ofstream fout(filename, ios::app);
		if (!fout)
		{
			throw new exception(" Can not created");
		}

		if (!fout.is_open()) 
		{
			fout.close();
			throw new exception(" Can not opened");
		}

		for (size_t i = 0; i < appliers.size(); i++)
		{
			fout << appliers[i]->getName()<<endl;
			fout << appliers[i]->getAge()<<endl;
			fout << appliers[i]->getSpeciality()<<endl;
			fout<<  appliers[i]->getText()<<endl;

		}
		fout.close();
	}


	void readToFile(string filename)
	{
		ifstream fin(filename, ios::app);

		if (!fin)
		{
			throw new exception(" Can not find");
		}

		if (!fin.is_open())
		{
			fin.close();
			throw new exception(" Can not opened");
		}

		while (!fin.eof())
		{
			Applier apply;
			for (size_t i = 0; i < appliers.size(); i++)
			{
				fin >> apply.getName();
				fin >> apply.getAge();
				fin >> apply.getSpeciality();
				fin >> apply.getText();

				apply.PerconalCv();
			}

			if (fin.peek() != 10)
				break;
		}

		fin.close();
	}
};