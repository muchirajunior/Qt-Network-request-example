#include <QCoreApplication>
#include "net.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Net handler;
    handler.CheckSite("https://api.bitmart.com/ticker/BMX_ETH");

    return a.exec();
}
