// This programe implements a vector and point using a class 
// By clay liu

#include<iostream>
#include"interface.h"

using namespace std;
/*============================================================================* 
*                                                                             *
*           解释 point 类中 的函数(行为) 如何操作 point 类中的数据            *
*                                                                             *
*============================================================================*/
// Medthod for updating the value of a point 
// 解释了 point 类中，update 函数做什么事
void point::update(double new_x,double new_y){
    x = new_x;
    y = new_y;
}

// Method for print the coordinates of a point
// 解释了 point 类中，print 函数做什么事
void point::print(){
    cout << "x: "<< x << ", y: " << y << endl;
}
/*============================================================================* 
*                                                                             *
*           解释构造函数做了什么事,赋予一些初始行为                           *
*                                                                             *
*============================================================================*/
// constructor for an empty vector
// 如果没有給 x1,y1,x2,y2 任何值，构造函数将两个值为 (0.0,0.0), (0.0,0.0)
vector::vector(){
    start.update(0.0,0.0);
    end.update(0.0,0.0);
}
// Constructor to set the value of the vector upon ctration
vector::vector(double x1, double y1, double x2,double y2){
    start.update(x1,y1);
    end.update(x2,y2);
}
/*============================================================================* 
*                                                                             *
*           解释 vector 类中 的函数(行为) 如何操作 vector 类中的数据          *
*                                                                             *
*============================================================================*/
// Medthod for updating the values of the point
void vector::update(double x1, double y1, double x2,double y2){
    start.update(x1,y1);
    end.update(x2,y2);
}
// Medthod printing the start and the end point 
void vector::print(){
    start.print();
    end.print();
}

