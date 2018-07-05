#ifndef KREOGCOM_H_
#define KREOGCOM_H_

#include <iostream>

class KreogCom
{
public:
    KreogCom(int x, int y, int serial);
    ~KreogCom();

    void addCom(int x, int y, int serial);
    KreogCom* getCom();
    void removeCom();

    void ping() const;
    void locateSquad() const;

private:
    KreogCom* _next;
    int _x;
    int _y;
    const int m_serial;
};

#endif
