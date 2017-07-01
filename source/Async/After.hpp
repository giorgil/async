//
//  After.hpp
//  File file is part of the "Async" project and released under the MIT License.
//
//  Created by Samuel Williams on 29/6/2017.
//  Copyright, 2017, by Samuel Williams. All rights reserved.
//

#pragma once

#include "Reactor.hpp"

namespace Async
{
	class After
	{
	public:
		After(Interval duration, Reactor & reactor);
		virtual ~After();
		
		After(const After &) = delete;
		After & operator=(const After &) = delete;
		
		void wait();
	private:
		Interval _duration;
		Reactor & _reactor;
	};
}
