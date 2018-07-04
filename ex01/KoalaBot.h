#ifndef KOALA_BOT_H
# define KOALA_BOT_H
# include "Parts.h"
# include <string>
class KoalaBot{
 public:
  KoalaBot(std::string serial = "Bob-01");
  bool status() const;
  void informations() const;
  ~KoalaBot();

  void setParts(Arms &p);
  void setParts(Legs &p);
  void setParts(Head &p);
  
  void swapParts(Arms &p);
  void swapParts(Legs &p);
  void swapParts(Head &p);
  
 private:
  Arms _arms;
  Legs _legs;
  Head _head;
  std::string _serial;
};

#endif
