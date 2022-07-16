//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACDQueueDictionary, ACRateLimiter, NSLock, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ACDAuthenticationPluginManager : NSObject
{
    ACDQueueDictionary *_verificationHandlerQueues;	// 8 = 0x8
    ACDQueueDictionary *_renewalHandlerQueues;	// 16 = 0x10
    ACDQueueDictionary *_discoveryHandlerQueues;	// 24 = 0x18
    ACRateLimiter *_renewalRateLimiter;	// 32 = 0x20
    NSMutableSet *_keysForRateExceededBugSent;	// 40 = 0x28
    NSLock *_verificationHandlersLock;	// 48 = 0x30
    NSLock *_renewalHandlersLock;	// 56 = 0x38
    NSLock *_discoveryHandlersLock;	// 64 = 0x40
    NSMutableDictionary *_authenticationPluginsByType;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_authenticationPluginQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000004ee7e
- (id)_unsanitizeOptionsDictionary:(id)arg1;	// IMP=0x000000000004edbd
- (id)_sanitizeError:(id)arg1;	// IMP=0x000000000004eb40
- (id)_descriptionForRenewalResult:(long long)arg1;	// IMP=0x000000000004eb07
- (id)_authCapableParentAccountForAccount:(id)arg1;	// IMP=0x000000000004e9e9
- (id)_authenticationTypeForAccount:(id)arg1;	// IMP=0x000000000004e5cd
- (id)_pluginForAuthenticationType:(id)arg1;	// IMP=0x000000000004e1d1
- (void)_handleDiscoveryCompletionResult:(id)arg1 forAccount:(id)arg2 discoveryID:(id)arg3 accountStore:(id)arg4 shouldSave:(_Bool)arg5 error:(id)arg6;	// IMP=0x000000000004de93
- (void)discoverPropertiesForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004d2af
- (void)_handleRenewalCompletionResult:(long long)arg1 forAccount:(id)arg2 renewalID:(id)arg3 accountStore:(id)arg4 error:(id)arg5;	// IMP=0x000000000004ce66
- (_Bool)_renewalRequestIsWithinLimitsForAccount:(id)arg1 accountStore:(id)arg2;	// IMP=0x000000000004c981
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004b598
- (void)_handleVerificationCompletionForAccount:(id)arg1 verifiedAccount:(id)arg2 error:(id)arg3 store:(id)arg4 shouldSave:(_Bool)arg5;	// IMP=0x000000000004b0ae
- (void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a328
- (void)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000049f40
- (_Bool)isPushSupportedForAccount:(id)arg1;	// IMP=0x0000000000049d54
- (id)init;	// IMP=0x0000000000049bdd
@property(retain) ACRateLimiter *renewalRateLimiter;

@end
