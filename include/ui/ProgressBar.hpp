#pragma once
#include "ui/common.hpp"
#include "widgets/Widget.hpp"
#include "ui/Quantity.hpp"


namespace rack {


struct ProgressBar : Widget {
	Quantity *quantity = NULL;

	ProgressBar();
	~ProgressBar();
	void draw(NVGcontext *vg) override;
};


} // namespace rack
