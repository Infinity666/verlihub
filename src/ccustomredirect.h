/*
	Copyright (C) 2003-2005 Daniel Muller, dan at verliba dot cz
	Copyright (C) 2006-2012 Verlihub Team, devs at verlihub-project dot org
	Copyright (C) 2013-2014 RoLex, webmaster at feardc dot net

	Verlihub is free software; You can redistribute it
	and modify it under the terms of the GNU General
	Public License as published by the Free Software
	Foundation, either version 3 of the license, or at
	your option any later version.

	Verlihub is distributed in the hope that it will be
	useful, but without any warranty, without even the
	implied warranty of merchantability or fitness for
	a particular purpose. See the GNU General Public
	License for more details.

	Please see http://www.gnu.org/licenses/ for a copy
	of the GNU General Public License.
*/

#ifndef NDIRECTCONNECTCREDIRECT_H
#define NDIRECTCONNECTCREDIRECT_H
#include <sstream>
#include <string>

using namespace std;

namespace nVerliHub {
	namespace nEnums {
		enum {
			eKick = 0x000001,
			eUserLimit = 0x000002,
			eShareLimit = 0x00004,
			eTag = 0x000008,
			eWrongPasswd = 0x000010,
			eInvalidKey = 0x000020,
			eHubBusy = 0x000040,
			eReconnect = 0x000080,
			eBadNick = 0x000100
		};
	};

	namespace nTables {

		/**
		* cRedirect class represent a redirect.
		*
		* @author Simoncelli Davide
		* @version 1.0
		*/

		class cRedirect
		{
			public:
				/**
				* Class constructor
				*/
				cRedirect();

				/**
				* Class destructor
				*/
				virtual ~cRedirect();

				/**
				* This function is called when cRedirect object is created. Here it is not useful so the body is empty
				*/
				virtual void OnLoad() {};

				/**
				* Redefine << operator to print a redirect and show its status
				* @param os The stream where to store the description.
				* @param tr The cRedirect object that describes the redirect
				* @return The stream
				*/
				friend ostream &operator << (ostream &, cRedirect &);

				// The flag to determinate the kind of the redirect
				int mFlag;

				// redirect counter
				int mCount;

				// The target
				string mAddress;

				// Enable or disable redirect
				int mEnable;
		};
	}; // namespace nTables
}; // namespace nVerliHub

#endif
