#include "Gate.h"


Gate::Gate()
{
	In1 = NULL;
	In2 = NULL;
	Out = NULL;
}
Gate::Gate(Node* i)
{
	In1 = i;
	In2 = NULL;
	Out = NULL;
}
Gate::Gate(Node* i1,Node* i2)
{
	In1 = i1;
	In2 = i2;
	Out = NULL;
}


Gate::~Gate()
{
}

void Gate::Set_In1(Node* i)
{
	In1 = i;
}
void Gate::Set_In2(Node* i2)
{
	In2 = i2;
}
void Gate::Set_Out(Node* o)
{
	Out=o;
}

Node* Gate::Get_In1()
{
	return In1;
}
Node* Gate::Get_In2()
{
	return In2;
}
Node* Gate::Get_Out()
{
	return Out;
}