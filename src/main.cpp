#include <iostream>
#include "cudatest.cuh"
#include "image.h"

int main(int argc, char *argv[])
{ 
   mycv::Image image("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess.bmp");
   image.write("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess3.bmp");
   
   return 0;
}