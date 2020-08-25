#include <iostream>
using namespace std;
#include "nameKyler.h"

void nameLozano();
void nameWeber();
void nameCruse();

int main()
{
	nameKyler();
	nameLozano();
	nameWeber();
	nameCruse();
	return 0;
}

void nameKyler()
{
	cout << "Kyler Geesink" << endl;
}

void nameLozano()
{
	cout << "Nicholas Lozano" << endl;
}

void nameWeber()
{
	cout << "Nick Weber" << endl;
}

void nameCruse()
{
	cout << "Cassandra Cruse" << endl;
}