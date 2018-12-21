#pragma once

#include <QtWidgets>
#include <QStringList>

namespace gui {
    int main(QApplication& app, const QStringList& args);

    class Window : public QWidget {
        Q_OBJECT
    public:
        explicit Window(const QString& title, QWidget* parent = Q_NULLPTR);

        void moveToCenter();
        virtual void keyPressEvent(QKeyEvent* event) override;
    };
}
