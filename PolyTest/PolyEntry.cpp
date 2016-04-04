#include "PolyEntry.h"

PolyEntry::PolyEntry(PolycodeView* view)
{
	core = new POLYCODE_CORE(view, 680, 480, false, false, 0, 0, 60);
}

PolyEntry::~PolyEntry()
{
	delete core;
}

bool PolyEntry::Update()
{
	return core->updateAndRender();
}