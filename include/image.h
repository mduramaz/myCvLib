#ifndef BITMAP_READER__
#define BITMAP_READER__
#define BMP_HEADER_SIZE         54
#define BMP_COLOR_TABLE_SIZE    1024

namespace mycv{

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
    };
}

#endif 