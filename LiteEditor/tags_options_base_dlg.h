//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef TAGS_OPTIONS_BASE_DLG_BASE_CLASSES_H
#define TAGS_OPTIONS_BASE_DLG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/treebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/slider.h>
#include <wx/notebook.h>
#include <wx/bannerwindow.h>
#include <wx/button.h>
#include <wx/hyperlink.h>
#include <wx/choice.h>
#include <wx/arrstr.h>

class TagsOptionsBaseDlg : public wxDialog
{
protected:
    wxBoxSizer* mainSizer;
    wxTreebook* m_treebook2;
    wxPanel* m_paneDisplayAndBehavior;
    wxBoxSizer* bSizer19;
    wxStaticBoxSizer* sbSizer2;
    wxFlexGridSizer* flexGridSizer12;
    wxStaticText* m_staticText14;
    wxTextCtrl* m_spinCtrlNumberOfCCItems;
    wxCheckBox* m_checkBoxEnableCaseSensitiveCompletion;
    wxCheckBox* m_checkDisplayTypeInfo;
    wxCheckBox* m_checkDisplayFunctionTip;
    wxCheckBox* m_checkCppKeywordAssist;
    wxCheckBox* m_checkBoxKeepFunctionSignature;
    wxStaticBoxSizer* sbSizer15;
    wxGridSizer* gSizer2;
    wxCheckBox* m_checkBoxretagWorkspaceOnStartup;
    wxCheckBox* m_checkDisableParseOnSave;
    wxCheckBox* m_checkBoxDeepUsingNamespaceResolving;
    wxPanel* m_paneColouring;
    wxBoxSizer* bSizer16;
    wxStaticBoxSizer* sbSizer4;
    wxBoxSizer* bSizer11;
    wxStaticText* m_staticText72;
    wxTextCtrl* m_spinCtrlMaxItemToColour;
    wxCheckBox* m_checkColourLocalVars;
    wxCheckBox* m_checkBoxColourMacroBlocks;
    wxCheckBox* m_checkColourProjTags;
    wxFlexGridSizer* fgSizer3;
    wxCheckBox* m_checkBoxClass;
    wxCheckBox* m_checkBoxStruct;
    wxCheckBox* m_checkBoxFunction;
    wxCheckBox* m_checkBoxEnum;
    wxCheckBox* m_checkBoxEnumerator;
    wxCheckBox* m_checkBoxUnion;
    wxCheckBox* m_checkBoxPrototype;
    wxCheckBox* m_checkBoxTypedef;
    wxCheckBox* m_checkBoxMacro;
    wxCheckBox* m_checkBoxNamespace;
    wxCheckBox* m_checkBoxMember;
    wxCheckBox* m_checkBoxVariable;
    wxPanel* m_paneTriggering;
    wxBoxSizer* bSizer17;
    wxStaticBoxSizer* sbSizer7;
    wxFlexGridSizer* fgSizer4;
    wxCheckBox* m_checkWordAssist;
    wxStaticText* m_staticTextMinWordLen;
    wxSlider* m_sliderMinWordLen;
    wxCheckBox* m_checkAutoInsertSingleChoice;
    wxPanel* m_panelCtags;
    wxPanel* m_panelCtagsSearchPaths;
    wxBoxSizer* bSizer7;
    wxNotebook* m_notebook36;
    wxPanel* m_panel38;
    wxBoxSizer* boxSizer30;
    wxBannerWindow* m_banner34;
    wxBoxSizer* bSizer9;
    wxTextCtrl* m_textCtrlCtagsSearchPaths;
    wxBoxSizer* bSizer8;
    wxButton* m_buttonAddSearchPath;
    wxPanel* m_panel40;
    wxBoxSizer* boxSizer42;
    wxBannerWindow* m_banner44;
    wxBoxSizer* bSizer91;
    wxTextCtrl* m_textCtrlCtagsExcludePaths;
    wxBoxSizer* bSizer81;
    wxButton* m_buttonAddExcludePath;
    wxPanel* m_panelCtagsAdvanced;
    wxBoxSizer* bSizer6;
    wxFlexGridSizer* fgSizer2;
    wxStaticText* m_staticText3;
    wxTextCtrl* m_textFileSpec;
    wxBoxSizer* bSizer14;
    wxStaticText* m_staticText92;
    wxBoxSizer* bSizer15;
    wxTextCtrl* m_textCtrlFilesList;
    wxButton* m_buttonParse;
    wxNotebook* m_notebook2;
    wxPanel* m_panelClangGeneral;
    wxBoxSizer* bSizer5;
    wxTextCtrl* m_textPrep;
    wxStaticBoxSizer* sbSizer52;
    wxStaticText* m_staticText9;
    wxHyperlinkCtrl* m_hyperlink1;
    wxBoxSizer* bSizer131;
    wxPanel* m_panel5;
    wxBoxSizer* bSizer13;
    wxStaticBoxSizer* sbSizer521;
    wxStaticText* m_staticText91;
    wxTextCtrl* m_textTypes;
    wxPanel* m_panelClang;
    wxBoxSizer* bSizer18;
    wxCheckBox* m_checkBoxEnableClangCC;
    wxNotebook* m_notebookClang;
    wxPanel* m_panel3;
    wxBoxSizer* bSizer20;
    wxFlexGridSizer* fgSizer5;
    wxCheckBox* m_checkBoxClangFirst;
    wxStaticText* m_staticText13;
    wxPanel* m_panel8;
    wxBoxSizer* bSizer24;
    wxTextCtrl* m_textCtrlClangSearchPaths;
    wxButton* m_buttonSuggest;
    wxPanel* m_panel4;
    wxBoxSizer* bSizer21;
    wxFlexGridSizer* fgSizerClangCache;
    wxStaticText* m_staticText101;
    wxButton* m_buttonClearCache;
    wxStaticText* m_staticText12;
    wxChoice* m_choiceCachePolicy;
    wxBoxSizer* bSizer3;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnColourWorkspaceUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAutoShowWordAssitUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAddSearchPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddExcludePath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnParse(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFileSelectedUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClangCCEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnSuggestSearchPaths(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearClangCache(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearClangCacheUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }

public:
    TagsOptionsBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Tags Options"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~TagsOptionsBaseDlg();
};

#endif
