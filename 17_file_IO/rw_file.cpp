// This program reads a matrix from 2 differernt files, computer matrix multiplication, and stores the result in third file.
// By clay liu

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<bitset>

using namespace std;

// print out a square matrix 
void print_matrix(int* a, int n){
    for(int i = 0; i < n * n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

// Matrix multiplication
void m_mul(int *a, int *b, int *c, int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp = 0;
            for(int k = 0; k < n; k++){
                temp += a[i * n + k] *b[k * n + j];
            }
            c[i * n + j] = temp;
        
        }
    }
}

// New signature to get command line arguments

int main(int argc, char **argv){

    // File Object
    fstream file1;

    // Different mode for opening a file
    // 打开文件的不同方式

    // app : Output is appended to the end of file
    // appended 不删除任何东西，只是在文件的最后添加
    cout << bitset<8>(ios::app) << endl;

    // ate : Open a file and seek to end of file
    // 打开文件时，在文件的最后，但是仍然是可以移动的
    cout << bitset<8>(ios::ate) << endl;

    // in : Open file for reading
    // 读入文件
    cout << bitset<8>(ios::in) << endl;

    // out : Open file for writing(also truncate)
    // 写文件
    cout << bitset<8>(ios::out) << endl;

    // trunc : clean the contents before open it.
    // 打开文件前将文件内容清空
    cout << bitset<8>(ios::trunc) << endl;
    // How to combine flags
    cout << bitset<8>(ios::out | ios::in) << endl;

/*=============================================*/
    // open a file for reading 
    // 打开第一个输入的参数（文件）
    // fs_object.open(文件名，文件的打开方式)
    file1.open(argv[1], ios::in);

    // Declare and allocate memory 
    // 声明 且 开辟 内存
    int *a;
    int n = 3;
    size_t bytes = n * n * sizeof(int);
    a = (int*)malloc(bytes);

    // Read in matrix1
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            file1 >> a[i * n + j];
        }
    }

    // close the file
    // 关闭文件
    file1.close();

    // Print out the matrix
    print_matrix(a,n);


/*=============================================*/


    fstream file2;

    // 打开 第二个文件
    file2.open(argv[2], ios::in);

    file2 >> n;
    int *b;
    bytes = n * n * sizeof(int);
    b = (int*)malloc(bytes);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            file2 >> b[i * n + j];
        }
    }

    file2.close();
    print_matrix(b,n);

/*=============================================*/
    int *c;
    c = (int*)malloc(bytes);
    m_mul(a,b,c,n);

    fstream file3;
    file3.open(argv[3], ios::out);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            file3 << c[i * n + j] << ' ';
        }
        file3 << '\n';
    }
    file3.close();

    
    return 0;
}






























