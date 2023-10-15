#include "examplelib.h"

Example::Example(const QString& name, QObject* parent)
    : QObject(parent)
    , m_name(name)
{
}

QString Example::name() const
{
    return m_name;
}
