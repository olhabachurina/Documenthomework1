#pragma once
#include "Document.h"

class TextDocument : public Document {//���������� ��������� ���� "��������� ��������".
public:
    void open() override;
    void save() override;
};
