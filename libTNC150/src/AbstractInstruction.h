/*
 * Instruction.h
 *
 *  Created on: Aug 20, 2014
 *      Author: john
 */

#ifndef INSTRUCTION_H_
#define INSTRUCTION_H_

#include <string>

namespace TNC150
{

class AbstractInstruction
{
	public:
		AbstractInstruction();
		virtual ~AbstractInstruction();
		virtual std::string toString() = 0;
		virtual unsigned int rowCount() = 0;
		virtual bool isValid() = 0;

	private:
};

} /* namespace TNC150 */

#endif /* INSTRUCTION_H_ */
