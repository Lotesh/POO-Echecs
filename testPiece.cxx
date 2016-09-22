/** 
 * Programme test de Piece
 *
 * @file testPiece.cxx
 */

// Utile pour l'affichage
#include <iostream>
#include "Piece.h"
#include "Joueur.h"


// Pour utiliser les flux de iostream sans mettre "std::" tout le temps.
using namespace std;


/**
 * Programme principal
 */
int main( int argc, char** argv )
{
  // instancie un objet p1 de type Piece
  Piece p1;
  Piece p2(4, 4, false);
  // p1 est une piece blanche de coordonnees (3,3)
  p1.init( 3, 3, true );
  
  if (p2.isWhite())
	  cout << "Pièce blanche" << endl;
  else
	  cout << "Pièce noire" << endl

cout << "Pièce" << (p2.isBlack() ? "noir" : "blanche") << endl
  // On l'affiche
  p1.affiche();
  p2.affiche();

  Joueur jb(true);
  jouneur jn(false);


  
  /*cout << "Piece: x=" << p1.x() << " y=" << p1.y() << " "
       << ( p1.isWhite() ? "blanche" : "noire" ) << endl;
  cout << "Piece: x=" << p2.x() << " y=" << p2.y() << " "
	  << (p2.isWhite() ? "blanche" : "noire") << endl;*/
  

  // les objets definis dans cette fonction sont automatiquement détruits.
  // Ex : p1
}
