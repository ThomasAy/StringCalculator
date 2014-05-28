/**
 * Copyright (C) 2012-2014 Phonations
 * License: http://www.gnu.org/licenses/gpl.html GPL version 2 or higher
 */

#include "StringCalculator.h"

StringCalculator::StringCalculator()
{
}

int StringCalculator::add(string s1)
{
	int nb = 0;

	for(int i = 0; i < s1.length(); i++)
	{
		char c = s1[i];
		nb += atoi(&c);
	}

	return nb;
}
