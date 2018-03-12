#include "Player.h"
#include <iostream>


Player::Player()
{
}


Player::~Player()
{
}

void Player::Equip(Primary w)
{
	weaponPrim = w;
	std::cout << "Primary Weapon Equipped\n";
}

void Player::Equip(Secondary w)
{
	weaponSec = w;
	std::cout << "Secondary Weapon Equipped\n";
}


void Player::ShootPrim()
{
	weaponPrim.Shoot();
}

void Player::ShootSec()
{
	weaponSec.Shoot();
}
