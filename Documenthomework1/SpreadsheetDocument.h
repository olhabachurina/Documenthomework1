#pragma once
#include "Document.h"

class SpreadsheetDocument : public Document {//���������� ���������� ��������� ���� "�������� ����������� �������".
public:
    void open() override;// ��������������� ������� open() ��� �������� ��������� ����������� �������.
    
    void save() override;// // ��������������� ������� save() ��� ���������� ��������� ����������� �������.
};