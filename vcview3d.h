#if !defined(AFX_VCVIEW3D_H__8C67852B_9029_4AEF_A58B_79D6DADA3F3E__INCLUDED_)
#define AFX_VCVIEW3D_H__8C67852B_9029_4AEF_A58B_79D6DADA3F3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CVcView3d wrapper class

class CVcView3d : public COleDispatchDriver
{
public:
	CVcView3d() {}		// Calls COleDispatchDriver default constructor
	CVcView3d(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcView3d(const CVcView3d& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	float GetRotation();
	void SetRotation(float newValue);
	float GetElevation();
	void SetElevation(float newValue);
	void Set(float Rotation, float Elevation);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCVIEW3D_H__8C67852B_9029_4AEF_A58B_79D6DADA3F3E__INCLUDED_)
