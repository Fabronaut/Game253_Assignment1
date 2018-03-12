#include <iostream>
#include "Player.h"
#include "Weapon.h"
#include "Primary.h"
#include "Secondary.h"

int main()
{
	Player p;

	Primary w1("Pow Pow");
	Secondary w2("Pew Pew"), w3("BANG");

	p.Equip(w1);
	p.ShootPrim();

	p.Equip(w2);
	p.ShootSec();

	p.Equip(w3);
	p.ShootSec();

	getchar();
	return 0;
}