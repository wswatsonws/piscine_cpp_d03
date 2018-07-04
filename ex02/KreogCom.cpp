#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial):_serial(serial), _x(x), _y(y){
  _link = 0;
  std::cout << "KreogCom " << _serial << " initialised" << std::endl;
  
}

KreogCom::~KreogCom(){
  std::cout << "KreogCom " << _serial << " shutting down" << std::endl;
}

void KreogCom::addCom(int x, int y, int serial){
  KreogCom *tmp = new KreogCom(x, y, serial);
  tmp->_link = _link;
  _link = tmp;
  
}

KreogCom *KreogCom::getCom(){
  return this->_link;
}
void KreogCom::removeCom(){
  if (_link == 0) return;
  KreogCom *save = _link;
  _link = _link->_link;
  delete save;
}

void KreogCom::ping() const{
  std::cout << "KreogCom " << _serial << " currently at " << _x << " " << _y << std::endl << std::flush;
}

void KreogCom::locateSquad() const{
    if (_link != 0) _link->locateSquad();
  ping();
}
