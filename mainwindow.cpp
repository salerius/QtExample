#include <QApplication>
#include <QLabel>>

int main(int argc, char **argv)
{
    QApplication app(argc,argv);
    QLabel lbl("hello world");
    lbl.show();


    return app.exec();

}
