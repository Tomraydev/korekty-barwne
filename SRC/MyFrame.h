#pragma once
#include "GUI.h"
#include <wx/dcbuffer.h>
#include <wx/filedlg.h>

class MyFrame : public GUI {
protected:
	// Event handlers (copy from GUI.h and override)
	void m_fileOpenOnMenuSelection(wxCommandEvent& event);
	void m_fileSaveAsOnMenuSelection(wxCommandEvent& event);
	void GUIOnUpdateUI(wxUpdateUIEvent& event);
	void m_ViewStatusBarOnMenuSelection(wxCommandEvent& event);
	void m_scrolledWindow1OnLeftDClick(wxMouseEvent& event);
	void m_buttonHistogramOnButtonClick(wxCommandEvent& event);
	
	void Repaint(void); // Repaint the Old and New image.
	void generate_hist_img(wxImage &img,wxBitmap &bitmap, int count[256], int r, int g, int b);
	void paintHistograms(void);
	void calculateHistograms(wxImage &img, int rgb_count[256], int r_count[256], int g_count[256], int b_count[256]);
public:
	MyFrame(wxWindow* parent);
	wxImage imgOld;
	wxImage imgNew;
	wxBitmap bitMapOld;
	wxBitmap bitMapNew;
	wxColor pickedColor;

	//Histograms
	bool histogramsGenerated = false;
	wxImage imgHistogramRGB;
	wxImage imgHistogramR;
	wxImage imgHistogramG;
	wxImage imgHistogramB;
	wxBitmap bitMapHistogramRGB;
	wxBitmap bitMapHistogramR;
	wxBitmap bitMapHistogramG;
	wxBitmap bitMapHistogramB;

	wxImage imgHistogramRGB_n;
	wxImage imgHistogramR_n;
	wxImage imgHistogramG_n;
	wxImage imgHistogramB_n;
	wxBitmap bitMapHistogramRGB_n;
	wxBitmap bitMapHistogramR_n;
	wxBitmap bitMapHistogramG_n;
	wxBitmap bitMapHistogramB_n;
};