/*
 * Copyright (c) 2023 Leia Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 * and associated documentation files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
 * BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/// @ref gtx_polar_coordinates
/// @file glm/gtx/polar_coordinates.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_polar_coordinates GLM_GTX_polar_coordinates
/// @ingroup gtx
///
/// Include <glm/gtx/polar_coordinates.hpp> to use the features of this extension.
///
/// Conversion from Euclidean space to polar space and revert.

#pragma once

// Dependency:
#include "../glm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_polar_coordinates is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_polar_coordinates extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_polar_coordinates
	/// @{

	/// Convert Euclidean to Polar coordinates, x is the latitude, y the longitude and z the xz distance.
	///
	/// @see gtx_polar_coordinates
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> polar(
		vec<3, T, Q> const& euclidean);

	/// Convert Polar to Euclidean coordinates.
	///
	/// @see gtx_polar_coordinates
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> euclidean(
		vec<2, T, Q> const& polar);

	/// @}
}//namespace glm

#include "polar_coordinates.inl"
