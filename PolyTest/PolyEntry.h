#pragma once
#include "Polycode.h"
#include "polycode\view\win32\PolycodeView.h"

class PolyEntry
{
public:
	PolyEntry(PolycodeView* view);
	~PolyEntry();

	bool Update();
private:
	Core* core;

};