#include <gui.hpp>

namespace gui {
    using namespace std;

    int main(QApplication& app, const QStringList&) {
        Window window ("Hello Qt");
        window.setWindowIcon(QIcon(":/icons/qt.png"));
        window.resize(500, 300);
        window.moveToCenter();

        window.show();
        return app.exec();
    }

    Window::Window(const QString& title, QWidget* parent) : QWidget(parent) {
        setWindowTitle(title);

        auto layout = new QVBoxLayout(this);

        //===============================================================
        // Create widgets and add them to the window's layout
        //---------------------------------------------------------------
        
        //===============================================================
    }

    void Window::moveToCenter() {
        move(QApplication::desktop()->screen()->rect().center() - rect().center());
    }

    void Window::keyPressEvent(QKeyEvent* event) {
        switch (event->key()) {
        case Qt::Key_Escape:
            close();
            break;
        default:
            QWidget::keyPressEvent(event);
            break;
        }
    }
}
