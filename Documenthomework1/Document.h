#pragma once
class Document {
public:
    virtual void open() = 0;// ����� ����������� ������� open() ��������� �������� �������� ���������.
    // ������-���������� ������ ����������� ��� ������� � ������������ � ����������� ������ ����������.
    virtual void save() = 0;// ����� ����������� ������� save() ��������� �������� ���������� ���������.
    // ������-���������� ������ ����������� ��� ������� ��� ���������� ������ ���������.
    virtual ~Document() {}// ����������� ���������� ��������� ��������� ������� ������� �������-����������� ����� ��������� �� ������� �����.
};