//
// Created by ruben on 4/1/2026.
//

#ifndef RECIPE1_1_INGREDIENT_H
#define RECIPE1_1_INGREDIENT_H
#include<iostream>
using namespace std;
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
    Ingredient(string n , double cal, double cos, Ingredient *nxt): name(n), calories( cal), cost(cos), next(nxt){}
    string getName() {
        return name;
    }
    void setName(string n) {
        name = n;
    }
    double getCalories() {
        return calories;
    }
    void setCalories(double cal) {
        calories = cal;
    }
    double getCost() {
        return cost;
    }
    void setCost(double cos) {
        cost = cos;
    }
    Ingredient * getNext() {
        return next;
    }
    void setNext(Ingredient * nxt = nullptr) {
        next = nxt;
    }







};


#endif //RECIPE1_1_INGREDIENT_H