#pragma once

#include <QObject>
#include <QString>

class Example : public QObject {
    Q_OBJECT
public:
    explicit Example(const QString& name, QObject* parent = nullptr);
    QString name() const;

private:
    QString m_name;
};
