//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol IPAQuadGeometry;

__attribute__((visibility("hidden")))
@interface IPAPerspectiveTransform
{
    struct Matrix4d _projectionTransform;	// 8 = 0x8
    struct Matrix4d _viewingTransform;	// 136 = 0x88
    id <IPAQuadGeometry> _intrinsicGeometry;	// 264 = 0x108
    _Bool _isInverse;	// 272 = 0x110
}

- (id).cxx_construct;	// IMP=0x000000000001dffe
- (void).cxx_destruct;	// IMP=0x000000000001dfeb
- (_Bool)canAlignToPixelsExactly;	// IMP=0x000000000001dfe3
- (id)intrinsicGeometry;	// IMP=0x000000000001dfce
- (id)inverseTransform;	// IMP=0x000000000001dde8
- (struct Vector2d)mapVector:(struct Vector2d)arg1;	// IMP=0x000000000001d9e4
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const struct Matrix4d *)arg3 viewingTransform:(const struct Matrix4d *)arg4;	// IMP=0x000000000001d892

@end

