#pragma once

#include <QVariant>

class ABuffer
{
public:
	enum HandleType
	{
		NoHandle,
		GLTextureHandle
	};

	virtual void release()
	{
		delete this;
	}

	virtual bool map() = 0;
	virtual uint mappedBytes() const = 0;
	virtual const uchar *bits() const = 0;
	virtual void unmap() = 0;

	virtual HandleType handleType() const = 0;
	virtual QVariant handle() const = 0;

protected:
	virtual ~ABuffer() = default;
};
