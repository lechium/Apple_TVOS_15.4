//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADOpportuneSpeakingStateManager, AFWatchdogTimer, NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection;
@protocol AFOpportuneSpeakable, OS_dispatch_group, OS_dispatch_queue;

@interface ADOpportuneSpeakingModule : NSObject
{
    AFWatchdogTimer *_timer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_modelLoadingGroup;	// 24 = 0x18
    id <AFOpportuneSpeakable> _currentSpeakable;	// 32 = 0x20
    NSMutableArray *_queuedSpeakables;	// 40 = 0x28
    NSMutableDictionary *_handlersBySpeakableID;	// 48 = 0x30
    NSString *_executionModelIdentifier;	// 56 = 0x38
    long long _executionModelType;	// 64 = 0x40
    NSMutableDictionary *_modelMap;	// 72 = 0x48
    NSMutableDictionary *_typeMap;	// 80 = 0x50
    _Bool _modelLoading;	// 88 = 0x58
    NSXPCConnection *_connection;	// 96 = 0x60
    ADOpportuneSpeakingStateManager *_stateManager;	// 104 = 0x68
}

+ (id)sharedModule;	// IMP=0x00200000001e194a
- (void).cxx_destruct;	// IMP=0x00200000001e3984
@property(readonly, nonatomic) ADOpportuneSpeakingStateManager *stateManager; // @synthesize stateManager=_stateManager;
- (void)modelWithIdentifier:(id)arg1 didUpdateScore:(float)arg2 forSpeakable:(id)arg3;	// IMP=0x00100000001e35ce
- (id)_remoteOSMService;	// IMP=0x00100000001e3529
- (id)_connectionToOSMService;	// IMP=0x00100000001e3275
- (void)_cleanUpAllModels;	// IMP=0x00100000001e30b8
- (void)_resetConnectionToOSMService;	// IMP=0x00100000001e2da8
- (void)_loadModelWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2918
- (void)_withAllModelsExecute:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e241b
- (void)recordSpokenRequestCompletedForSpeakable:(id)arg1;	// IMP=0x00100000001e233a
- (void)recordSpokenRequestCancelledForSpeakable:(id)arg1;	// IMP=0x00100000001e2259
- (void)requestsToSpeak:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e20bd
- (void)_processEnqueuedSpeakables;	// IMP=0x00100000001e1dee
- (void)_recordImmediateNotificationInteractionAfterRecommendation:(long long)arg1 forSpeakable:(id)arg2;	// IMP=0x00100000001e1c17
- (void)_finishRunningCurrentSpeakableWithResult:(long long)arg1 error:(id)arg2;	// IMP=0x00100000001e1afa
- (id)_init;	// IMP=0x00100000001e19af

@end
