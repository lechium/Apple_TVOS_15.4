//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXTilingCoordinateSpaceConverter : NSObject
{
    _Bool _shouldCache;	// 8 = 0x8
}

+ (_Bool)_canConvertBetweenCoordinateSpace:(id)arg1 andCoordinateSpace:(id)arg2;	// IMP=0x00000000004a7cf0
+ (_Bool)canConvertBetweenCoordinateSpaceIdentifier:(void *)arg1 andCoordinateSpaceIdentifier:(void *)arg2;	// IMP=0x00000000004a7cde
+ (id)defaultConverter;	// IMP=0x00000000004a7cae
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
- (void)invalidateCache;	// IMP=0x00000000004a7c96
- (struct CGAffineTransform)_transformOfCoordinateSpace:(id)arg1 relativeToCoordinateSpace:(id)arg2;	// IMP=0x00000000004a7983
- (struct CGAffineTransform)_transformOfCoordinateSpaceIdentifier:(void *)arg1 relativeToCoordinateSpaceIdentifier:(void *)arg2;	// IMP=0x00000000004a7964
- (struct PXTileGeometry)convertTileGeometry:(struct PXTileGeometry)arg1 toCoordinateSpaceIdentifier:(void *)arg2;	// IMP=0x00000000004a789a
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpaceIdentifier:(void *)arg2 toCoordinateSpaceIdentifier:(void *)arg3;	// IMP=0x00000000004a7800
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpaceIdentifier:(void *)arg2 toCoordinateSpaceIdentifier:(void *)arg3;	// IMP=0x00000000004a779d

@end
