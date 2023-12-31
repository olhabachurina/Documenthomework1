#pragma once
#include "Document.h"

class DocumentFactory {//����������� ������� ����� ��� ������ ����������.
public:// ����� ����������� ������� createDocument() ��������� �������� �������� ���������.
    // ������-���������� ������ ����������� ��� �������, ����� ��������� ���������� ���������� ����� ����������.
    virtual Document* createDocument() = 0;
    
    virtual ~DocumentFactory() {}// ����������� ���������� ��������� ��������� ������� ������� ������ ����� ��������� �� ������� �����.
    
};