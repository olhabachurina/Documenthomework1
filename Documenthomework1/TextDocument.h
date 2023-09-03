#pragma once
#include "Document.h"

class TextDocument : public Document {//реализация документа типа "Текстовый документ".
public:
    void open() override;
    void save() override;
};
