#ifndef NET_HPP
#define NET_HPP


#include <QObject>

#include <QtCore>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class Net : public QObject
{
Q_OBJECT
  QNetworkAccessManager *manager;
private slots:
  void replyFinished(QNetworkReply *);
public:
  void CheckSite(QString url);
};


#endif // NET_HPP
