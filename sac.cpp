#include <iostream> 
#include <curses.h>
#include <vector>

//La classe objet est la classe générale de laquelle dériveront tous les objets 
//il est utile de créer une classe objets pour pouvoir créer un vecteur d'objets dans le sac à dos 

class item{
    friend class bag;
    int obj_x;
    int obj_y;
    protected:
    void use (){

    }
};

//class gold :public item{};


//De cette classe dériveront les différentes armes et armures 
class weapons : public item{
    
};

//de cette classe dériveront les potions qui redonnent de la vie et qui augmentent la défense 
class potions :public item{
    float life_gain; //le gain (ou la perte) de vie quand on boit la potion avec 'd'
};

class bag{
    int size_max = 20 ; //le nombre maximal d'objets que le héros peut porter dans son sac à dos 
    protected :
    int size; //le nombre d'objets que notre héros à dans son sac
    std::vector<item*>items;
    void add(item voisin){
        if (size<size_max){
            items.push_back(& voisin);
            size ++; //on augmente le nombre d'item dans le sac 
        }
        else{
            //////il faudra afficher sur l'interface que le sac est plein, je ne sais pas faire pour l'instant 
        }
    }
    void drop(const_iterator pos ){
        items.erase(pos);
    }   
};

