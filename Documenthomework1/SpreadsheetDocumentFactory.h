#pragma once
#include "DocumentFactory.h"
class SpreadsheetDocumentFactory : public DocumentFactory {//// дл€ создани€ документов электронной таблицы.
public:
    Document* createDocument() override;
};


