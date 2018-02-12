#include "Node.h"

Node::Node()
{
	Name = "";
	Value = 0;
}
Node::Node(string s)
{
	Name = s;
	Value = 0;
}
Node::Node(string s,short v)
{
	Name = s;
	Value = v;
}

void Node::Set_Name(string s)
{
	Name = s;
}
string Node::Get_Name()
{
	return Name;
}

void Node::Set_Value(short v)
{
	Value = v;
}
short Node::Get_Value()
{
	return Value;
}

void Node::PrintNode()
{
	cout << this->Name << "=" << this->Value << endl;
}




