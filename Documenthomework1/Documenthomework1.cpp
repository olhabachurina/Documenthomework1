// Documenthomework1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TextDocumentFactory.h"
#include "SpreadsheetDocumentFactory.h"
#include "MultiDocumentEditor.h"

int main() {
    DocumentFactory* textFactory = new TextDocumentFactory;//создаЄм фабрики документов дл€ текстовых документов и документов электронных таблиц.
    DocumentFactory* spreadsheetFactory = new SpreadsheetDocumentFactory;

    MultiDocumentEditor editor(textFactory); // —оздаЄм экземпл€р многодокументного редактора, передава€ фабрику дл€ текстовых документов.
    
    editor.createDocument();// —оздаЄм новый документ.
    editor.openDocument(0);// ќткрываем  этот документ.
    editor.saveDocument(0);// сохран€ем этот документ.

    editor = MultiDocumentEditor(spreadsheetFactory);// ћен€ем фабрику на фабрику дл€ документов электронных таблиц.
    editor.createDocument();// —оздаЄм новый документ другого типа.
    editor.openDocument(0);// ќткрываем  этот документ
    editor.saveDocument(0);// сохран€ем этот документ

    delete textFactory;// ќсвобождаем пам€ть, удал€€ фабрики.
    delete spreadsheetFactory;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
