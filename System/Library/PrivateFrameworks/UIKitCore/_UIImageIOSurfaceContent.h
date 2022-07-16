//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIImageIOSurfaceContent
{
    struct __IOSurface *_surfaceRef;	// 40 = 0x28
}

- (_Bool)canDrawImage;	// IMP=0x000000000059e43e
- (id)description;	// IMP=0x000000000059e40e
- (unsigned long long)hash;	// IMP=0x000000000059e3fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000059e391
- (struct CGSize)sizeInPixels;	// IMP=0x000000000059e326
- (_Bool)isIOSurface;	// IMP=0x000000000059e31e
- (struct __IOSurface *)IOSurface;	// IMP=0x000000000059e30d
- (void)dealloc;	// IMP=0x000000000059e2cc
- (id)initWithScale:(double)arg1;	// IMP=0x000000000059e245
- (id)initWithIOSurface:(struct __IOSurface *)arg1 scale:(double)arg2;	// IMP=0x000000000059e0fc

@end

