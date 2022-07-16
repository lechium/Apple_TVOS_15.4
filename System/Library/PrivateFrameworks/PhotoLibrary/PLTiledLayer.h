//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <PhotoLibrary/PLTileableLayer-Protocol.h>

@class NSString;

@interface PLTiledLayer : CALayer <PLTileableLayer>
{
    struct CGSize _jpegImageSize;	// 8 = 0x8
}

@property(readonly, nonatomic) struct CGSize jpegImageSize; // @synthesize jpegImageSize=_jpegImageSize;
- (void)flushCache;	// IMP=0x000000000002bc34
- (void)setVisibleRectangle:(struct CGRect)arg1 zoomScale:(double)arg2;	// IMP=0x000000000002bc2e
- (id)initWithJPEGData:(id)arg1 placeholderImage:(struct CGImage *)arg2 screenSize:(struct CGSize)arg3;	// IMP=0x000000000002bbff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
