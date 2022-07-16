//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSLaunchdJobSpecification, BKSProcessAssertion, BKSProcessExitContext, BSProcessHandle, RBSAssertion, RBSProcessHandle, RBSProcessIdentity, RBSProcessMonitor;
@protocol BKSProcessDelegate;

@interface BKSProcess : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _bootstrapped;	// 12 = 0xc
    RBSProcessIdentity *_identity;	// 16 = 0x10
    RBSProcessHandle *_processHandle;	// 24 = 0x18
    BKSLaunchdJobSpecification *_jobSpec;	// 32 = 0x20
    RBSAssertion *_assertion;	// 40 = 0x28
    RBSProcessMonitor *_monitor;	// 48 = 0x30
    BKSProcessExitContext *_lastExitContext;	// 56 = 0x38
    BKSProcessAssertion *_mediaAssertion;	// 64 = 0x40
    BKSProcessAssertion *_audioAssertion;	// 72 = 0x48
    BKSProcessAssertion *_accessoryAssertion;	// 80 = 0x50
    RBSAssertion *_visibilityAssertion;	// 88 = 0x58
    _Bool _workspaceLocked;	// 96 = 0x60
    _Bool _connectedToExternalAccessories;	// 97 = 0x61
    _Bool _nowPlayingWithAudio;	// 98 = 0x62
    _Bool _recordingAudio;	// 99 = 0x63
    id <BKSProcessDelegate> _delegate;	// 104 = 0x68
    long long _visibility;	// 112 = 0x70
    long long _taskState;	// 120 = 0x78
    long long _terminationReason;	// 128 = 0x80
    BSProcessHandle *_handle;	// 136 = 0x88
}

+ (id)busyExtensionInstances:(id)arg1;	// IMP=0x00000000000045d0
+ (double)backgroundTimeRemaining;	// IMP=0x0000000000003723
+ (id)currentProcess;	// IMP=0x00000000000029a7
- (void).cxx_destruct;	// IMP=0x00000000000057ef
@property(nonatomic) _Bool recordingAudio; // @synthesize recordingAudio=_recordingAudio;
@property(nonatomic) _Bool nowPlayingWithAudio; // @synthesize nowPlayingWithAudio=_nowPlayingWithAudio;
@property(nonatomic) _Bool connectedToExternalAccessories; // @synthesize connectedToExternalAccessories=_connectedToExternalAccessories;
@property(nonatomic) _Bool workspaceLocked; // @synthesize workspaceLocked=_workspaceLocked;
@property(readonly, nonatomic) BSProcessHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) long long terminationReason; // @synthesize terminationReason=_terminationReason;
@property(nonatomic) long long visibility; // @synthesize visibility=_visibility;
- (id)description;	// IMP=0x00000000000056a3
- (_Bool)_bootstrapWithError:(out id *)arg1;	// IMP=0x000000000000483e
- (void)_lock_configureMonitor;	// IMP=0x0000000000003c50
- (void)_lock_updateVisibility;	// IMP=0x000000000000388c
@property(readonly, nonatomic) BKSProcessExitContext *lastExitContext;
@property(readonly, nonatomic) double backgroundTimeRemaining;
@property(nonatomic) __weak id <BKSProcessDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long taskState; // @synthesize taskState=_taskState;
- (void)invalidate;	// IMP=0x0000000000003507
- (_Bool)bootstrapWithSpecification:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000003294
- (_Bool)bootstrapWithProcessHandle:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000002fc1
- (id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(_Bool)arg4 queue:(id)arg5;	// IMP=0x0000000000002edc
- (id)initWithProcessIdentity:(id)arg1;	// IMP=0x0000000000002d28
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000002b0f
- (id)init;	// IMP=0x0000000000002afb
- (void)bootstrapCurrentProcess;	// IMP=0x0000000000002a7b

@end

