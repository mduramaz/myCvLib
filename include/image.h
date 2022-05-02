#ifndef BITMAP_READER__
#define BITMAP_READER__
#define BMP_HEADER_SIZE         54
#define BMP_COLOR_TABLE_SIZE    1024

namespace mycv{
	
	typedef unsigned char pixel;

    class Image{
        public:
        int bitDepth;
        unsigned char* image;
        int width;
        int height;
        unsigned char *header;
        unsigned char *colorTable;
          
       // Image(int _bitDepth,unsigned char* image,int width,int height,unsigned char *header,unsigned char *_colorTable):_bitDepth(_bitDepth),
          //   image(image),width(width),height(height),_header(_header),_colorTable(_colorTable){ }
        Image(const char *imgName){bitMapReader(imgName);}
        void bitMapReader(const char *imgName);
        void write(const char* imgName)
        {
          imageWriter(imgName);
        }
        void imageWriter(const char *imgName);
        
        pixel getpixelRed(int i)const{return image[i];}
        pixel getpixelGreen(int i)const{return image[i+1];}
        pixel getpixelBlue(int i)const{return image[i+2];}

        pixel* getpixel(int i)
        {
            pixel *pixelArray=new pixel[3];
            pixelArray[0]=image[i];
            pixelArray[1]=image[i+1];
            pixelArray[2]=image[i+2];
            return pixelArray;
        }
    };
}

#endif 
