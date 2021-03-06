//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/NSCopying-Protocol.h>

@interface _TVSUIOffscreenRendererFormat : NSObject <NSCopying>
{
    _Bool _opaque;	// 8 = 0x8
    _Bool _extendedRange;	// 9 = 0x9
    double _scale;	// 16 = 0x10
}

+ (id)formatForTraitCollection:(id)arg1;	// IMP=0x0000000000003968
@property(nonatomic, getter=isExtendedRange) _Bool extendedRange; // @synthesize extendedRange=_extendedRange;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000039e0

@end

