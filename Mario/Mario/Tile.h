#pragma once
#include "Obj.h"
class CTile :
	public CObj
{
public:
	CTile();
	virtual ~CTile();

	// CObj��(��) ���� ��ӵ�
	virtual void Initialize() override;
	virtual int Update() override;
	virtual void LateUpdate() override;
	virtual void Render(HDC hDC) override;
	virtual void Release() override;
};