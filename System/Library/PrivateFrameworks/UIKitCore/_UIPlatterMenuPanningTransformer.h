//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, _UIVelocityIntegrator;
@protocol _UIPlatterMenuPanningTransformerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuPanningTransformer : NSObject
{
    id <_UIPlatterMenuPanningTransformerDelegate> _delegate;	// 8 = 0x8
    double _minimumXVelocityForAxisLock;	// 16 = 0x10
    unsigned long long _axisLock;	// 24 = 0x18
    unsigned long long _overrideLockAxis;	// 32 = 0x20
    double _lastAxisLockTime;	// 40 = 0x28
    NSDate *_timeForLastDirectionalChange;	// 48 = 0x30
    NSDate *_panBeginTime;	// 56 = 0x38
    _UIVelocityIntegrator *_velocityIntegrator;	// 64 = 0x40
    struct CGPoint _transitionZonePosition;	// 72 = 0x48
    struct CGSize _transitionZoneSize;	// 88 = 0x58
    struct CGPoint _lastTouchPosition;	// 104 = 0x68
    struct CGVector _lastOffset;	// 120 = 0x78
    struct CGPoint _lastTransformedPoint;	// 136 = 0x88
    struct CGPoint _panBeginTouchPosition;	// 152 = 0x98
    struct CGPoint _lastDirectionChangeTouchPosition;	// 168 = 0xa8
    struct CGRect _transitionZoneRect;	// 184 = 0xb8
}

+ (id)transformerWithAxisTransitionZonePosition:(struct CGPoint)arg1 axisTransitionZoneSize:(struct CGSize)arg2;	// IMP=0x0000000000a91a01
- (void).cxx_destruct;	// IMP=0x0000000000a92992
@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
@property(retain, nonatomic) NSDate *panBeginTime; // @synthesize panBeginTime=_panBeginTime;
@property(nonatomic) struct CGPoint lastDirectionChangeTouchPosition; // @synthesize lastDirectionChangeTouchPosition=_lastDirectionChangeTouchPosition;
@property(nonatomic) struct CGPoint panBeginTouchPosition; // @synthesize panBeginTouchPosition=_panBeginTouchPosition;
@property(nonatomic) struct CGPoint lastTransformedPoint; // @synthesize lastTransformedPoint=_lastTransformedPoint;
@property(retain, nonatomic) NSDate *timeForLastDirectionalChange; // @synthesize timeForLastDirectionalChange=_timeForLastDirectionalChange;
@property(nonatomic) struct CGVector lastOffset; // @synthesize lastOffset=_lastOffset;
@property(nonatomic) double lastAxisLockTime; // @synthesize lastAxisLockTime=_lastAxisLockTime;
@property(nonatomic) unsigned long long overrideLockAxis; // @synthesize overrideLockAxis=_overrideLockAxis;
@property(nonatomic) unsigned long long axisLock; // @synthesize axisLock=_axisLock;
@property(nonatomic) struct CGRect transitionZoneRect; // @synthesize transitionZoneRect=_transitionZoneRect;
@property(nonatomic) struct CGPoint lastTouchPosition; // @synthesize lastTouchPosition=_lastTouchPosition;
@property(nonatomic) struct CGSize transitionZoneSize; // @synthesize transitionZoneSize=_transitionZoneSize;
@property(nonatomic) struct CGPoint transitionZonePosition; // @synthesize transitionZonePosition=_transitionZonePosition;
@property(nonatomic) double minimumXVelocityForAxisLock; // @synthesize minimumXVelocityForAxisLock=_minimumXVelocityForAxisLock;
@property(nonatomic) __weak id <_UIPlatterMenuPanningTransformerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndPanningWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;	// IMP=0x0000000000a92680
- (void)didPanWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;	// IMP=0x0000000000a91e39
- (void)didBeginPanningWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;	// IMP=0x0000000000a91c78
@property(readonly, nonatomic) struct CGVector velocity;
@property(readonly, nonatomic) struct CGVector offset;
- (void)_enterYLockedState;	// IMP=0x0000000000a91b1c
- (void)lockIntoYAxis;	// IMP=0x0000000000a91b05
- (double)timeIntervalSinceLastDirectionChange;	// IMP=0x0000000000a91a53
- (id)initWithAxisTransitionZonePosition:(struct CGPoint)arg1 axisTransitionZoneSize:(struct CGSize)arg2;	// IMP=0x0000000000a91908

@end

