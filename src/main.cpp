#include <gui.hpp>

#include <QtWidgets>
#include <QCommandLineParser>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    app.setApplicationName("Hello Qt");

    QCommandLineParser parser;
    parser.setApplicationDescription("Minimal Qt project demo");
    parser.addHelpOption();
    parser.process(app);

    return gui::main(app, parser.positionalArguments());
}
