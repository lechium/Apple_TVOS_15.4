//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNMorpher : NSObject <SCNAnimatable, NSSecureCoding>
{
    struct __C3DMorph *_morpher;	// 8 = 0x8
    unsigned int _isPresentationInstance:1;	// 16 = 0x10
    long long _calculationMode;	// 24 = 0x18
    SCNOrderedDictionary *_animations;	// 32 = 0x20
    NSMutableDictionary *_bindings;	// 40 = 0x28
    NSArray *_targets;	// 48 = 0x30
    NSMutableArray *_weights;	// 56 = 0x38
    NSArray *_topLevelAndInBetweenTargets;	// 64 = 0x40
    NSArray *_inBetweenCounts;	// 72 = 0x48
    NSArray *_inBetweenInfluenceWeights;	// 80 = 0x50
    NSDictionary *_targetNameToIndexes;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    _Bool _unifyNormal;	// 104 = 0x68
    _Bool _useSparseTargets;	// 105 = 0x69
}

+ (Class)SCNUID_classForElementOfArray:(id)arg1;	// IMP=0x0000000000277640
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000277638
+ (id)weightIndexStringForIndex:(long long)arg1;	// IMP=0x00000000002750f7
+ (id)morpher;	// IMP=0x0000000000272d70
+ (id)morpherWithMorphRef:(struct __C3DMorph *)arg1;	// IMP=0x0000000000272d2a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002771f5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000027700b
- (void)_didDecodeSCNMorpher:(id)arg1;	// IMP=0x0000000000276fae
- (void)_customEncodingOfSCNMorpher:(id)arg1;	// IMP=0x0000000000276f63
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000276e1d
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000276d10
- (void)_customDecodingOfSCNMorpher:(id)arg1;	// IMP=0x0000000000276ce1
- (id)copy;	// IMP=0x0000000000276ccd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000276b26
- (id)scene;	// IMP=0x0000000000276b03
- (struct __C3DScene *)sceneRef;	// IMP=0x0000000000276ae9
- (void)convertToSparseWithBaseGeometry:(id)arg1;	// IMP=0x00000000002769fb
- (_Bool)_isUsingSparseTargets;	// IMP=0x00000000002769f2
- (void)convertToAdditiveWithBaseGeometry:(id)arg1;	// IMP=0x0000000000276895
- (void)setWantsCPUMorphing:(_Bool)arg1;	// IMP=0x00000000002767e7
- (void)setWeightIncrementalThreshold:(float)arg1;	// IMP=0x0000000000276733
- (float)weightIncrementalThreshold;	// IMP=0x00000000002766d3
- (void)setShouldClearCPUDataAfterUpload:(_Bool)arg1;	// IMP=0x00000000002766c3
- (_Bool)shouldClearCPUDataAfterUpload;	// IMP=0x00000000002766b5
- (_Bool)wantsCPUMorphing;	// IMP=0x00000000002766a7
- (void)setShouldMorphNormals:(_Bool)arg1;	// IMP=0x000000000027668f
- (_Bool)shouldMorphNormals;	// IMP=0x0000000000276682
@property _Bool unifiesNormals;
@property(nonatomic) long long calculationMode;
- (void)setTargets:(id)arg1 withInBetweenTargetCounts:(id)arg2 inBetweenWeights:(id)arg3;	// IMP=0x0000000000275710
- (id)inBetweenWeightsForTargetAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000275663
- (id)inBetweenTargetsForTargetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002755b9
- (void)_updateTargetsAndInBetween:(id)arg1;	// IMP=0x000000000027559f
- (id)targetsAndInBetween;	// IMP=0x000000000027558c
- (void)setChannelTargetWeights:(id)arg1;	// IMP=0x0000000000275586
- (void)setChannelTargetCounts:(id)arg1;	// IMP=0x0000000000275580
- (id)channelTargetWeights;	// IMP=0x0000000000275578
- (id)channelTargetCounts;	// IMP=0x0000000000275570
- (double)weightForTargetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002754bc
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;	// IMP=0x00000000002751c7
- (double)weightForTargetNamed:(id)arg1;	// IMP=0x00000000002750af
- (void)setWeight:(double)arg1 forTargetNamed:(id)arg2;	// IMP=0x0000000000275060
- (long long)_weightIndexForTargetNamed:(id)arg1;	// IMP=0x0000000000274e12
@property(retain, nonatomic) NSArray *weights;
@property(copy, nonatomic) NSArray *targets;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x000000000027483d
- (id)presentationInstance;	// IMP=0x000000000027482b
- (id)presentationMorpher;	// IMP=0x00000000002747e4
- (_Bool)isPausedOrPausedByInheritance;	// IMP=0x00000000002747dc
- (void)_syncObjCModel;	// IMP=0x000000000027435f
- (void)removeAllBindings;	// IMP=0x00000000002742b5
- (void)unbindAnimatablePath:(id)arg1;	// IMP=0x00000000002741d1
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;	// IMP=0x0000000000273fd5
- (id)_scnBindings;	// IMP=0x0000000000273fcb
- (_Bool)isAnimationForKeyPaused:(id)arg1;	// IMP=0x0000000000273f44
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;	// IMP=0x0000000000273e32
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;	// IMP=0x0000000000273e20
- (void)resumeAnimationForKey:(id)arg1;	// IMP=0x0000000000273d7c
- (void)pauseAnimationForKey:(id)arg1;	// IMP=0x0000000000273cd5
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;	// IMP=0x0000000000273c54
- (id)animationPlayerForKey:(id)arg1;	// IMP=0x0000000000273bd9
- (void)_copyAnimationsFrom:(id)arg1;	// IMP=0x0000000000273a2f
- (id)_scnAnimationForKey:(id)arg1;	// IMP=0x00000000002739a4
- (id)animationForKey:(id)arg1;	// IMP=0x0000000000273972
- (void)_syncObjCAnimations;	// IMP=0x00000000002738b0
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;	// IMP=0x000000000027374d
- (void)removeAnimationForKey:(id)arg1;	// IMP=0x000000000027366f
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;	// IMP=0x0000000000273597
- (void)removeAllAnimations;	// IMP=0x00000000002734d7
- (void)addAnimation:(id)arg1;	// IMP=0x00000000002734c3
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002733cd
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000273207
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000273112
- (struct __C3DAnimationManager *)animationManager;	// IMP=0x00000000002730ef
- (const void *)__CFObject;	// IMP=0x00000000002730e5
@property(readonly, copy) NSString *description;
- (struct __C3DMorph *)morphRef;	// IMP=0x00000000002730b6
- (void)_syncEntityObjCModel;	// IMP=0x0000000000273078
- (id)identifier;	// IMP=0x000000000027305e
- (void)setIdentifier:(id)arg1;	// IMP=0x0000000000273037
- (id)name;	// IMP=0x0000000000272fd1
- (void)setName:(id)arg1;	// IMP=0x0000000000272ea6
- (void)dealloc;	// IMP=0x0000000000272dbc
- (void)clearInBetweens;	// IMP=0x0000000000272d82
- (id)initPresentationMorpherWithMorphRef:(struct __C3DMorph *)arg1;	// IMP=0x0000000000272cc7
- (id)initWithMorphRef:(struct __C3DMorph *)arg1;	// IMP=0x0000000000272c37
- (id)init;	// IMP=0x0000000000272bc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

