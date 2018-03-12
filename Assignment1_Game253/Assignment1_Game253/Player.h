#pragma once
#include "Weapon.h"
#include "Primary.h"
#include "Secondary.h"
class Player
{
public:
	Player();
	~Player();
	

	Primary weaponPrim;
	Secondary weaponSec;

	void Equip(Primary w);
	void Equip(Secondary w);
	

	void ShootPrim();
	void ShootSec();
};

