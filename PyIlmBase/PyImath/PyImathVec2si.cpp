///////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 1998-2011, Industrial Light & Magic, a division of Lucas
// Digital Ltd. LLC
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// *       Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// *       Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// *       Neither the name of Industrial Light & Magic nor the names of
// its contributors may be used to endorse or promote products derived
// from this software without specific prior written permission. 
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
///////////////////////////////////////////////////////////////////////////


#include "PyImathVec2Impl.h"
#include "PyImathExport.h"

namespace PyImath {
template <> const char *PyImath::V2sArray::name() { return "V2sArray"; }
template <> const char *PyImath::V2iArray::name() { return "V2iArray"; }

using namespace boost::python;
using namespace Imath;

template<> const char *Vec2Name<short>::value  = "V2s";
template<> const char *Vec2Name<int>::value    = "V2i";

template PYIMATH_EXPORT class_<Imath::Vec2<short> > register_Vec2<short>();
template PYIMATH_EXPORT class_<Imath::Vec2<int> > register_Vec2<int>();
		 
template PYIMATH_EXPORT class_<FixedArray<Imath::Vec2<short> > > register_Vec2Array<short>();
template PYIMATH_EXPORT class_<FixedArray<Imath::Vec2<int> > > register_Vec2Array<int>();

template<> Imath::Vec2<short> PYIMATH_EXPORT FixedArrayDefaultValue<Imath::Vec2<short> >::value() { return Imath::Vec2<short>(0,0); }
template<> Imath::Vec2<int> PYIMATH_EXPORT FixedArrayDefaultValue<Imath::Vec2<int> >::value() { return Imath::Vec2<int>(0,0); }
}
