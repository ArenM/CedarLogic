#include <wx/image.h>
#include <wx/glcanvas.h>

class glImageCtx {
	int width, height;

#ifdef _WINDOWS
	wxBitmap *theBM;
	wxMemoryDC myDC;
    HGLRC hRC;
    HGLRC oldhRC;
    HDC oldDC;
#endif

public:
	glImageCtx(int width, int height, wxWindow *parent);
	wxImage getImage();
	~glImageCtx();
};
