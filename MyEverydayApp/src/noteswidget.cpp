#include "noteswidget.h"
#include "ui_NotesWidget.h"

NotesWidget::NotesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NotesWidget)
{
    ui->setupUi(this);
}

NotesWidget::~NotesWidget()
{
    delete ui;
}
