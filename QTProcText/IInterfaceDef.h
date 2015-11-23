#pragma once

class IXMLFileParser
{
	virtual void  ParseXML2Widget(const char* p) = 0;
	virtual char* ParseWidget2XML() = 0;
};