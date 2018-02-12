#include "Simulator.h"


Simulator::Simulator()
{
	NS = 0;
	GS = 0;
}


Simulator::~Simulator()
{
	int i;
	for (i = 0; i < NS; i++)
		delete NA[i];
	for (i = 0; i < GS; i++)
		delete GA[i];

}


Node* Simulator::FindNode(string name)
{
	int i;
	for (i = 0; i < NS; i++)
	{
		if (NA[i]->Get_Name() == name)
			return NA[i];
		else
			return NULL;
	}
}


Node* Simulator::AddNode(string name)
{
	NA[NS] = new Node();
	NS++;
	return NA[NS - 1];
}


Node* Simulator::FindOrAdd(string name)
{
	Node* p = FindNode(name);
	if (p != NULL)
		return p;
	return AddNode(name);
}


Gate* Simulator::AddGate(string name)
{
	if (name == "AND")
		GA[GS] = new ANDGate();
	else if (name == "OR")
		GA[GS] = new ORGate();
	//etc...
	GS++;
	return GA[GS - 1];
}


void Simulator::Sim()
{
	int i;
	for (i = 0; i < GS; i++)
		GA[i]->Calc_Out();
}


void Simulator::Load(const string path)
{
	ifstream f1;
	f1.open(path);
	while (!f1.eof())
	{
		string s;
		f1 >> s;
		if (s == "SET")
		{
			string n;	short v;
			f1 >> n >> v;
			FindOrAdd(n)->Set_Value(v);
		}
		else if (s == "OUT")
		{
			string n;
			f1 >> n;
			if (n == "ALL")
				PrintAllNodes();
			else
				FindOrAdd(n)->PrintNode();
		}
		else if (s == "SIM")
			Sim();
		else
		{
			Gate* g = AddGate(s);
			string n1, n2, n3;
			f1 >> n1 >> n2 >> n3;
			g->Set_In1(FindOrAdd(n1));
			g->Set_In2(FindOrAdd(n2));
			g->Set_Out(FindOrAdd(n3));
		}
	}
	f1.close();
}


void Simulator::PrintAllNodes()
{
	for (int i = 0; i < NS; i++)
		NA[i]->PrintNode();
}
