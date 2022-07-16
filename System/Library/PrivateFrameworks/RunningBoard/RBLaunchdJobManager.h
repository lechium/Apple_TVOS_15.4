//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, RBPersonaManager;
@protocol RBLaunchdInterfacing;

@interface RBLaunchdJobManager : NSObject
{
    NSMutableDictionary *_lock_jobsByIdentifier;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    id <RBLaunchdInterfacing> _launchdInterface;	// 24 = 0x18
    RBPersonaManager *_personaManager;	// 32 = 0x20
    NSMutableOrderedSet *_lock_reslideIdentities;	// 40 = 0x28
}

+ (id)lastExitStatusForLabel:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000001fabc
- (void).cxx_destruct;	// IMP=0x0000000000025527
- (void)invokeOnProcessDeath:(id)arg1 handler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;	// IMP=0x0000000000024bbc
- (id)synchronizeJobs;	// IMP=0x000000000002427c
- (_Bool)removeJobWithInstance:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000024265
- (_Bool)_removeJobWithInstance:(id)arg1 orJob:(id)arg2 error:(out id *)arg3;	// IMP=0x0000000000023bf2
- (_Bool)_isRunningBoardLaunched:(id)arg1;	// IMP=0x00000000000239c4
- (id)createAndLaunchWithIdentity:(id)arg1 context:(id)arg2 error:(out id *)arg3;	// IMP=0x0000000000022b13
- (id)_createAndSubmitExtensionJob:(id)arg1 UUID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000022657
- (id)_createLaunchdJobWithIdentity:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000216d5
- (id)_generateDataWithIdentity:(id)arg1 context:(id)arg2;	// IMP=0x000000000002015d
- (unsigned int)_personaForIdentity:(id)arg1 context:(id)arg2;	// IMP=0x000000000001ff46
- (void)_addReslideIdentityIfNeeded:(id)arg1 exitStatus:(id)arg2;	// IMP=0x000000000001ff40
- (id)initWithLaunchdInterface:(id)arg1 personaManager:(id)arg2;	// IMP=0x000000000001fe67

@end

