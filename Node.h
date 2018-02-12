#pragma once
#include<iostream>
#include<string>
using namespace std;
class Node
{
	short Value;
	string Name;
public:
	Node();
	Node(string s);
	Node(string s,short v);
	void Set_Name(string s);
	string Get_Name();
	void Set_Value(short v);
	short Get_Value();
	void PrintNode();
	
};

