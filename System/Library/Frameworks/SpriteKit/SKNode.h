//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>
#import <SpriteKit/UIFocusItem-Protocol.h>

@class GKEntity, MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SKPhysicsBody, SKReachConstraints, SKScene, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface SKNode : UIResponder <NSCopying, NSSecureCoding, UIFocusItem>
{
    void *_skcNode;	// 8 = 0x8
    SKNode *_parent;	// 16 = 0x10
    NSMutableArray *_children;	// 24 = 0x18
    NSMutableArray *_actions;	// 32 = 0x20
    NSMutableDictionary *_keyedActions;	// 40 = 0x28
    NSMutableDictionary *_keyedSubSprites;	// 48 = 0x30
    NSMutableDictionary *_info;	// 56 = 0x38
    NSMutableDictionary *_attributeValues;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    NSMutableDictionary *_userData;	// 80 = 0x50
    NSArray *_constraints;	// 88 = 0x58
    unsigned int _version;	// 96 = 0x60
    _Bool _userInteractionEnabled;	// 100 = 0x64
    _Bool _performFullCapture;	// 101 = 0x65
    SKReachConstraints *_reachConstraints;	// 104 = 0x68
    long long _focusBehavior;	// 112 = 0x70
    GKEntity *_entity;	// 120 = 0x78
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;	// IMP=0x0000000000074b6b
+ (id)debugHierarchyPropertyDescriptions;	// IMP=0x0000000000073f78
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3;	// IMP=0x0000000000073eaf
+ (id)debugHierarchyChildGroupingID;	// IMP=0x0000000000073ea2
+ (id)nodeWithFileNamed:(id)arg1 securelyWithClasses:(id)arg2 andError:(id *)arg3;	// IMP=0x000000000006b49e
+ (id)nodeWithFileNamed:(id)arg1;	// IMP=0x000000000006aff9
+ (id)node;	// IMP=0x000000000006afdf
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006aaaa
+ (id)nodeFromCaptureData:(id)arg1;	// IMP=0x0000000000075314
- (void).cxx_destruct;	// IMP=0x000000000007523d
@property _Bool performFullCapture; // @synthesize performFullCapture=_performFullCapture;
@property(nonatomic) __weak GKEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(nonatomic) long long focusBehavior; // @synthesize focusBehavior=_focusBehavior;
@property(copy, nonatomic) SKReachConstraints *reachConstraints; // @synthesize reachConstraints=_reachConstraints;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x0000000000073e90
- (_Bool)_isEligibleForFocus;	// IMP=0x0000000000073de8
- (_Bool)_isEffectivelyHidden;	// IMP=0x0000000000073d51
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000073cd7
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000073cbc
- (void)updateFocusIfNeeded;	// IMP=0x0000000000073c56
- (void)setNeedsFocusUpdate;	// IMP=0x0000000000073be4
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;	// IMP=0x0000000000073b09
- (id)valueForAttributeNamed:(id)arg1;	// IMP=0x0000000000073a68
@property(copy, nonatomic) NSDictionary *attributeValues;
@property(readonly, nonatomic) CDStruct_14d5dc5e globalAccumulatedBoundingVerts;
@property(readonly, nonatomic) CDStruct_14d5dc5e globalBoundingVerts;
- (void)dealloc;	// IMP=0x000000000007382d
- (_Bool)hasUniformAlphaAndIsVisible;	// IMP=0x0000000000073825
- (_Bool)intersectsNode:(id)arg1;	// IMP=0x0000000000073810
- (struct CGSize)size;	// IMP=0x00000000000737d2
- (void)setSize:(struct CGSize)arg1;	// IMP=0x00000000000737cc
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;	// IMP=0x000000000007370c
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;	// IMP=0x000000000007364c
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;	// IMP=0x00000000000735dc
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;	// IMP=0x000000000007356c
- (id)nodesAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000073491
- (id)nodeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000073440
- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(_Bool)arg2;	// IMP=0x00000000000733f2
- (_Bool)containsPoint:(struct CGPoint)arg1 withRadius:(double)arg2;	// IMP=0x0000000000073336
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x00000000000732e7
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)setScale:(double)arg1;	// IMP=0x0000000000072dc7
@property(nonatomic) double yScale;
@property(nonatomic) double xScale;
@property(nonatomic) double yRotation;
@property(nonatomic) double xRotation;
@property(nonatomic) double zRotation;
@property(nonatomic) double zPosition;
- (struct CGRect)calculateAccumulatedFrame;	// IMP=0x0000000000072af2
@property(nonatomic) struct CGPoint position;
- (id)physicsField;	// IMP=0x0000000000072aad
@property(retain, nonatomic) SKPhysicsBody *physicsBody;
@property(readonly, copy) NSString *description;
- (_Bool)needsUpdate;	// IMP=0x0000000000072725
- (_Bool)hasActions;	// IMP=0x0000000000072701
- (id)containingView;	// IMP=0x000000000007263d
- (void)removeAllActions;	// IMP=0x000000000007246a
- (void)removeActionForKey:(id)arg1;	// IMP=0x00000000000723ad
- (id)actionForKey:(id)arg1;	// IMP=0x00000000000722ef
- (void)runAction:(id)arg1 withKey:(id)arg2;	// IMP=0x00000000000721e1
@property(nonatomic) double alpha;
@property(nonatomic) double speed;
- (void)runAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072089
- (void)_runAction:(id)arg1;	// IMP=0x0000000000071f71
- (void)runAction:(id)arg1;	// IMP=0x0000000000071eef
- (void)_descendantsWithPredicate:(CDUnknownBlockType)arg1 toMutableArray:(id)arg2;	// IMP=0x0000000000071d03
- (id)_descendantsWithPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071c78
- (void)_descendantsToMutableArray:(id)arg1;	// IMP=0x0000000000071ac6
- (id)_descendants;	// IMP=0x0000000000071a60
@property(readonly, nonatomic) NSArray *children;
- (_Bool)hasChildren;	// IMP=0x00000000000719f4
- (void)_processSearchTokens:(vector_c6b866d0)arg1 visited:(void *)arg2 usingBlock:(CDUnknownBlockType)arg3 stopPointer:(_Bool *)arg4;	// IMP=0x0000000000070ba4
- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 stopPointer:(_Bool *)arg3;	// IMP=0x000000000007030b
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000700a5
- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070082
- (id)childNodeWithName:(id)arg1;	// IMP=0x000000000006ff89
- (void)addChild:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000006fe54
- (void)_flippedChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x000000000006fe4e
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;	// IMP=0x000000000006fe48
@property(copy, nonatomic) NSArray *constraints;
- (void)_performCleanup;	// IMP=0x000000000006fd26
- (void)removeAllChildren;	// IMP=0x000000000006fb5e
- (void)removeChildrenInArray:(id)arg1;	// IMP=0x000000000006f653
- (void)removeChild:(id)arg1;	// IMP=0x000000000006f585
- (void)removeChildAtIndex:(long long)arg1;	// IMP=0x000000000006f2c7
@property(readonly, nonatomic) struct CGRect frame;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006eba5
- (void)addChild:(id)arg1;	// IMP=0x000000000006eb40
- (_Bool)inParentHierarchy:(id)arg1;	// IMP=0x000000000006ea5c
@property(readonly, nonatomic) const struct CGPath *outline;
@property(readonly, nonatomic) SKNode *parent;
@property(readonly, nonatomic) SKScene *scene;
- (void)_update:(double)arg1;	// IMP=0x000000000006e7a1
- (void)moveToParent:(id)arg1;	// IMP=0x000000000006e6d4
- (void)removeFromParent;	// IMP=0x000000000006e586
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d754
- (id)copy;	// IMP=0x000000000006d72d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006cfd8
- (void)_initAccessibility;	// IMP=0x000000000006cfd2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006bd1c
- (Class)swiftClassFromString:(id)arg1 moduleName:(id)arg2;	// IMP=0x000000000006ba63
- (id)init;	// IMP=0x000000000006b933
- (void)_didMakeBackingNode;	// IMP=0x000000000006b92d
@property(readonly, nonatomic) void *_backingNode;
- (void *)_makeBackingNode;	// IMP=0x000000000006b8e5
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x000000000006ab25
@property(readonly, nonatomic) shared_ptr_11a7378b _aether;
- (void)_removeChild:(id)arg1;	// IMP=0x000000000006aa53
- (void)_removeAction:(id)arg1;	// IMP=0x000000000006a9fc
- (id)createDebugHierarchyVisualRepresentation;	// IMP=0x0000000000076da1
- (struct CGRect)_convertFrameToView:(id)arg1;	// IMP=0x0000000000076d86
- (id)_copyImageData;	// IMP=0x0000000000076ca3
@property(readonly, nonatomic) NSArray *_allActions;
- (_Bool)_pathFromPhysicsBodyToPoints:(MISSING_TYPE ***)arg1 outSize:(unsigned long long *)arg2;	// IMP=0x0000000000076b23
- (id)_subnodeFromIndexPath:(id)arg1;	// IMP=0x00000000000769ef
- (id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(_Bool)arg2;	// IMP=0x0000000000076535
- (_Bool)intersectsNode:(id)arg1 useAlphaTest:(_Bool)arg2;	// IMP=0x00000000000764bb
@property(readonly, nonatomic) struct CGSize _size;
@property(nonatomic) struct CGPoint _anchorPoint;
@property(readonly, nonatomic) struct CGSize _untransformedSize;
@property(readonly, nonatomic) struct CGRect _untransformedBounds;
@property(nonatomic) _Bool _showBounds;
@property(retain, nonatomic) NSMutableDictionary *_info;
- (id)childrenInRect:(struct CGRect)arg1;	// IMP=0x0000000000075ed7
- (void)updatePhysicsPositionAndScaleFromSprite;	// IMP=0x0000000000075ebe
- (void)_getBasePhysicsScale:(float *)arg1 yScale:(float *)arg2;	// IMP=0x0000000000075e85
- (void)_getWorldTransform:(float *)arg1 positionY:(float *)arg2 rotation:(float *)arg3 xScale:(float *)arg4 yScale:(float *)arg5;	// IMP=0x0000000000075df3
- (void)_debugPrint:(int)arg1 mask:(unsigned long long)arg2;	// IMP=0x0000000000075bb6
- (void)_debugPrint:(int)arg1;	// IMP=0x000000000007599c
- (void)debugPrint;	// IMP=0x0000000000075986
- (id)archiveToFile:(id)arg1;	// IMP=0x0000000000075723
- (id)createFullCaptureData;	// IMP=0x00000000000755a9
- (void)setParent:(id)arg1;	// IMP=0x0000000000077994

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end
