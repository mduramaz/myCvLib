#ifndef BITMAP_READER__
#define BITMAP_READER__
#define BMP_HEADER_SIZE         54
#define BMP_COLOR_TABLE_SIZE    1024


#include <iostream>
using namespace std;

namespace mycv{
	
	struct Pixel 
  {
   unsigned char R;
   unsigned char G;
   unsigned char B;
  };
  


    class Image{
        public:
        int bitDepth;
        unsigned char* image;
        int width;
        int height;
        unsigned char *header;
        unsigned char *colorTable;
        Pixel **pixel;


        Image(int i){}
        Image(){}
        Image(Image* image)
        {
          this->bitDepth=image->bitDepth;
          this->image=new unsigned char[(image->width)*(image->height)*3];

          pixel=new Pixel*[height];
          for(int i=0; i<height; i++)
              pixel[i]=(Pixel*)&image[3*i*width];

          this->width=image->width;
          this->height=image->height;
          header=new unsigned char[BMP_HEADER_SIZE];
          colorTable=new unsigned char[BMP_COLOR_TABLE_SIZE];
          memcpy(this->header,image->header,BMP_HEADER_SIZE);
          memcpy(this->colorTable,image->colorTable,BMP_COLOR_TABLE_SIZE);

        }
       // Image(int _bitDepth,unsigned char* image,int width,int height,unsigned char *header,unsigned char *_colorTable):_bitDepth(_bitDepth),
          //   image(image),width(width),height(height),_header(_header),_colorTable(_colorTable){ }
        Image(const char *imgName){bitMapReader(imgName);}
        void bitMapReader(const char *imgName);
        void write(const char* imgName)
        {
          imageWriter(imgName);
        }
        void imageWriter(const char *imgName);
        
       /* pixel getpixelRed(int i)const{return image[i];}
        pixel getpixelGreen(int i)const{return image[i+1];}
        pixel getpixelBlue(int i)const{return image[i+2];}

        pixel* getpixel(int i)
        {
            pixel *pixelArray=new pixel[3];
            pixelArray[0]=image[i];
            pixelArray[1]=image[i+1];
            pixelArray[2]=image[i+2];
            return pixelArray;
        }*/

        union test{
          unsigned char t[4];
          int tamsayi;
        }test;


        void setHearder(int height,int width)
        {
          this->height=height;
          test.tamsayi=height;
          header[18]=test.t[0];
          header[19]=test.t[1];
          header[20]=test.t[2];
          header[21]=test.t[3];

          this->width=width;
          test.tamsayi=width;
          header[22]=test.t[0];
          header[23]=test.t[1];
          header[24]=test.t[2];
          header[25]=test.t[3];

          for(int i=0; i<height; i++)
              delete pixel[i];
          delete* pixel;
      
          pixel=new Pixel*[height];
          for(int i=0; i<height; i++)
              pixel[i]=(Pixel*)&image[3*i*width];


        }
    };
}

#endif 
