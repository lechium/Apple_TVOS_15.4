//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>

@class CIFilterShape;

@interface CISampler : NSObject <NSCopying>
{
    void *_priv;	// 8 = 0x8
}

+ (id)samplerWithImage:(id)arg1 options:(id)arg2;	// IMP=0x000000000014c393
+ (id)samplerWithImage:(id)arg1 keysAndValues:(id)arg2;	// IMP=0x000000000014c2bb
+ (id)samplerWithImage:(id)arg1;	// IMP=0x000000000014c284
- (id)debugDescription;	// IMP=0x000000000014c583
- (id)description;	// IMP=0x000000000014c4b1
- (const void *)colorSpace;	// IMP=0x000000000014c49f
- (id)wrapMode;	// IMP=0x000000000014c497
@property(readonly) struct CGRect extent;
- (id)opaqueShape;	// IMP=0x000000000014c441
@property(readonly) CIFilterShape *definition;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014c3d9
- (void *)_internalRepresentation;	// IMP=0x000000000014c3cf
- (id)initWithImage:(id)arg1 options:(id)arg2;	// IMP=0x000000000014bc01
- (id)_initWithImage:(id)arg1 key0:(id)arg2 vargs:(struct __va_list_tag [1])arg3;	// IMP=0x000000000014b9cd
- (id)initWithImage:(id)arg1 keysAndValues:(id)arg2;	// IMP=0x000000000014b933
- (id)initWithImage:(id)arg1;	// IMP=0x000000000014b91f
- (id)init;	// IMP=0x000000000014b90b
- (void)dealloc;	// IMP=0x000000000014b830

@end
