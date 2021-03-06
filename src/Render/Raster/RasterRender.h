#pragma once

#include "../ARender.h"

class ASprite;
class RasterRenderPrivate;

class RasterRender :public ARender
{
public:
	explicit RasterRender(QObject *parent = 0);
	virtual void setup() override;

private:
	Q_DECLARE_PRIVATE(RasterRender);

public slots:
	virtual ASprite *getSprite() override;
	virtual QObject *getHandle() override;
	virtual void resize(QSize size) override;
	virtual QSize getActualSize() override;
	virtual QSize getBufferSize() override;
	virtual void draw(QRect rect = QRect()) override;
};
