#include <vector>

class item{
    friend class bag;
    protected:
    int obj_x;
    int obj_y;
    public:
    virtual item () {}
    virtual void use (){}
};

class weapons : public item{   
};

class potions :public item{
    int life_gain;                  //le gain (ou la perte) de vie quand on boit la potion avec 'd'
};




class bag{
    int size_max = 20 ;                 //le nombre maximal d'objets que le héros peut porter dans son sac à dos 
    protected :
    int size;                           //le nombre d'objets que notre héros à dans son sac
    std::vector<item*>items;
    void add(item i){
        if (size<size_max){
            items.push_back(& i);       //on ajoute l'objet au sac à dos
            size ++;                    //on augmente le nombre d'item dans le sac 
        }
        else{
                                         // le sac est plein
        }
    }
    void drop(const_iterator pos ){
        items.erase(pos);
    }   
};