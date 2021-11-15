// I only want to include this once
// 只包含这个文件一次
// 这个语句告诉 complier 如果 SQUARE_H 没有被define
// 就 define 为 SQUARE_H
// 如果已经被 defined 
// 就不再 define
// 这样就避免了重复冲突问题

#ifndef SQUARE_H            
#define SQUARE_H

int square(int a ){
    return  a * a;
}


#endif
