#ifndef KREOGCOM_H
# define KREOGCOM_H
#include <string>
#include <iostream>
class KreogCom{
  const int _serial;
  KreogCom *_link;
  int _x, _y;
 public:
  KreogCom(int x, int y, int serial);
  ~KreogCom();
  void addCom(int x, int y, int serial);
  KreogCom *getCom();
  void removeCom();
  void ping() const;
  void locateSquad() const;
};

#endif
