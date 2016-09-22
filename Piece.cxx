/** 
 * Mise en oeuvre de Piece.h
 *
 * @file Piece.cxx
 */

// A besoin de la declaration de la classe
#include <iostream>
#include "Piece.h"

using namespace std;

Piece::Piece()
{
  // ne fait rien => objet instancie mais non valide.
	cout << "Constructeur par défaut" << endl
}

void
Piece::Piece(int x, int y, bool white)
{
	m_x = x;
	m_y = y;
	m_white = white;
	cout << "debut piece" << endl;
}

Piece::~Piece()
{
	cout << "fin piece" << endl;
}


void
Piece::init( int x, int y, bool white )
{
  m_x = x;
  m_y = y;
  m_white = white;
  cout << "debut piece" << endl;
}

void
Piece::move( int x, int y )
{
  m_x = x;
  m_y = y;
}

void
Piece::affiche()
{
	cout << "Piece: x=" << x() << " y=" << y() << " "
		<< (isWhite() ? "blanche" : "noire") << endl;
}

int
Piece::x()
{
  return m_x;
}

int
Piece::y()
{
  return m_y;
}

bool
Piece::isWhite()
{
  return m_white;
}

bool
Piece::isBlack()
{
	return !m_white;
}

