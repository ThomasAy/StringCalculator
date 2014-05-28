/**
 * Copyright (C) 2012-2014 Phonations
 * License: http://www.gnu.org/licenses/gpl.html GPL version 2 or higher
 */


#include <igloo/igloo_alt.h>
using namespace igloo;

#include "StringCalculator.h"

Describe(A_Test)
{
	It(Should_have_a_String)
	{
		StringCalculator str;
		Assert::That(str.add(), Equals(0));
		Assert::That(str.add("2,3"), Equals(5));
	};
};
