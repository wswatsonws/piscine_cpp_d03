#ifndef SKAT_H_
#define SKAT_H_

#include <string>
#include <iostream>

class Skat
{
	std::string _name;
	int stimpaks;

	public:
		Skat(std::string const &_name = "bob", int stimpaks = 15);
		~Skat();

		int &stimPaks();
		const std::string &name();

		void shareStimPaks(int number, int &stock);
		void addStimPaks(unsigned int number);
		void useStimPaks();
		void status();
};

#endif
