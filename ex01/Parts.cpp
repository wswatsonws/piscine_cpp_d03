#include <iostream>
#include "KoalaBot.h"
#include "Parts.h"
//
Arms::Arms(std::string serial, bool f){
  _serial = serial;
  _func = f;
}

Arms::~Arms(){

}

void Arms::informations() const{
  if (this->_func)
    std::cout << "\t[Parts] Arms " << this->_serial << " status : OK" <<std::endl;
  else
    std::cout << "\t[Parts] Arms " << this->_serial << " status : KO" <<std::endl;
}
//
Legs::Legs(std::string serial, bool f){
  _serial = serial;
  _func = f;
}

Legs::~Legs(){

}

void Legs::informations() const{
    if (this->_func)
		std::cout << "\t[Parts] Legs " << this->_serial << " status : OK" <<std::endl;
	else
		std::cout << "\t[Parts] Legs " << this->_serial << " status : KO" <<std::endl;
}

//

Head::Head(std::string serial, bool f){
  _serial = serial;
  _func = f;
}

Head::~Head(){

}

void Head::informations() const{
  if (this->_func)
    std::cout << "\t[Parts] Head " << this->_serial << " status : OK" <<std::endl;
  else
    std::cout << "\t[Parts] Head " << this->_serial << " status : KO" <<std::endl;
}
