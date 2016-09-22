#if !defined Joueur_h
#define Joueur_h

Class Joueur {

private:
	Piece m_pieces[16];

public:
	Joueur(bool white);
	~Joueur();
	bool isWhite();
	void affiche();

	
};

#endif /*Joueur_h*/