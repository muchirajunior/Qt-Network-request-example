#include "net.hpp"

void Net::replyFinished(QNetworkReply *reply)
{
qDebug() << reply->readAll();
}

void Net::CheckSite(QString url)
{
  QUrl qrl(url);
  manager = new QNetworkAccessManager(this);
  connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
  manager->get(QNetworkRequest(qrl));
}
