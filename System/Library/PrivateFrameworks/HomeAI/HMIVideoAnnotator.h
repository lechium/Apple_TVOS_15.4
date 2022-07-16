//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;

@interface HMIVideoAnnotator : HMFObject <HMFLogging>
{
    struct __CVBuffer *_pixelBuffer;	// 8 = 0x8
    struct CGContext *_context;	// 16 = 0x10
    struct CGColorSpace *_colorSpace;	// 24 = 0x18
    struct __CTFont *_font;	// 32 = 0x20
    struct CGSize _size;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000006c62e
- (void)drawPolygonWithNormalizedPoints:(id)arg1;	// IMP=0x000000000006c3c5
- (void)drawBoundingBox:(struct CGRect)arg1 lineWidth:(double)arg2 text:(id)arg3 color:(const double *)arg4;	// IMP=0x000000000006c1e2
- (void)drawTextHeaderBar:(id)arg1;	// IMP=0x000000000006c0c7
- (void)drawRect:(struct CGRect)arg1 width:(double)arg2 color:(const double *)arg3;	// IMP=0x000000000006c060
- (void)drawText:(id)arg1 at:(struct CGPoint)arg2 color:(const double *)arg3;	// IMP=0x000000000006bf0a
- (void)draw:(CDUnknownBlockType)arg1;	// IMP=0x000000000006bd7e
- (void)dealloc;	// IMP=0x000000000006bd0d
- (const struct __CTFont *)_createFontWithSize:(double)arg1;	// IMP=0x000000000006bba7
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 fontSize:(double)arg2;	// IMP=0x000000000006baff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

