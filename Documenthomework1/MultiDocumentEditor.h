#pragma once
#include "DocumentFactory.h"
#include "Document.h"
#include <vector>

class MultiDocumentEditor {//�����, �������������� ���������������� ��������.
private:
    std::vector<Document*> documents;//������ ��� �������� ����������
    DocumentFactory* factory;// ������� ���������� ��� �������� ����� ����������.

public:
    MultiDocumentEditor(DocumentFactory* factory);// ����������� ��������� ��������� �� ������� ����������.
    ~MultiDocumentEditor();

    void createDocument();// ������� ����� �������� � �������������� �������.
    void openDocument(int index);//��������� �������� �� ������� � ������� � ��������� �������� ��������.
    void saveDocument(int index);//��������� �������� �� ������� � �������
};