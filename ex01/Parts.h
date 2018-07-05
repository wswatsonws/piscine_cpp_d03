#ifndef PARTS_H
# define PARTS_H
#include <string>

class Arms{
  bool _func;
  std::string _serial;
 public:
  Arms(std::string serial = "A-01", bool f = true);
  ~Arms();
  void informations() const;
  bool isFunctionnal() const{return _func;};
  std::string serial()const{return _serial;};
};

class Legs{
  bool _func;
  std::string _serial;
 public:
  Legs(std::string serial = "L-01", bool f = false);
  ~Legs();
  void informations() const;
  bool isFunctionnal() const{return _func;};
  std::string serial()const{return _serial;};
};

class Head{
  bool _func;
  std::string _serial;
 public:
  Head(std::string serial = "H-01", bool f = true);
  ~Head();
  virtual void informations() const;
  bool isFunctionnal() const{return _func;};
  std::string serial()const{return _serial;};
};

#endif
