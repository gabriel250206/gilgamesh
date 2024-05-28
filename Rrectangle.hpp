#ifndef rectangle_h
#define rectangle_h

#include <SFML/Graphics.hpp>
using namespace sf;

class Pato1{
private:
    Vector2f speed;
    Vector2f acc;
    RectangleShape shape;
    int rebotesx;
    int rebotesy;
public:
    bool vivo;
    Pato1(Vector2f size,RenderWindow &window);
    bool disparoAcertado(Vector2i position);
    void update();
    void drawTo(RenderWindow &window);

};
#endif