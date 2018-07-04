#include <iostream>
#include "KoalaBot.h"
#include "Parts.h"

void KoalaBot::setParts(Arms &p){
  this->_arms = p;
}
void KoalaBot::setParts(Head &p){
  this->_head = p;
}
void KoalaBot::setParts(Legs &p){
  this->_legs = p;
}

void KoalaBot::swapParts(Arms &p){
  Arms tmp;
  tmp = _arms;
  _arms = p;
  p = tmp;
}
void KoalaBot::swapParts(Legs &p){
  Legs tmp;
  tmp = _legs;
  _legs = p;
  p = tmp;
}
void KoalaBot::swapParts(Head &p){
  Head tmp;
  tmp = _head;
  _head = p;
  p = tmp;
}

KoalaBot::~KoalaBot(){}
KoalaBot::KoalaBot(std::string serial){
  _serial = serial;
}


bool KoalaBot::status() const{
  if (_arms.isFunctionnal()
      && _legs.isFunctionnal()
      && _head.isFunctionnal())
    return true;
  return false;
}

void KoalaBot::informations() const{
  std::cout << "[KoalaBot] " << _serial << std::endl;

  _arms.informations();
  _legs.informations();
  _head.informations();
}
