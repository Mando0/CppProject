#include<string>
#ifndef head_h
#define head_h 2016
using namespace std;

class Head {
public:
    Head(string h_name, string h_description, int h_part, double h_weight, double h_cost):name(h_name),description(h_description),part_number(h_part),weight(h_weight),cost(h_cost){}
    
    string get_head_name(){
        return name;
    }
    string get_head_description(){
        return description;
    }
    int get_head_number(){
        return part_number;
    }
    double get_head_weight(){
        return weight;
    }
    double get_head_cost(){
        return cost;
    }
    
private:
    string name;
    string description;
    int part_number;
    double weight;
    double cost;
};

#endif
