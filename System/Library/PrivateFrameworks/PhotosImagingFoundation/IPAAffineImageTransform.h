//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPAAffineImageTransform
{
    _Bool _canAlignToPixelsExactly;	// 8 = 0x8
    struct Matrix4d _matrix;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000000c800
- (id)description;	// IMP=0x000000000000c6a8
- (_Bool)canAlignToPixelsExactly;	// IMP=0x000000000000c698
- (struct Vector2d)mapVector:(struct Vector2d)arg1;	// IMP=0x000000000000c648
- (id)inverseTransform;	// IMP=0x000000000000c4ca
- (struct Matrix4d)matrix;	// IMP=0x000000000000c474
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const struct Matrix4d *)arg3 canAlignToPixelsExactly:(_Bool)arg4;	// IMP=0x000000000000c3dc

@end

