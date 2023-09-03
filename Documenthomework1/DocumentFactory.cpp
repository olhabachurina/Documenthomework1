#include "DocumentFactory.h"

class TextDocumentFactory : public DocumentFactory {
public:
    Document* createDocument() override;
};