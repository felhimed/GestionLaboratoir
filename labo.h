#ifndef LABO_H
#define LABO_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class labo
{
public:


    QSqlQueryModel * setid();
    bool ajouter();
    bool supprimer(int );
    bool modifier();
    QSqlQueryModel * afficher() ;
    QSqlQueryModel * afficher5(QString a);
    QSqlQueryModel * afficher4(QString a,QString b);
    labo();
    labo(int , QString , QString, QString, QString,QString);

private:
    int ID_LABO;
    QString NOM_LABO ;
    QString NTEL_LABO;
    QString SPECIALITE ;
    QString ADRESSE ;
    QString VIDEO;
};

#endif // LABO_H
