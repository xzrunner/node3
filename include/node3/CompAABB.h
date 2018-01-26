#pragma once

#include "node3/NodeComponent.h"
#include "node3/AABB.h"

namespace n3
{

class CompAABB : public NodeComponent
{
public:
	virtual const char* Type() const override { return TYPE_NAME; }

	virtual bool StoreToJson(rapidjson::Value& val,
		rapidjson::MemoryPoolAllocator<>& alloc) const override;
	virtual void LoadFromJson(const rapidjson::Value& val) override;

	void SetAABB(const AABB& aabb) { m_aabb = aabb; }
	const AABB& GetAABB() const { return m_aabb; }

	static const char* const TYPE_NAME;

private:
	AABB m_aabb;

}; // CompAABB

}