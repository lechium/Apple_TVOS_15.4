//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameplayKit/NSSecureCoding-Protocol.h>

@class GKBehavior, MISSING_TYPE;
@protocol GKAgentDelegate;

@interface GKAgent <NSSecureCoding>
{
    struct GKSimpleVehicle _vehicle;	// 8 = 0x8
    id <GKAgentDelegate> _delegate;	// 184 = 0xb8
    GKBehavior *_behavior;	// 192 = 0xc0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004338d
- (id).cxx_construct;	// IMP=0x00000000000460f3
- (void).cxx_destruct;	// IMP=0x00000000000460b5
@property(retain, nonatomic) GKBehavior *behavior; // @synthesize behavior=_behavior;
@property(nonatomic) __weak id <GKAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (MISSING_TYPE *)steerToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2;	// IMP=0x0000000000045eca
- (MISSING_TYPE *)steerToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(_Bool)arg3;	// IMP=0x0000000000045c5f
- (MISSING_TYPE *)steerForIntercept:(id)arg1 maxPredictionTime:(double)arg2;	// IMP=0x0000000000045995
- (MISSING_TYPE *)steerForWander:(double)arg1 speed:(float)arg2;	// IMP=0x0000000000045839
- (MISSING_TYPE *)steerForTargetSpeed:(float)arg1;	// IMP=0x0000000000045799
- (MISSING_TYPE *)steerForCohesion:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;	// IMP=0x00000000000452bd
- (MISSING_TYPE *)steerForAlignment:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;	// IMP=0x0000000000044de2
- (MISSING_TYPE *)steerForSeparation:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;	// IMP=0x00000000000448eb
- (MISSING_TYPE *)steerToAvoidAgents:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2;	// IMP=0x0000000000044105
- (MISSING_TYPE *)steerToAvoidObstacles:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2;	// IMP=0x0000000000043a8e
- (MISSING_TYPE *)steerForFlee: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000439f5
- (MISSING_TYPE *)steerForSeek: /* Error: Ran out of types for this method. */;	// IMP=0x000000000004394b
- (MISSING_TYPE *)velocity3;	// IMP=0x00000000000438e2
- (MISSING_TYPE *)position3;	// IMP=0x0000000000043882
@property(nonatomic) float maxSpeed;
@property(nonatomic) float maxAcceleration;
@property(nonatomic) float speed;
@property(nonatomic) float radius;
@property(nonatomic) float mass;
- (void *)vehicle;	// IMP=0x00000000000436f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000043590
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000043395
- (id)init;	// IMP=0x000000000004321f

@end

