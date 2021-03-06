/////////////////////////////////////////////////////////////////////////////
// This file is part of the Journey MMORPG client                           //
// Copyright � 2015 SYJourney                                               //
//                                                                          //
// This program is free software: you can redistribute it and/or modify     //
// it under the terms of the GNU Affero General Public License as           //
// published by the Free Software Foundation, either version 3 of the       //
// License, or (at your option) any later version.                          //
//                                                                          //
// This program is distributed in the hope that it will be useful,          //
// but WITHOUT ANY WARRANTY; without even the implied warranty of           //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
// GNU Affero General Public License for more details.                      //
//                                                                          //
// You should have received a copy of the GNU Affero General Public License //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.    //
//////////////////////////////////////////////////////////////////////////////
#pragma once
#include "stdfax.h"

using namespace std;

namespace program
{
	enum dwfonts : char
	{
		DWF_LEFT,
		DWF_CENTER,
		DWF_RIGHT,
		DWF_LARGE,
		dwf_small_r,
		dwf_small_c
	};

	class fontcache
	{
	public:
		fontcache() {}
		~fontcache();
		void init(IDWriteFactory*);
		IDWriteTextFormat* getfont(dwfonts);
	private:
		unique_ptr<IDWriteFactory> fontfactory;
		map<dwfonts, IDWriteTextFormat*> fonts;
	};
}

