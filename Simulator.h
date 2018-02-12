#pragma once
#include"Gate.h"
#include"Node.h"
#include"ANDGate.h"
#include"ORGate.h"
#include"XORGate.h"
#include<fstream>
using namespace std;
class Simulator
{
	Gate *GA[1000];
	int GS;
	Node *NA[2000];
	int NS;
public:
	Simulator();
	~Simulator();
	Node* FindNode(string name);
	Node* AddNode(string name);
	Node* FindOrAdd(string name);
	Gate* AddGate(string name);
	void Sim();
	void Load(const string path);
	void PrintAllNodes();
};

