#pragma once
#include "card.h"
#include <vector>
class deck
{
	vector<card>cards;
public:
	deck();

	void shuffle();
	card get_card();
	int remaining_cards();

	~deck();
};

