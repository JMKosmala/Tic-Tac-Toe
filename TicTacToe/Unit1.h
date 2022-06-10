//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *NewButton;
        TButton *CloseButton;
        TImage *ip1;
        TImage *ip2;
        TImage *ip3;
        TImage *ip4;
        TImage *ip5;
        TImage *ip6;
        TImage *ip7;
        TImage *ip8;
        TImage *ip9;
        TLabel *Label1;
        TImage *ipmini;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ip1Click(TObject *Sender);
        void __fastcall ip2Click(TObject *Sender);
        void __fastcall ip3Click(TObject *Sender);
        void __fastcall ip4Click(TObject *Sender);
        void __fastcall ip5Click(TObject *Sender);
        void __fastcall ip6Click(TObject *Sender);
        void __fastcall ip7Click(TObject *Sender);
        void __fastcall ip8Click(TObject *Sender);
        void __fastcall ip9Click(TObject *Sender);
        void __fastcall CloseButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
