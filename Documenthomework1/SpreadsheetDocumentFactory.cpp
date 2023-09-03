#include "SpreadsheetDocumentFactory.h"
#include "SpreadsheetDocument.h"

Document* SpreadsheetDocumentFactory::createDocument() {
    return new SpreadsheetDocument;
}