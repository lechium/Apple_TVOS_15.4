//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior
{
    struct CGPoint _anchorPoint;	// 8 = 0x8
    double _damping;	// 24 = 0x18
    double _distance;	// 32 = 0x20
    double _frequency;	// 40 = 0x28
    struct {
        unsigned int attachedToView:1;
        unsigned int dampingSet:1;
        unsigned int frequencySet:1;
        unsigned int lengthSet:1;
    } _stateFlags;	// 48 = 0x30
    NSMutableArray *_joints;	// 56 = 0x38
    PKPhysicsBody *_anchorBody;	// 64 = 0x40
}

+ (_Bool)_isPrimitiveBehavior;	// IMP=0x0000000000599775
- (void).cxx_destruct;	// IMP=0x000000000059a611
@property(nonatomic) double damping; // @synthesize damping=_damping;
- (id)description;	// IMP=0x000000000059a48d
- (void)_dissociate;	// IMP=0x000000000059a241
- (void)_associate;	// IMP=0x0000000000599a48
@property(nonatomic) struct CGPoint snapPoint;
- (void)_setFrequency:(double)arg1;	// IMP=0x00000000005998e3
- (double)_frequency;	// IMP=0x00000000005998d1
- (void)_setDistance:(double)arg1;	// IMP=0x00000000005998bf
- (double)_distance;	// IMP=0x00000000005998ad
- (id)initWithItem:(id)arg1 snapToPoint:(struct CGPoint)arg2;	// IMP=0x00000000005997d5
- (id)init;	// IMP=0x000000000059977d

@end

