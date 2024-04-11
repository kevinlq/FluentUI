#pragma once

#include <QObject>
#include <QQmlApplicationEngine>
#include "stdafx.h"
#include "singleton.h"

class AppInfo : public QObject {
Q_OBJECT
Q_PROPERTY_AUTO(QString, version)
private:
    explicit AppInfo(QObject *parent = nullptr);

public:
SINGLETON(AppInfo)

    Q_INVOKABLE [[maybe_unused]] void testCrash();
};
