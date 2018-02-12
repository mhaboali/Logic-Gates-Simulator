#pragma once
#include"Node.h"
class Gate
{
protected:
	Node* In1;
	Node* In2;
	Node* Out;
public:
	Gate();
	Gate(Node* i1);
	Gate(Node* i1, Node* i2);
	~Gate();
	void Set_In1(Node* i);
	void Set_In2(Node* i);
	void Set_Out(Node* o);
	Node* Get_In1();
	Node* Get_In2();
	Node* Get_Out();
	virtual void Calc_Out() = 0;
};

