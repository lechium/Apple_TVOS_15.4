//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIKeyboardActivityControlling-Protocol.h>
#import <TextInputCore/TIKeyboardApplicationStateResponses-Protocol.h>
#import <TextInputCore/TIKeyboardAssertionManagerDelegate-Protocol.h>

@class NSHashTable, NSString, NSTimer;
@protocol OS_dispatch_source, OS_os_transaction;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses>
{
    _Bool _hadRecentActivity;	// 8 = 0x8
    _Bool _hasBackgroundActivity;	// 9 = 0x9
    unsigned long long _activityState;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_memoryPressureSource;	// 24 = 0x18
    long long _inactiveMemoryPressureCount;	// 32 = 0x20
    _Bool _isDirty;	// 40 = 0x28
    NSObject<OS_os_transaction> *_isDirtyTransaction;	// 48 = 0x30
    NSTimer *_inactivityTimer;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
}

+ (double)defaultKeyboardIdleTimeoutInterval;	// IMP=0x000000000009f28c
+ (double)keyboardIdleTimeoutInterval;	// IMP=0x000000000009f260
+ (id)singletonInstance;	// IMP=0x000000000009f230
+ (id)sharedController;	// IMP=0x000000000009f1f3
+ (void)setKeyboardIdleTimeoutInterval:(double)arg1;	// IMP=0x000000000009f49f
+ (void)setSharedController:(id)arg1;	// IMP=0x000000000009f45a
- (void).cxx_destruct;	// IMP=0x000000000009f035
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *inactivityTimer; // @synthesize inactivityTimer=_inactivityTimer;
@property(retain, nonatomic) NSObject<OS_os_transaction> *isDirtyTransaction; // @synthesize isDirtyTransaction=_isDirtyTransaction;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
- (_Bool)shouldBecomeClean;	// IMP=0x000000000009eea6
- (_Bool)canGoEarlyClean;	// IMP=0x000000000009ec2a
- (void)setKeyboardCleanIfNecessary;	// IMP=0x000000000009e75e
- (_Bool)shouldBecomeDirty;	// IMP=0x000000000009e61e
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)arg1;	// IMP=0x000000000009e421
- (void)inactivityTimerFired:(id)arg1;	// IMP=0x000000000009e305
- (void)touchInactivityTimer;	// IMP=0x000000000009e1ce
- (void)backgroundActivityAssertionsDidChange;	// IMP=0x000000000009e142
- (void)keyboardAssertionsDidChange;	// IMP=0x000000000009dedf
- (_Bool)atexitHandler;	// IMP=0x000000000009ded7
- (void)releaseInputManagers;	// IMP=0x000000000009dea1
- (void)updateActivityState;	// IMP=0x000000000009ddd2
@property(readonly, nonatomic) unsigned long long activityState;
- (unsigned long long)getExcessMemoryInBytes;	// IMP=0x000000000009dc82
- (void)handleMemoryStatusPressure:(unsigned long long)arg1;	// IMP=0x000000000009d86f
- (id)createMemoryPressureSource;	// IMP=0x000000000009d7c9
- (void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;	// IMP=0x000000000009d4fb
- (void)notifyTransitionWithContext:(id)arg1;	// IMP=0x000000000009d2cc
- (void)removeActivityObserver:(id)arg1;	// IMP=0x000000000009d0dc
- (void)addActivityObserver:(id)arg1;	// IMP=0x000000000009ceec
- (void)dealloc;	// IMP=0x000000000009ce6a
- (id)init;	// IMP=0x000000000009cd70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

