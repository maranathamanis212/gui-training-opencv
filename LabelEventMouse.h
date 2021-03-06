#ifndef LABELEVENTMOUSE_H
#define LABELEVENTMOUSE_H

#include <QtGui>
#include <QMouseEvent>
#include <QObject>
#include <QLabel>
#include <qwidget.h>
#include <qrect.h>
#include <qpoint.h>


//#define ModeBoxDynamic true
//#define ModeBoxStatic true
class LabelEventMouse:public QLabel
{
    Q_OBJECT
public:
    LabelEventMouse(QWidget *parent=0);
    ~LabelEventMouse();
    void setTypeBox(unsigned char Type);
    void UpdateHeightandWidthBox(int H, int W);
signals:
    void EmitRegionExtract(void);
protected:
    void mouseMoveEvent(QMouseEvent *evn);
    void mousePressEvent(QMouseEvent *evn);
    void mouseReleaseEvent(QMouseEvent *evn);
    void paintEvent(QPaintEvent *evn);
private:
    bool pintaCaja;
    bool pintaPunto;
    bool BotonLeft;
    bool BotonRight;
    QRect *Caja;
    QRect *Caja2;
    QPoint puntoInicio;
    QPoint puntoFinal;
    QPoint PosMouse;
    int XInit;
    int YInit;
    int XEnd;
    int YEnd;
    int HeightBox,WidthBox;
    unsigned char TypeB;
};

#endif // LABELEVENTMOUSE_H
