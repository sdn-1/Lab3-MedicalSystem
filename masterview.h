#ifndef MASTERVIEW_H
#define MASTERVIEW_H

#include <QWidget>
#include "loginview.h"
#include "doctorview.h"
#include "departmentview.h"
#include "patienteditview.h"
#include "patientview.h"
#include "welcomeview.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MasterView;
}
QT_END_NAMESPACE

class MasterView : public QWidget
{
    Q_OBJECT

public:
    MasterView(QWidget *parent = nullptr);
    ~MasterView();

public slots:
    void goLoginView();
    void goWelcomeView();
    void goDoctorView();
    void goDepartmentView();
    void goPatientView();
    void goPatientEditView();
    void goPreviousView();

private slots:
    void on_btBack_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_btLogout_clicked();

private:
    void puahWidgetToStackView(QWidget *widget);

    Ui::MasterView *ui;

    WelcomeView *welcomeView;
    DoctorView *doctorView;
    PatientEditView *patientEditView;
    PatientView *patientView;
    LoginView *loginView;
    DepartmentView *departmentView;

};
#endif // MASTERVIEW_H