//---------------------------------------------------------------------------

#ifndef bmpH
#define bmpH
#include <vcl.h>
#include <stdio.h>
#include <io.h>
#include <stdlib.h>
//---------------------------------------------------------------------------

struct FileHeader
{
  short bftype;       //��� �����
  long  temp;         //������ �����
  short rez1, rez2;   //�� ������������
  long  bfoffbits;    //�������� ������ �������� ������ �� ��������� � ������
  long  bisize;		  //������ ��������
  long  biwidth;      //������ �������� � ��������
  long  biheight;	  //������ �������� � ��������
};

class Tbmp
{
private:
  byte *buf;
  long  bfsize;
  int hight, width;
  int bfoffbits;
  int Offset();

public:
  Tbmp();
  ~Tbmp();
  void Open(char *image_1);
  void saveResult(char *image_2);
};

#endif
