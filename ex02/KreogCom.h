#ifndef KREOGCOM_H_
#define KREOGCOM_H_

#include <string>
#include <iostream>

class KreogCom
{
	int m_serial;
	int my_x;
	int my_y;
	KreogCom	*next;

	public:
		KreogCom(int x, int y, int serial);
		~KreogCom();

	void addCom(int x, int y, int serial);
	KreogCom	*getCom();
	void removeCom();
	void ping() const;
	void locateSquad() const;
};

#endif
