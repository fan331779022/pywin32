// This file declares the IOleInPlaceObject Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIOleInPlaceObject : public PyIOleWindow
{
public:
	MAKE_PYCOM_CTOR(PyIOleInPlaceObject);
	static IOleInPlaceObject *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *InPlaceDeactivate(PyObject *self, PyObject *args);
	static PyObject *UIDeactivate(PyObject *self, PyObject *args);
	static PyObject *SetObjectRects(PyObject *self, PyObject *args);
	static PyObject *ReactivateAndUndo(PyObject *self, PyObject *args);

protected:
	PyIOleInPlaceObject(IUnknown *pdisp);
	~PyIOleInPlaceObject();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGOleInPlaceObject : public PyGOleWindow, public IOleInPlaceObject
{
protected:
	PyGOleInPlaceObject(PyObject *instance) : PyGOleWindow(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT2(PyGOleInPlaceObject, IOleInPlaceObject, IID_IOleInPlaceObject, PyGOleWindow)

	// IOleWindow
	STDMETHOD(GetWindow)(
		HWND __RPC_FAR * phwnd);

	STDMETHOD(ContextSensitiveHelp)(
		BOOL fEnterMode);

	// IOleInPlaceObject
	STDMETHOD(InPlaceDeactivate)(
		void);

	STDMETHOD(UIDeactivate)(
		void);

	STDMETHOD(SetObjectRects)(
		LPCRECT lprcPosRect,
		LPCRECT lprcClipRect);

	STDMETHOD(ReactivateAndUndo)(
		void);

};
