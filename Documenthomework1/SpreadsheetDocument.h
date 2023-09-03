#pragma once
#include "Document.h"

class SpreadsheetDocument : public Document {//конкретная реализация документа типа "Документ электронной таблицы".
public:
    void open() override;// Переопределение функции open() для открытия документа электронной таблицы.
    
    void save() override;// // Переопределение функции save() для сохранения документа электронной таблицы.
};