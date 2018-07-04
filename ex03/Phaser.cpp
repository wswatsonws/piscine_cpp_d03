#include <iostream>
#include <string>
#include "Sounds.h"
#include "Phaser.h"

Phaser::Phaser(int maxAmmo, AmmoType type)
{
	this->maxAmmo = maxAmmo;
	this->_type = type;
	this->bullet = maxAmmo;
}

Phaser::~Phaser()
{
}

void	Phaser::fire()
{
	std::cout << "Clip empty, please reload" << std::endl;
}

void Phaser::ejectClip()
{
	this->bullet = 0;
}
void Phaser::changeType(AmmoType newType)
{
	std::string src("");
	if (newType == REGULAR)
		src = "regular";
	else if (newType == PLASMA)
		src = "plasma";
	else if (newType == ROCKET)
		src = "rocket";
	std::cout << "Switching ammo to type : " << src << std::endl;
	this->_type = newType;
}

void Phaser::reload()
{
	std::cout << "Reloading ..." << std::endl;
}

void Phaser::addAmmo(AmmoType type)
{
	if (type != PLASMA || type !=ROCKET || type !=REGULAR)
		return;
	if (this->bullet == this->maxAmmo)
		std::cout << "Clip full" << std::endl;
}

int Phaser::getCurrentAmmos()
{
	return this->bullet;
}
