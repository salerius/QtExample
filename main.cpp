#include <QApplication>
#include <QPushButton>
#include <QSpinBox> // лічильник який щось рахує
#include <QSlider> // ползунок
#include <QHBoxLayout> // слой форматування,  який розположує віджети в горизонталі


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSpinBox *sb = new QSpinBox;
    QSlider *sl = new QSlider(Qt::Horizontal);

    //Максимальне значення ползунка і лічильника
    sb->setMaximum(100);
    sl->setMaximum(100);


    // клас який відповідає за всі віджети
    QWidget *window = new QWidget;


    //створення слоя і добавлення на нього віджетів
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(sb);
    layout->addWidget(sl);

    //слой прикріплюємо до віджету
    window->setLayout((layout));

    QObject::connect(sl,SIGNAL(valueChanged(int)),sb,SLOT(setValue(int)));
    QObject::connect(sb,SIGNAL(valueChanged(int)),sl,SLOT(setValue(int)));

    window->show();






    return a.exec();
}
