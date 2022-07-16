//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, _UIKBRTTimerBlock;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchInfo
{
    BOOL _currentTouchState;	// 8 = 0x8
    BOOL _preRuleTouchState;	// 9 = 0x9
    double _originalTimestamp;	// 16 = 0x10
    double _maximumRadius;	// 24 = 0x18
    double _currentTimestamp;	// 32 = 0x20
    double _originalZGradient;	// 40 = 0x28
    double _currentZGradient;	// 48 = 0x30
    id _touchIdentifier;	// 56 = 0x38
    _UIKBRTTimerBlock *_timer;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_timerQueue;	// 72 = 0x48
    struct CGPoint _originalTouchPoint;	// 80 = 0x50
    struct CGPoint _currentTouchPoint;	// 96 = 0x60
}

+ (id)createTouchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(_Bool)arg3;	// IMP=0x00000000009efe6f
+ (id)touchInfoForTouch:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000000009efdc8
+ (void)setTouchInfo:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000009efd26
+ (id)touchDict;	// IMP=0x00000000009efcb4
- (void).cxx_destruct;	// IMP=0x00000000009f0b70
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(readonly, nonatomic) _UIKBRTTimerBlock *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) id touchIdentifier; // @synthesize touchIdentifier=_touchIdentifier;
@property(nonatomic) BOOL preRuleTouchState; // @synthesize preRuleTouchState=_preRuleTouchState;
@property(nonatomic) BOOL currentTouchState; // @synthesize currentTouchState=_currentTouchState;
@property(readonly, nonatomic) double currentZGradient; // @synthesize currentZGradient=_currentZGradient;
@property(readonly, nonatomic) double originalZGradient; // @synthesize originalZGradient=_originalZGradient;
@property(readonly, nonatomic) double currentTimestamp; // @synthesize currentTimestamp=_currentTimestamp;
@property(readonly, nonatomic) double maximumRadius; // @synthesize maximumRadius=_maximumRadius;
@property(readonly, nonatomic) struct CGPoint currentTouchPoint; // @synthesize currentTouchPoint=_currentTouchPoint;
@property(readonly, nonatomic) struct CGPoint originalTouchPoint; // @synthesize originalTouchPoint=_originalTouchPoint;
@property(readonly, nonatomic) double originalTimestamp; // @synthesize originalTimestamp=_originalTimestamp;
- (_Bool)willChangeTouchInfo:(id)arg1 toState:(BOOL)arg2;	// IMP=0x00000000009f0954
- (id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg1 toState:(BOOL)arg2;	// IMP=0x00000000009f04e0
- (void)cleanup;	// IMP=0x00000000009f0470
- (void)invalidateTimer;	// IMP=0x00000000009f03de
- (void)fireTimerNow;	// IMP=0x00000000009f0338
- (void)setTimerWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(CDUnknownBlockType)arg3;	// IMP=0x00000000009f01f7
- (void)updateTouch:(id)arg1;	// IMP=0x00000000009f0107
@property(readonly, nonatomic) _UIKBRTTouchInfo *nextTouch;
@property(readonly, nonatomic) _UIKBRTTouchInfo *previousTouch;
- (void)dealloc;	// IMP=0x00000000009f00a5
- (id)initWithTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(_Bool)arg3;	// IMP=0x00000000009eff0a

@end

