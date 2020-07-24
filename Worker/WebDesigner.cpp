#include "WebDesigner.h"
void WebDesigner::AddUI_templayte(string UI_template)
{
	if (!UI_template.empty())
		this->UI_templates.push_back(UI_template);
}

void WebDesigner::AddUX_templayte(string UX_template)
{
	if (!UX_template.empty())
		this->UX_templates.push_back(UX_template);
}

void WebDesigner::AddFigmaWork(string figmaWork)
{
	if (!figmaWork.empty())
		this->figmaWorks.push_back(figmaWork);
}