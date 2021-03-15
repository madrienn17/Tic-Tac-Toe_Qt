#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
signals:
    void game_over();

private slots:
    void actionnew_game();
    void action_exit();
    void btn_clicked();
    void game_over_msg();

private:
    void displayWinner(QPushButton*);
    bool checkLines(QPushButton*, QPushButton*, QPushButton*);
    void checkWinner();

    // 0 - PLAYER1 x
    // 1 - PLAYER2 o
    int nextPlayer = 1;
    int clickcount = 0;
};
#endif // MAINWINDOW_H
