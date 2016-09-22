#include <iostream>
#include "Joueur.h"

using namespace std;

Joueur::Joueur(bool white)
{
	int p = 0;
	for (int x = 1; x <= 8; x++)
		m_pieces[p].init(x, white ? 1 : 8, white);
	for (int x = 1; x <= 8; x++)
		m_pieces[p].init(x, white ? 2 : 7, white);
	cout << "destructeur Joueur spe" << endl;
}
Joueur::~Joueur()
{
	cout << "destructeur Joueur" << endl;
}

bool
Joueur::isWhite()
{
	return m_piece[0].isWhite();
}

void
Joueur::affiche()
{
	for(int i = 0; i < 16; i++)
		m_pieces[i].affiche();
}