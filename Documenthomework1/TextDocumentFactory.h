#pragma once
#include "DocumentFactory.h"

class TextDocumentFactory : public DocumentFactory {//создания текстовых документов.
public:
    Document* createDocument() override;
};
