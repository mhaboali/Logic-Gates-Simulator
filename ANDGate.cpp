#include "ANDGate.h"


void ANDGate::Calc_Out()
{
	if (In1->Get_Value() && In2->Get_Value())
	{
		Out->Set_Value(1);
	}
	else
		Out->Set_Value(0);
}

