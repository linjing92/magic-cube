#pragma once
#include "MagicCube.h"

class COpenGL
{
public:
	COpenGL(void);
	~COpenGL(void);

	HDC hDC;
	HGLRC hRC;
	void Init(void);
	bool SetupPixelFormat(HDC);
	void Reshape(int width,int height);
	void Render(void);	
	
public:	
	CMagicCube magicCube;

	void setEyePos(float x,float y,float z){
		eyePos.x=x;
		eyePos.y=y;
		eyePos.z=z;
	};
	
private:
	GLPoint3f eyePos;
	
};
