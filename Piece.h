/** 
 * Header de Piece.cxx
 *
 * @file Piece.h
 */

#if !defined Piece_h
#define Piece_h

/**
 * Declaration d'une classe modélisant une piece de jeu d'echec.
 */
class Piece 
{
private:
  int m_x;
  int m_y;
  bool m_white;
  
public:
  Piece();
  ~Piece();
  Piece(int x, int y, bool white);
  void init( int x, int y, bool white );
  void move( int x, int y );
  void affiche();
  int x();
  int y();
  bool isWhite();
  bool isBlack();

}; 

#endif // !defined Piece_h
