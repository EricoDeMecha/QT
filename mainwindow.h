#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionopen_triggered();

    void on_actionSave_As_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actioncopy_triggered();

    void on_actionPaste_triggered();

    void on_actionundo_triggered();

    void on_actionredo_triggered();

    void on_actioncut_triggered();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
    QString CurrentFile = "";
};

#endif // MAINWINDOW_H
