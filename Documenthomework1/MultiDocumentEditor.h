#pragma once
#include "DocumentFactory.h"
#include "Document.h"
#include <vector>

class MultiDocumentEditor {//класс, представляющий многодокументный редактор.
private:
    std::vector<Document*> documents;//Вектор для хранения документов
    DocumentFactory* factory;// Фабрика документов для создания новых документов.

public:
    MultiDocumentEditor(DocumentFactory* factory);// Конструктор принимает указатель на фабрику документов.
    ~MultiDocumentEditor();

    void createDocument();// создает новый документ с использованием фабрики.
    void openDocument(int index);//открывает документ по индексу в векторе и выполняет операцию открытия.
    void saveDocument(int index);//сохраняет документ по индексу в векторе
};