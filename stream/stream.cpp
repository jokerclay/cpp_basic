/**
 *
 * Stream classes in C++ are used to input and output operations 
 * on files and io devices.
 *  Stream 类在 c++ 中用于文件和设备的输入输出
 *
 * ios ---------> istream --> ifstream
 *       |______> ostream --> ofstream
 *
 *
 *----------
 * ios class − This class is the base class for all stream classes. 
 * ios 类 是所有 stream 类 的基类
 * The streams can be input or output streams. 
 * This class defines members that are independent of how the templates of the 
 * class are defined.
 *
 * For more info:
 * <a href="https://www.cplusplus.com/reference/ios/ios/">cplusplus</a>
 * 注意：
 *      1. 常用到的有一些 State flag functions:
 *      用来检测输入输出的状态
 *      good()
 *      eof()
 *      fail()
 *      bad()
 *      上述成员函数返回的 是 bool 型， 0/1 
 *
 *      2. clear(), 清空状态
 *      3. 上述成员函数 可用于 istream / ostream/ ifstream / ofstream ...
 *          来检测 输入/输出 文件输入/文件输出
 *
 *
 *
 * 
 *--------------
 * istream Class − The istream class handles the input stream in c++ programming
 * language. These input stream objects are used to read and interpret the 
 * input as a sequence of characters. The cin handles the input.
 *
 *
 *--------------
 * ostream class − The ostream class handles the output stream in c++ programming
 * language. These output stream objects are used to write data as a sequence 
 * of characters on the screen. cout and puts handle the out streams '
 * in c++ programming language.
 *
 *
 * */








































