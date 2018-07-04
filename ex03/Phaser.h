#ifndef PHASER_H_
#define PHASER_H_

#include <string>
#include <iostream>

class Phaser
{
	public:
		enum AmmoType {REGULAR, PLASMA, ROCKET};

	private:
		AmmoType _type;
		int maxAmmo;
		int bullet;

	public:
		Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
		~Phaser();

		void fire();
		void ejectClip();
		void changeType(AmmoType newType);
		void reload();
		void addAmmo(AmmoType type);
		int getCurrentAmmos();
		static const int Empty = 0;
};

#endif
