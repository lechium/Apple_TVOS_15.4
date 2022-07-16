//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSquishTransition
{
    double _widthRatio;	// 120 = 0x78
    double _offsetX;	// 128 = 0x80
    _Bool _useInteractiveOpacity;	// 136 = 0x88
    _Bool _disableMeshOptimization;	// 137 = 0x89
    _Bool _opacityAnimationDirectionForward;	// 138 = 0x8a
    unsigned long long _animationType;	// 144 = 0x90
    NSArray *_startGeometries;	// 152 = 0x98
    NSArray *_endGeometries;	// 160 = 0xa0
    NSArray *_commonVisibleKeys;	// 168 = 0xa8
    CADisplayLink *_opacityAnimationDisplayLink;	// 176 = 0xb0
    double _opacityAnimationBeginTime;	// 184 = 0xb8
    double _previousProgress;	// 192 = 0xc0
}

@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(nonatomic) _Bool opacityAnimationDirectionForward; // @synthesize opacityAnimationDirectionForward=_opacityAnimationDirectionForward;
@property(nonatomic) double opacityAnimationBeginTime; // @synthesize opacityAnimationBeginTime=_opacityAnimationBeginTime;
@property(retain, nonatomic) CADisplayLink *opacityAnimationDisplayLink; // @synthesize opacityAnimationDisplayLink=_opacityAnimationDisplayLink;
@property(retain, nonatomic) NSArray *commonVisibleKeys; // @synthesize commonVisibleKeys=_commonVisibleKeys;
@property(retain, nonatomic) NSArray *endGeometries; // @synthesize endGeometries=_endGeometries;
@property(retain, nonatomic) NSArray *startGeometries; // @synthesize startGeometries=_startGeometries;
@property(nonatomic) _Bool disableMeshOptimization; // @synthesize disableMeshOptimization=_disableMeshOptimization;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) _Bool useInteractiveOpacity; // @synthesize useInteractiveOpacity=_useInteractiveOpacity;
- (id)meshTransformForKeyplane:(id)arg1 toKeyplane:(id)arg2;	// IMP=0x0000000000a1f22f
- (id)symmetricMeshTransformForKeyplane:(id)arg1;	// IMP=0x0000000000a1d75d
- (_Bool)_allowFacesToAdjoinToAdjacentFaces;	// IMP=0x0000000000a1d70e
- (id)geometriesForKeyplane:(id)arg1;	// IMP=0x0000000000a1d6ea
- (id)sortedCommonVisibleKeys;	// IMP=0x0000000000a1d5f6
- (void)updateOpacityAnimation:(id)arg1;	// IMP=0x0000000000a1d46d
- (void)updateWithProgress:(double)arg1;	// IMP=0x0000000000a1d2f6
- (void)removeAllAnimations;	// IMP=0x0000000000a1d200
- (void)_updateTransition;	// IMP=0x0000000000a1d0bc
- (id)_animationsForEnd;	// IMP=0x0000000000a1cc38
- (id)_animationsForStart;	// IMP=0x0000000000a1c7b2
- (void)commitTransitionRebuild;	// IMP=0x0000000000a1c706
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;	// IMP=0x0000000000a1c3a8
- (void)dealloc;	// IMP=0x0000000000a1c323

@end

