//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXGFocusEffectViewConfiguration
{
    double _cornerRadius;	// 8 = 0x8
    double _focusedSizeIncrease;	// 16 = 0x10
    struct CGPoint _contentMotionRotation;	// 24 = 0x18
    struct CGPoint _contentMotionTranslation;	// 40 = 0x28
}

@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) struct CGPoint contentMotionTranslation; // @synthesize contentMotionTranslation=_contentMotionTranslation;
@property(nonatomic) struct CGPoint contentMotionRotation; // @synthesize contentMotionRotation=_contentMotionRotation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000665ecf
- (unsigned long long)hash;	// IMP=0x0000000000665d8f
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000665cb4

@end

