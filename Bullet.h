#ifndef BULLET_H
#define BULLET_H
#include <graphics.h>
class Bullet
{
public:
    Bullet();
    ~Bullet();
    //���const���ں��������б����棬���ʾ�ó�Ա���������޸�����κγ�Ա����
    void draw() const;
public:
    POINT position;
private:
    const int RADIUS = 5;//�ӵ��뾶
};
#endif // BULLET_H