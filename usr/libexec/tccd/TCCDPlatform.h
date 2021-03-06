//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TCCDMainSyncController, TCCDServer, TCCDSyncController;

@interface TCCDPlatform : NSObject
{
    _Bool _isChinaSKUDevice;	// 8 = 0x8
    NSDictionary *_configurationDictionary;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    TCCDServer *_server;	// 32 = 0x20
    TCCDSyncController *_syncController;	// 40 = 0x28
    TCCDMainSyncController *_mainSyncController;	// 48 = 0x30
    NSDictionary *_servicesByName;	// 56 = 0x38
}

+ (id)allTCCEntitlements;	// IMP=0x0040000000030506
+ (id)currentPlatform;	// IMP=0x001000000003049a
+ (id)macOSPlatformNames;	// IMP=0x001000000003042a
+ (id)iosFamilyPlatformNames;	// IMP=0x00100000000303ab
+ (id)allPlatformNames;	// IMP=0x0010000000030318
- (void).cxx_destruct;	// IMP=0x0020000000031d2e
@property(readonly) _Bool isChinaSKUDevice; // @synthesize isChinaSKUDevice=_isChinaSKUDevice;
@property(retain) NSDictionary *servicesByName; // @synthesize servicesByName=_servicesByName;
@property(retain) TCCDMainSyncController *mainSyncController; // @synthesize mainSyncController=_mainSyncController;
@property(retain) TCCDSyncController *syncController; // @synthesize syncController=_syncController;
@property __weak TCCDServer *server; // @synthesize server=_server;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
- (void)registerWithApplicationResolverSubjectIdentity:(id)arg1 processChain:(id)arg2;	// IMP=0x0010000000031c65
- (_Bool)displayAlert:(id)arg1;	// IMP=0x0010000000031c5d
- (id)prefixOfBundleIdentifiersToResetAfterResetOfAppBundleIdentifier:(id)arg1;	// IMP=0x0010000000031c55
- (_Bool)removalOfAppBundleIdentifierRequiresPruning:(id)arg1;	// IMP=0x0010000000031c4d
- (_Bool)isNonAppBundleIdentifierValid:(id)arg1;	// IMP=0x0010000000031c45
- (void)runBacktraceToolOnProcess:(id)arg1 forService:(id)arg2;	// IMP=0x0010000000031c3f
- (void)prepareForAbort;	// IMP=0x0010000000031c39
- (unsigned long long)evalutePolicyForUsageStringAndPromptingForClient:(id)arg1 attributionChain:(id)arg2 service:(id)arg3 resultUsageString:(id *)arg4;	// IMP=0x0010000000031c2a
- (void)sendAnalyticsForAction:(long long)arg1 service:(id)arg2 subjectIdentity:(id)arg3 indirectObjectIdentity:(id)arg4 authValue:(unsigned long long)arg5 includeV1AuthValue:(_Bool)arg6 v1AuthValue:(unsigned long long)arg7;	// IMP=0x00100000000316a8
- (void)updateAnalyticsEvent:(id)arg1 fromIdentity:(id)arg2 keyPrefix:(id)arg3;	// IMP=0x00100000000313e8
- (id)stringForAnalyticsAction:(long long)arg1;	// IMP=0x001000000003137d
- (void)notifyUserOfDeniedAccessBy:(id)arg1 forService:(id)arg2;	// IMP=0x001000000003136b
- (id)appBundleURLContainingExecutableURL:(id)arg1;	// IMP=0x0010000000030e78
- (id)bundleURLContainingExecutableURL:(id)arg1;	// IMP=0x0010000000030e36
- (long long)evaluatePolicyForPromptingforService:(id)arg1 byIdentity:(id)arg2 attributionChain:(id)arg3;	// IMP=0x0010000000030e21
- (void)handleCompositionType:(long long)arg1 forParentService:(id)arg2 forRequest:(id)arg3 intoReply:(id)arg4;	// IMP=0x0010000000030e0f
- (void)forwardMessage:(id)arg1 toUserTCCDFromAttributionChain:(id)arg2 forService:(id)arg3 andMergeReplyInto:(id)arg4 forConnnection:(id)arg5;	// IMP=0x0010000000030dfd
- (_Bool)sendMessageAsync:(id)arg1 toTCCDForTargetUID:(unsigned int)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030de8
- (id)sendMessageSync:(id)arg1 toTCCDForTargetUID:(unsigned int)arg2;	// IMP=0x0010000000030dd3
- (id)homeRelativePathToStateDirectory;	// IMP=0x0010000000030dbe
- (void)_invalidMethodForPlatform;	// IMP=0x0010000000030dac
- (id)serviceByName:(id)arg1;	// IMP=0x0010000000030a21
- (void)_configureServices;	// IMP=0x0010000000030a1b
- (id)description;	// IMP=0x0010000000030a09
- (void)loadConfigurationDictionary;	// IMP=0x00100000000307b1
- (id)initWithName:(id)arg1;	// IMP=0x001000000003073e

@end

