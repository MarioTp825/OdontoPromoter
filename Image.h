//
// Created by mario_tepe on 4/08/21.
//

#ifndef GRAFICAS_IMAGE_H
#define GRAFICAS_IMAGE_H

#include <vector>

struct  Color {
    float r,g,b;

    Color();
    Color(float r, float g, float b);
    ~Color();
};

class Image {
public:
    Image(int width, int height);
    ~Image();

    Color GetColor(int x, int y) const;
    void SetColor(const Color& color, int x, int y);

    void Export(const char* path) const;

private:
    int m_width;
    int m_height;
    std::vector<Color> m_colors;
};


#endif //GRAFICAS_IMAGE_H
