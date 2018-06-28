///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 30 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "pcb_layer_box_selector.h"

#include "dialog_text_properties_base.h"

///////////////////////////////////////////////////////////////////////////

DIALOG_TEXT_PROPERTIES_BASE::DIALOG_TEXT_PROPERTIES_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DIALOG_SHIM( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	
	wxBoxSizer* bMainSizer;
	bMainSizer = new wxBoxSizer( wxVERTICAL );
	
	m_MultiLineSizer = new wxBoxSizer( wxVERTICAL );
	
	wxStaticText* textLabel;
	textLabel = new wxStaticText( this, wxID_ANY, _("Text:"), wxDefaultPosition, wxDefaultSize, 0 );
	textLabel->Wrap( -1 );
	m_MultiLineSizer->Add( textLabel, 0, wxRIGHT|wxLEFT, 5 );
	
	m_MultiLineText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	m_MultiLineText->SetToolTip( _("Enter the text placed on selected layer.") );
	m_MultiLineText->SetMinSize( wxSize( 400,60 ) );
	
	m_MultiLineSizer->Add( m_MultiLineText, 1, wxBOTTOM|wxRIGHT|wxLEFT|wxEXPAND, 5 );
	
	
	bMainSizer->Add( m_MultiLineSizer, 20, wxEXPAND|wxALL, 10 );
	
	m_SingleLineSizer = new wxBoxSizer( wxHORIZONTAL );
	
	m_TextLabel = new wxStaticText( this, wxID_ANY, _("Reference:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_TextLabel->Wrap( -1 );
	m_SingleLineSizer->Add( m_TextLabel, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_SingleLineText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_SingleLineSizer->Add( m_SingleLineText, 1, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	
	bMainSizer->Add( m_SingleLineSizer, 0, wxEXPAND|wxALL, 10 );
	
	wxFlexGridSizer* fgSizerSetup;
	fgSizerSetup = new wxFlexGridSizer( 0, 5, 4, 0 );
	fgSizerSetup->AddGrowableCol( 1 );
	fgSizerSetup->AddGrowableCol( 4 );
	fgSizerSetup->SetFlexibleDirection( wxBOTH );
	fgSizerSetup->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_LayerLabel = new wxStaticText( this, wxID_ANY, _("Layer:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_LayerLabel->Wrap( -1 );
	fgSizerSetup->Add( m_LayerLabel, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5 );
	
	m_LayerSelectionCtrl = new PCB_LAYER_BOX_SELECTOR( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizerSetup->Add( m_LayerSelectionCtrl, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	
	fgSizerSetup->Add( 0, 0, 1, wxEXPAND|wxRIGHT|wxLEFT, 40 );
	
	m_Visible = new wxCheckBox( this, wxID_ANY, _("Visible"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_Visible, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5 );
	
	
	fgSizerSetup->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_SizeXLabel = new wxStaticText( this, wxID_ANY, _("Width:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_SizeXLabel->Wrap( -1 );
	fgSizerSetup->Add( m_SizeXLabel, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_SizeXCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_SizeXCtrl, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_SizeXUnits = new wxStaticText( this, wxID_ANY, _("unit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_SizeXUnits->Wrap( -1 );
	fgSizerSetup->Add( m_SizeXUnits, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_Italic = new wxCheckBox( this, wxID_ANY, _("Italic"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_Italic, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5 );
	
	
	fgSizerSetup->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_SizeYLabel = new wxStaticText( this, wxID_ANY, _("Height:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_SizeYLabel->Wrap( -1 );
	fgSizerSetup->Add( m_SizeYLabel, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_SizeYCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_SizeYCtrl, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_SizeYUnits = new wxStaticText( this, wxID_ANY, _("unit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_SizeYUnits->Wrap( -1 );
	fgSizerSetup->Add( m_SizeYUnits, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, _("Justification:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	fgSizerSetup->Add( m_staticText11, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	wxString m_JustifyChoiceChoices[] = { _("Left"), _("Center"), _("Right") };
	int m_JustifyChoiceNChoices = sizeof( m_JustifyChoiceChoices ) / sizeof( wxString );
	m_JustifyChoice = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_JustifyChoiceNChoices, m_JustifyChoiceChoices, 0 );
	m_JustifyChoice->SetSelection( 0 );
	fgSizerSetup->Add( m_JustifyChoice, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxRIGHT, 3 );
	
	m_ThicknessLabel = new wxStaticText( this, wxID_ANY, _("Thickness:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ThicknessLabel->Wrap( -1 );
	fgSizerSetup->Add( m_ThicknessLabel, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_ThicknessCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_ThicknessCtrl, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxBOTTOM, 2 );
	
	m_ThicknessUnits = new wxStaticText( this, wxID_ANY, _("unit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ThicknessUnits->Wrap( -1 );
	fgSizerSetup->Add( m_ThicknessUnits, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_OrientLabel = new wxStaticText( this, wxID_ANY, _("Orientation:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_OrientLabel->Wrap( -1 );
	fgSizerSetup->Add( m_OrientLabel, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_OrientCtrl = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_OrientCtrl->Append( _("0") );
	m_OrientCtrl->Append( _("90") );
	m_OrientCtrl->Append( _("-90") );
	m_OrientCtrl->Append( _("180") );
	fgSizerSetup->Add( m_OrientCtrl, 0, wxEXPAND, 5 );
	
	m_PositionXLabel = new wxStaticText( this, wxID_ANY, _("Position X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_PositionXLabel->Wrap( -1 );
	fgSizerSetup->Add( m_PositionXLabel, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_PositionXCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_PositionXCtrl, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_PositionXUnits = new wxStaticText( this, wxID_ANY, _("unit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_PositionXUnits->Wrap( -1 );
	fgSizerSetup->Add( m_PositionXUnits, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_Mirrored = new wxCheckBox( this, wxID_ANY, _("Mirrored"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_Mirrored, 0, wxALIGN_CENTER_VERTICAL|wxLEFT, 5 );
	
	
	fgSizerSetup->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_PositionYLabel = new wxStaticText( this, wxID_ANY, _("Position Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_PositionYLabel->Wrap( -1 );
	fgSizerSetup->Add( m_PositionYLabel, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	m_PositionYCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_PositionYCtrl, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_PositionYUnits = new wxStaticText( this, wxID_ANY, _("unit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_PositionYUnits->Wrap( -1 );
	fgSizerSetup->Add( m_PositionYUnits, 0, wxRIGHT|wxLEFT, 5 );
	
	m_KeepUpright = new wxCheckBox( this, wxID_ANY, _("Keep Upright"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSetup->Add( m_KeepUpright, 0, wxALIGN_CENTER_VERTICAL|wxLEFT, 5 );
	
	
	bMainSizer->Add( fgSizerSetup, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 10 );
	
	
	bMainSizer->Add( 0, 0, 1, wxEXPAND|wxTOP, 5 );
	
	m_staticline = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bMainSizer->Add( m_staticline, 0, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 10 );
	
	wxBoxSizer* lowerSizer;
	lowerSizer = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	m_statusLine1 = new wxStaticText( this, wxID_ANY, _("Status line 1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_statusLine1->Wrap( -1 );
	m_statusLine1->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	
	bSizer7->Add( m_statusLine1, 0, wxBOTTOM|wxRIGHT|wxLEFT, 2 );
	
	m_statusLine2 = new wxStaticText( this, wxID_ANY, _("Status line 2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_statusLine2->Wrap( -1 );
	m_statusLine2->SetFont( wxFont( 11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	
	bSizer7->Add( m_statusLine2, 0, wxRIGHT|wxLEFT, 2 );
	
	
	lowerSizer->Add( bSizer7, 0, wxEXPAND|wxTOP|wxLEFT, 8 );
	
	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( this, wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizerCancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer->AddButton( m_sdbSizerCancel );
	m_sdbSizer->Realize();
	
	lowerSizer->Add( m_sdbSizer, 1, wxEXPAND|wxALL, 5 );
	
	
	bMainSizer->Add( lowerSizer, 0, wxALIGN_BOTTOM|wxEXPAND|wxLEFT, 5 );
	
	
	this->SetSizer( bMainSizer );
	this->Layout();
	bMainSizer->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnInitDlg ) );
	m_SingleLineText->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_SizeXCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_SizeYCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_ThicknessCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_OrientCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_PositionXCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_PositionYCtrl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_sdbSizerOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
}

DIALOG_TEXT_PROPERTIES_BASE::~DIALOG_TEXT_PROPERTIES_BASE()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnInitDlg ) );
	m_SingleLineText->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_SizeXCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_SizeYCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_ThicknessCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_OrientCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_PositionXCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_PositionYCtrl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	m_sdbSizerOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_TEXT_PROPERTIES_BASE::OnOkClick ), NULL, this );
	
}