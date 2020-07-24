#include "GraphicsDesigner.h"

void GraphicsDesigner::AddLogo(string logo) 
{
	if (!logo.empty())
		this->logoPaths.push_back(logo);
}

void GraphicsDesigner::AddBanner(string banner)
{
	if (!banner.empty())
		this->bannersPaths.push_back(banner);
}

void GraphicsDesigner::AddLayout(string layout) 
{
	if (!layout.empty())
		this->layouts.push_back(layout);
}