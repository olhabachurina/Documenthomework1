#pragma once
#include "DocumentFactory.h"
class SpreadsheetDocumentFactory : public DocumentFactory {//// ��� �������� ���������� ����������� �������.
public:
    Document* createDocument() override;
};


