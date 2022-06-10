//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        char p1,p2,p3,p4,p5,p6,p7,p8,p9;
        //p1...p9 areas in game
        char who;
        //who's move now
        void check()
        {
                if ((p1==p2 && p2==p3 && p1!='n') ||
                    (p4==p5 && p5==p6 && p4!='n') ||
                    (p7==p8 && p8==p9 && p7!='n') ||
                    (p1==p4 && p4==p7 && p1!='n') ||
                    (p2==p5 && p5==p8 && p2!='n') ||
                    (p3==p6 && p6==p9 && p3!='n') ||
                    (p1==p5 && p5==p9 && p1!='n') ||
                    (p3==p5 && p5==p7 && p3!='n') )
                {
                        char* w;

                        if (who=='x')
                        w= "Player O wins!";
                        else
                        w="Player X wins!";

                        Application->MessageBox(w,"End Game", MB_OK);

                        Form1->ip1->Enabled=false;
                        Form1->ip2->Enabled=false;
                        Form1->ip3->Enabled=false;
                        Form1->ip4->Enabled=false;
                        Form1->ip5->Enabled=false;
                        Form1->ip6->Enabled=false;
                        Form1->ip7->Enabled=false;
                        Form1->ip8->Enabled=false;
                        Form1->ip9->Enabled=false;

                }


        };

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)



{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
        ip1->Picture->LoadFromFile("img/n.bmp");
        ip2->Picture->LoadFromFile("img/n.bmp");
        ip3->Picture->LoadFromFile("img/n.bmp");
        ip4->Picture->LoadFromFile("img/n.bmp");
        ip5->Picture->LoadFromFile("img/n.bmp");
        ip6->Picture->LoadFromFile("img/n.bmp");
        ip7->Picture->LoadFromFile("img/n.bmp");
        ip8->Picture->LoadFromFile("img/n.bmp");
        ip9->Picture->LoadFromFile("img/n.bmp");
        ipmini->Picture->LoadFromFile("img/xmini.bmp");

        p1='n' ;       p2='n' ;       p3='n' ;
        p4='n' ;       p5='n' ;       p6='n' ;
        p7='n' ;       p8='n' ;       p9='n' ;
        who='x';

        ip1->Enabled=true;  ip2->Enabled=true; ip3->Enabled=true;
        ip4->Enabled=true;  ip5->Enabled=true; ip6->Enabled=true;
        ip7->Enabled=true;  ip8->Enabled=true; ip9->Enabled=true;
        //unlocks all fields again (in case of restarting the game)
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip1Click(TObject *Sender)
{
        if (p1=='n')
        {
              if (who=='x')
              {
                        ip1->Picture->LoadFromFile("img/x.bmp");
                        p1='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip1->Picture->LoadFromFile("img/o.bmp");
                        p1='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }
              ip1->Enabled=false;
              check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip2Click(TObject *Sender)
{
  if (p2=='n')
        {
              if (who=='x')
              {
                        ip2->Picture->LoadFromFile("img/x.bmp");
                        p2='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip2->Picture->LoadFromFile("img/o.bmp");
                        p2='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }

              ip2->Enabled=false;
              check();
        }      
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip3Click(TObject *Sender)
{
   if (p3=='n')
        {
              if (who=='x')
              {
                        ip3->Picture->LoadFromFile("img/x.bmp");
                        p3='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip3->Picture->LoadFromFile("img/o.bmp");
                        p3='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }
              ip3->Enabled=false;
              check();
        }     
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip4Click(TObject *Sender)
{
      if (p4=='n')
        {
              if (who=='x')
              {
                        ip4->Picture->LoadFromFile("img/x.bmp");
                        p4='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip4->Picture->LoadFromFile("img/o.bmp");
                        p4='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }
              ip4->Enabled=false;
              check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip5Click(TObject *Sender)
{
     if (p5=='n')
        {
              if (who=='x')
              {
                        ip5->Picture->LoadFromFile("img/x.bmp");
                        p5='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip5->Picture->LoadFromFile("img/o.bmp");
                        p5='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }
              ip5->Enabled=false;
              check();
        }   
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip6Click(TObject *Sender)
{
      if (p6=='n')
        {
              if (who=='x')
              {
                        ip6->Picture->LoadFromFile("img/x.bmp");
                        p6='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip6->Picture->LoadFromFile("img/o.bmp");
                        p6='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }
              ip6->Enabled=false;
              check();
        }  
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip7Click(TObject *Sender)
{
      if (p7=='n')
        {
              if (who=='x')
              {
                        ip7->Picture->LoadFromFile("img/x.bmp");
                        p7='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip7->Picture->LoadFromFile("img/o.bmp");
                        p7='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }
              ip7->Enabled=false;
              check();
        }  
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip8Click(TObject *Sender)
{
       if (p8=='n')
        {
              if (who=='x')
              {
                        ip8->Picture->LoadFromFile("img/x.bmp");
                        p8='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip8->Picture->LoadFromFile("img/o.bmp");
                        p8='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }
              ip8->Enabled=false;
              check();
        } 
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ip9Click(TObject *Sender)
{
         if (p9=='n')
        {
              if (who=='x')
              {
                        ip9->Picture->LoadFromFile("img/x.bmp");
                        p9='x';
                        who='o';
                        ipmini->Picture->LoadFromFile("img/omini.bmp");
              }
              else
              {
                        ip9->Picture->LoadFromFile("img/o.bmp");
                        p9='o';
                        who='x';
                        ipmini->Picture->LoadFromFile("img/xmini.bmp");
              }
              ip9->Enabled=false;
              check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CloseButtonClick(TObject *Sender)
{
        Application->Terminate();
}
//---------------------------------------------------------------------------
