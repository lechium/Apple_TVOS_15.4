//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESDebugRecord, DESDodMLServer, DESDodMLTaskSchedulingPolicy, DESRecordSet, MLRDodMLSchedulingRecord, NSMutableArray, NSString;
@protocol DESPluginManaging, OS_dispatch_queue;

@interface MLRDodMLTaskWorker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <DESPluginManaging> _plugin;	// 16 = 0x10
    DESDodMLTaskSchedulingPolicy *_policy;	// 24 = 0x18
    _Bool _requestToDeferByDAS;	// 32 = 0x20
    NSMutableArray *_results;	// 40 = 0x28
    _Bool _alwaysRun;	// 48 = 0x30
    DESRecordSet *_recordSet;	// 56 = 0x38
    NSString *_bundleIdentifier;	// 64 = 0x40
    NSString *_localeIdentifier;	// 72 = 0x48
    NSString *_deviceIdentifier;	// 80 = 0x50
    DESDodMLServer *_server;	// 88 = 0x58
    MLRDodMLSchedulingRecord *_schedulingRecord;	// 96 = 0x60
    DESDebugRecord *_debugRecord;	// 104 = 0x68
}

+ (void)initialize;	// IMP=0x0020000000007a27
- (void).cxx_destruct;	// IMP=0x002000000000bd19
@property(readonly, nonatomic) DESDebugRecord *debugRecord; // @synthesize debugRecord=_debugRecord;
@property(readonly, nonatomic) MLRDodMLSchedulingRecord *schedulingRecord; // @synthesize schedulingRecord=_schedulingRecord;
@property(readonly, nonatomic) DESDodMLServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) DESRecordSet *recordSet; // @synthesize recordSet=_recordSet;
- (void)stop;	// IMP=0x001000000000bc10
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b108
- (_Bool)updateTaskAfterCompletion:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000af74
- (_Bool)canRun;	// IMP=0x001000000000ae2a
- (_Bool)_ensureEvaluatorWithError:(id *)arg1;	// IMP=0x001000000000ad01
- (void)_downloadAttachments:(id)arg1 signatures:(id)arg2 certificate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ab28
- (void)_handleRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009b2b
- (id)_taskDeferByDASError;	// IMP=0x0010000000009a60
- (_Bool)taskIsDeferred;	// IMP=0x0010000000009a57
- (void)_fetchRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000092bf
- (void)_attemptRecipeMatchWithRecipeIDs:(id)arg1 keepGoing:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008ad5
- (_Bool)_rollDieWithRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000087e1
- (id)_matchedRecordSetforRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000086d1
@property(readonly, nonatomic) _Bool isPFLPlugin;
- (void)_handleTelemetryInPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007fde
- (id)telemetryResponse;	// IMP=0x0010000000007e29
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 deviceIdentifier:(id)arg5 pluginOverride:(id)arg6 protocolClass:(Class)arg7 alwaysRun:(_Bool)arg8;	// IMP=0x0010000000007bad
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 pluginOverride:(id)arg5 protocolClass:(Class)arg6;	// IMP=0x0010000000007a91
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 pluginOverride:(id)arg5;	// IMP=0x0010000000007a75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

