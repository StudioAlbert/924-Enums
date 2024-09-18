#ifndef RESTAURANT_H
#define RESTAURANT_H

enum class Dish
{
	kPizza = 'p',
	kSalad = 's',
	kBurger = 'b'
};

enum class Dessert
{
	kPie,
	kSundae
};

std::string DescriptionDessert(Dessert dessert)
{
	switch (dessert)
	{
	case Dessert::kPie:
		return "Pie";
		break;
	case Dessert::kSundae:
		return "Sundae";
		break;
	default:
		break;
	}


}


#endif

