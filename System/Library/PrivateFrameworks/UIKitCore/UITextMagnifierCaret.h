//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret
{
    double _yOffset;	// 112 = 0x70
    struct CGPoint _offset;	// 120 = 0x78
}

+ (Class)renderClass;	// IMP=0x0000000000e0149f
+ (id)activeCaretMagnifier;	// IMP=0x0000000000e0148e
+ (id)sharedCaretMagnifier;	// IMP=0x0000000000e0134d
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (double)offsetFromMagnificationPoint;	// IMP=0x0000000000e01dc2
- (_Bool)isHorizontal;	// IMP=0x0000000000e01dba
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;	// IMP=0x0000000000e01cbd
- (void)updateFrameAndOffset;	// IMP=0x0000000000e01a25
- (void)remove;	// IMP=0x0000000000e019c1
- (void)zoomDownAnimation;	// IMP=0x0000000000e016b3
- (void)zoomUpAnimation;	// IMP=0x0000000000e0158b
- (_Bool)terminalPointPlacedCarefully;	// IMP=0x0000000000e01526
- (void)setAnimationPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e01514
- (struct CGPoint)animationPoint;	// IMP=0x0000000000e01502
- (id)initWithFrame;	// IMP=0x0000000000e014b0

@end
