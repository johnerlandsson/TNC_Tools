/*
 * GlyphSet.h
 *
 *  Created on: Aug 27, 2014
 *      Author: john
 */

#ifndef GLYPHSET_H_
#define GLYPHSET_H_

#include "Glyph.h"
#include <vector>

namespace hersh
{

class GlyphSet
{
	public:
		GlyphSet();
		virtual ~GlyphSet();
		void push_back( const Glyph g );
		void scale( const float s );
		void mirror( const bool mirror_x, const bool mirror_y );
		size_t size();
		void clear();
		typedef std::vector<Glyph>::iterator iterator;
		typedef std::vector<Glyph>::const_iterator const_iterator;
		iterator begin();
		iterator end();

	private:
		std::vector<Glyph> _glyphs;
};

} /* namespace hersh */

#endif /* GLYPHSET_H_ */
