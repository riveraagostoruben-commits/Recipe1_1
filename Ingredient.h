//
// Created by ruben on 4/1/2026.
//

#ifndef RECIPE1_1_INGREDIENT_H
#define RECIPE1_1_INGREDIENT_H
class Ingredient {
private:
    string name;
    double calories;
    double cost;
    Ingredient *next;

public:
    Ingredient() {
        next = nullptr;
    }
    Ingredient(string n , double cal, double cos, Ingredient *nxt): name(n), calories(cal), cost(cos), next(nxt){}
    ~Ingredient();
    



};


#endif //RECIPE1_1_INGREDIENT_H