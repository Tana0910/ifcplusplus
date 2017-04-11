/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcFlowDirectionEnum.h"

// TYPE IfcFlowDirectionEnum = ENUMERATION OF	(SOURCE	,SINK	,SOURCEANDSINK	,NOTDEFINED);
IfcFlowDirectionEnum::IfcFlowDirectionEnum() {}
IfcFlowDirectionEnum::~IfcFlowDirectionEnum() {}
shared_ptr<IfcPPObject> IfcFlowDirectionEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcFlowDirectionEnum> copy_self( new IfcFlowDirectionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFlowDirectionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFLOWDIRECTIONENUM("; }
	if( m_enum == ENUM_SOURCE )
	{
		stream << ".SOURCE.";
	}
	else if( m_enum == ENUM_SINK )
	{
		stream << ".SINK.";
	}
	else if( m_enum == ENUM_SOURCEANDSINK )
	{
		stream << ".SOURCEANDSINK.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcFlowDirectionEnum> IfcFlowDirectionEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFlowDirectionEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFlowDirectionEnum>(); }
	shared_ptr<IfcFlowDirectionEnum> type_object( new IfcFlowDirectionEnum() );
	if( boost::iequals( arg, L".SOURCE." ) )
	{
		type_object->m_enum = IfcFlowDirectionEnum::ENUM_SOURCE;
	}
	else if( boost::iequals( arg, L".SINK." ) )
	{
		type_object->m_enum = IfcFlowDirectionEnum::ENUM_SINK;
	}
	else if( boost::iequals( arg, L".SOURCEANDSINK." ) )
	{
		type_object->m_enum = IfcFlowDirectionEnum::ENUM_SOURCEANDSINK;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFlowDirectionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}