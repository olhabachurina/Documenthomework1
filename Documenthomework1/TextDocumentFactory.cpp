#include "TextDocumentFactory.h"
#include "TextDocument.h"

Document* TextDocumentFactory::createDocument() {
    return new TextDocument;
}