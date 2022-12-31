#include <stdlib.h>

struct Image 
{
    u_int8_t *data = NULL;
    size_t size = 0;
    int w;
    int h;
    int channels;

    Image(const char *filename);
    Image(int w, int h, int channels);
    Image(const Image& img);
    ~Image();

    bool read(const char *filename);
    bool write(const char *filename);
};