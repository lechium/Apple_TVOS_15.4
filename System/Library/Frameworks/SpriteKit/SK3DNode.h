//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, SCNNode, SCNScene;

@interface SK3DNode
{
    void *_skc3DNode;	// 96 = 0x60
}

+ (id)nodeWithViewportSize:(struct CGSize)arg1;	// IMP=0x0000000000029aca
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029577
- (void)_renderForTime:(double)arg1;	// IMP=0x0000000000029e58
- (MISSING_TYPE *)unprojectPoint: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000029e24
- (MISSING_TYPE *)projectPoint: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000029df0
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;	// IMP=0x0000000000029dbc
@property(retain, nonatomic) SCNScene *scnScene;
- (void)_scnSceneDidUpdate:(id)arg1;	// IMP=0x0000000000029c13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029b10
@property struct CGSize viewportSize;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002992d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029803
- (id)initWithViewportSize:(struct CGSize)arg1;	// IMP=0x0000000000029754
- (id)init;	// IMP=0x0000000000029700
- (void)commonInit;	// IMP=0x00000000000296fa
- (void)_didMakeBackingNode;	// IMP=0x00000000000296ae
- (void *)_makeBackingNode;	// IMP=0x0000000000029677
@property(nonatomic) _Bool autoenablesDefaultLighting;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) _Bool loops;
@property(getter=isPlaying) _Bool playing;
@property(nonatomic) double sceneTime;

@end

