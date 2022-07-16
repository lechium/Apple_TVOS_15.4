//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFTimerDelegate-Protocol.h>

@class HMFTimer, HMFUnfairLock, HMSymptom, NSError, NSString, NSUUID, SFDeviceRepairSession, UIViewController, _HMContext;
@protocol HMSymptomFixSessionDelegate;

@interface HMSymptomFixSession : NSObject <HMFLogging, HMFTimerDelegate>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _deviceRepairSessionFinished;	// 16 = 0x10
    _Bool _hasSymptomDisappeared;	// 17 = 0x11
    unsigned int _deviceRepairFlags;	// 20 = 0x14
    long long _state;	// 24 = 0x18
    id <HMSymptomFixSessionDelegate> _delegate;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    SFDeviceRepairSession *_deviceRepairSession;	// 48 = 0x30
    HMFTimer *_symptomDisappearanceTimer;	// 56 = 0x38
    UIViewController *_presentingViewController;	// 64 = 0x40
    _HMContext *_context;	// 72 = 0x48
    NSString *_logIdentifier;	// 80 = 0x50
    HMSymptom *_symptom;	// 88 = 0x58
    NSUUID *_deviceIdentifier;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00000000001c1b52
+ (id)_createSymptomDisappearanceTimer;	// IMP=0x00000000001c1a49
+ (id)_createDeviceRepairSession;	// IMP=0x00000000001c1990
- (void).cxx_destruct;	// IMP=0x00000000001c14ae
@property(readonly, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) HMSymptom *symptom; // @synthesize symptom=_symptom;
@property(readonly, copy, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000001c12ea
- (void)_startSymptomDisappearanceTimer;	// IMP=0x00000000001c11b3
- (void)_updateState;	// IMP=0x00000000001c113d
- (void)_updateForDeviceSetupProgressEvent:(unsigned int)arg1 error:(id)arg2;	// IMP=0x00000000001c10c1
- (void)noteSymptomDisappeared;	// IMP=0x00000000001c0fd2
- (void)stop;	// IMP=0x00000000001c0de6
- (void)start;	// IMP=0x00000000001c082a
@property(retain, nonatomic) HMFTimer *symptomDisappearanceTimer; // @synthesize symptomDisappearanceTimer=_symptomDisappearanceTimer;
@property(nonatomic) _Bool hasSymptomDisappeared; // @synthesize hasSymptomDisappeared=_hasSymptomDisappeared;
@property(nonatomic) unsigned int deviceRepairFlags; // @synthesize deviceRepairFlags=_deviceRepairFlags;
@property(nonatomic, getter=isDeviceRepairSessionFinished) _Bool deviceRepairSessionFinished; // @synthesize deviceRepairSessionFinished=_deviceRepairSessionFinished;
@property(retain, nonatomic) SFDeviceRepairSession *deviceRepairSession; // @synthesize deviceRepairSession=_deviceRepairSession;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <HMSymptomFixSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)dealloc;	// IMP=0x00000000001bf7f1
- (id)initWithSymptom:(id)arg1 deviceIdentifier:(id)arg2 context:(id)arg3;	// IMP=0x00000000001bf6b7
- (id)init;	// IMP=0x00000000001bf60f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

