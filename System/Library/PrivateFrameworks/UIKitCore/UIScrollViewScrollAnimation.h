//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CABasicAnimation;

__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation
{
    struct CGPoint _originalOffset;	// 72 = 0x48
    struct CGPoint _targetOffset;	// 88 = 0x58
    _Bool _targetOffsetValidAtStart;	// 104 = 0x68
    double _accuracy;	// 112 = 0x70
    _Bool _adjustsForContentOffsetDelta;	// 120 = 0x78
    CABasicAnimation *_customAnimation;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000fdbcb6
- (void)dealloc;	// IMP=0x0000000000fdbc48
- (float)progressForFraction:(float)arg1;	// IMP=0x0000000000fdbb3f
- (void)setProgress:(float)arg1;	// IMP=0x0000000000fdb955
- (void)adjustForContentOffsetDelta:(struct CGPoint)arg1;	// IMP=0x0000000000fdb914

@end
