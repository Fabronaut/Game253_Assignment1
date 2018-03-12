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
	std::cout << "Primary Equipped\n";
}

void Player::Equip(Secondary w)
{
	weaponSec = w;
	std::cout << "Secondary Equipped\n";
}


void Player::ShootPrim()
{
	weaponPrim.Shoot();
}

void Player::ShootSec()
{
	weaponSec.Shoot();
}
