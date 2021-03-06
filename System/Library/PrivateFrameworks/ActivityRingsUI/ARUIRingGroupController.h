//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARUIRingGroup, ARUISpriteSheet;

@interface ARUIRingGroupController
{
    float _ringIconSize;	// 8 = 0x8
    ARUIRingGroup *_ringGroup;	// 16 = 0x10
    double _backingOrigin;	// 24 = 0x18
    double _additionalSpacingAtIndex;	// 32 = 0x20
}

+ (double)defaultAnimationDuration;	// IMP=0x0000000000008c53
+ (id)animationTimingFunction;	// IMP=0x0000000000008c24
+ (id)ringGroupControllerConfiguredForCompanionWithRingType:(long long)arg1 withIcon:(_Bool)arg2;	// IMP=0x000000000001713b
+ (id)ringGroupControllerConfiguredForWatchWithRingType:(long long)arg1 withIcon:(_Bool)arg2;	// IMP=0x0000000000017081
- (void).cxx_destruct;	// IMP=0x0000000000009cf7
@property(nonatomic) double additionalSpacingAtIndex; // @synthesize additionalSpacingAtIndex=_additionalSpacingAtIndex;
@property(nonatomic) double backingOrigin; // @synthesize backingOrigin=_backingOrigin;
@property(nonatomic) float ringIconSize; // @synthesize ringIconSize=_ringIconSize;
@property(readonly, nonatomic) ARUIRingGroup *ringGroup; // @synthesize ringGroup=_ringGroup;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000009bba
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000009b99
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009b78
- (float)diameterForRingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000009aed
- (void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2;	// IMP=0x0000000000009ae7
- (void)setRingIconPosition:(struct CGPoint)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009ae1
- (void)setRingIconSize:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009adb
- (void)setRingInterspacing:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009ad5
- (void)setRingThickness:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009a1f
- (void)setRingDiameter:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009a19
- (void)setOpacity:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009968
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 contrastColor:(id)arg3 ofRingAtIndex:(long long)arg4;	// IMP=0x0000000000009953
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3;	// IMP=0x0000000000009936
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2;	// IMP=0x0000000000009921
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2;	// IMP=0x00000000000090bc
@property(nonatomic) float zRotation;
@property(nonatomic) float trackOpacity;
@property(nonatomic) float ringScale;
@property(nonatomic) float ringThickness;
@property(nonatomic) float ringInterspacing;
@property(nonatomic) float ringDiameter;
@property(nonatomic) float emptyOpacity;
@property(nonatomic) float opacity;
@property(nonatomic) struct CGPoint center;
@property(retain, nonatomic) ARUISpriteSheet *spriteSheet;
@property(readonly, nonatomic) long long numberOfRings;
- (id)initWithRingGroup:(id)arg1;	// IMP=0x0000000000008d4c
- (id)initWithNumberOfRings:(long long)arg1;	// IMP=0x0000000000008cd5
- (id)init;	// IMP=0x0000000000008c61
- (void)setIconFirstFrameOrigin:(struct CGPoint)arg1 frameSize:(struct CGSize)arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5;	// IMP=0x0000000000009d16
- (void)setIconDotTextureOrigin:(struct CGPoint)arg1 ofRingAtIndex:(long long)arg2;	// IMP=0x0000000000009d10
- (void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009d0a
- (void)removeCelebration:(id)arg1 fromRingAtIndex:(long long)arg2;	// IMP=0x000000000001091e
- (void)addCelebration:(id)arg1 toRingAtIndex:(long long)arg2;	// IMP=0x00000000000108a6
- (void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000017300
- (void)setBriskPercentage:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000172a7
- (void)setMovingHoursPercentage:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001724e
- (void)setActiveEnergyPercentage:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000171f5

@end

