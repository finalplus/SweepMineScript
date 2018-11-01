#pragma once
#include "Structure.h"

#define Window_ClassName "Minesweeper"
#define Window_WndName "Minesweeper"
class AutoSweepMine
{
public:
	AutoSweepMine();
	~AutoSweepMine();
	// Get���ھ��
	HWND GetWindowHwnd();
	// Read ɨ���ڴ�����
	void ReadMemry();
	// Get���ڽ���rectangle
	void GetWindowArea();
	// ��ȡ����ͼ��
	void CutWindowBmp();
	// �ָ��ͼ��
	void SplitWindowBmp();
	//// Get ���ڷָ��������
	//void GetCountorsRect();
	// ģ�������
	void MouseClicked(int x,int y);
	// �Զ�������ɨ��
	void AutoMouseClicked();
	// �Զ�ɨ��
	void SweepMine();
private:
	sSweepMineWindow m_windowHandle;
	sSweepMineMemery m_memery;
	sWindowArea m_windowArea;
	sImageProcess m_imageProess;
};

