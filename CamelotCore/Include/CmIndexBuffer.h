#pragma once

#include "CmPrerequisites.h"
#include "CmHardwareBuffer.h"
#include "CmCoreObject.h"

namespace BansheeEngine 
{
	/**
	 * @brief	Hardware buffer that hold indices that reference vertices in a vertex buffer.
	 */
    class CM_EXPORT IndexBuffer : public HardwareBuffer, public CoreObject
    {
	public:
		/**
		 * @brief	Type of the indices used, used for determining size.
		 */
		enum IndexType 
		{
			IT_16BIT,
			IT_32BIT
		};

		~IndexBuffer();

		/**
		 * @brief	Returns the type of indices stored.
		 */
		IndexType getType() const { return mIndexType; }

		/**
		 * @brief	Returns the number of indices this buffer can hold.
		 */
		UINT32 getNumIndexes() const { return mNumIndexes; }

		/**
		 * @brief	Returns the size of a single index in bytes.
		 */
		UINT32 getIndexSize() const { return mIndexSize; }

	protected:
		IndexBuffer(IndexType idxType, UINT32 numIndexes, GpuBufferUsage usage, bool useSystemMemory);

	protected:
		IndexType mIndexType;
		UINT32 mNumIndexes;
		UINT32 mIndexSize;
    };
}