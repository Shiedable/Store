#pragma once
#include"Appliance.h"
#include"Cloth.h"
#include"Food_And_Beverage.h"
class Cart : public Appliance, public Cloth, public Food_And_Beverage{
public:
	Food_And_Beverage apple;
		Food_And_Beverage milk;
		Cloth T_shirt;
		Appliance laptop;
};