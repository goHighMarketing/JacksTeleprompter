#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVariantAnimation>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int speed;
    QString fileName, line;
    QColor color;
    void Stop();

private slots:
    void on_pushButton_released();

    void on_pushButton_Start_clicked();

    void scrollText();

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_Speed_valueChanged(int value);

    void on_actionQuit_triggered();

    void on_actionA_bout_triggered();

    void on_pushButton_fontColor_released();

private:
    Ui::MainWindow *ui;
    QVariantAnimation animation;
    QTimer * timer;
};
#endif // MAINWINDOW_H
