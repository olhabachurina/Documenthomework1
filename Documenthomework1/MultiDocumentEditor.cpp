#include "MultiDocumentEditor.h"
#include <iostream>
MultiDocumentEditor::MultiDocumentEditor(DocumentFactory* factory) : factory(factory) {}

MultiDocumentEditor::~MultiDocumentEditor() {
    for (Document* doc : documents) {
        delete doc;
    }
    documents.clear(); // ќчистим вектор, чтобы избежать двойного удалени€.
}

void MultiDocumentEditor::createDocument() {
    Document* doc = factory->createDocument();
    documents.push_back(doc);
    std::cout << "New document created\n";
}

void MultiDocumentEditor::openDocument(int index) {
    if (index >= 0 && index < documents.size()) {
        documents[index]->open();
    }
}

void MultiDocumentEditor::saveDocument(int index) {
    if (index >= 0 && index < documents.size()) {
        documents[index]->save();
    }
}