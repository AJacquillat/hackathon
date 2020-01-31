#include <string>

class character {
protected:
    std::string name;       //nom du personnage
    float life;             //barre de vie (en pourcent)
    float attack;           //capacité à blesser un autre personnage (en pourcent)
    float defense;          //capacité à se défendre (en pourcent)
    int xpos;               //abscisse
    int ypos;               //ordonnée
public:
    character (std::string nm, int x, int y ) : name(nm), life(100.0), attack(0.0), defense(0.0), xpos(x), ypos(y) {}
    void move (int i){
        if (i==1){
            if (true){xpos ++ ;}
            } // se déplacer vers la droite
        if (i==2){
            if (true) {xpos -- ;} 
            } // se déplacer vers la gauche
        if (i==3){
            if (true) {ypos ++ ;}
            } // se déplacer vers le haut
        if (i==4){
            if(true){ypos -- ;}
            } // se déplacer vers le bas
    }
    void hit (character c){
        c.life = c.life - attack*(1 - (c.defense / 100.0)) ; //le personnage attaqué perd des points de vie en fonction de sa défense
    }
};

class hero : public character {
public:
    bag b; //le héro a un sac à dos
};
