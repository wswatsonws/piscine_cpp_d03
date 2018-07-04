#ifndef PARTS_H_
#define PARTS_H_

#include <iostream>
#include <string>

class Arms
{
	std::string _serial;
	bool _functionnal;

	public:
		Arms(std::string const serial = "A-01" , bool functionnal = true);
		~Arms();

		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
};

class Legs
{
	std::string _serial;
	bool _functionnal;

	public:
		Legs(std::string const serial = "L-01", bool functionnal = true);
		~Legs();

		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
};

class Head
{
	std::string _serial;
	bool _functionnal;

	public:
		Head(std::string const serial = "H-01", bool functionnal = true);
		~Head();

		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
};

#endif
