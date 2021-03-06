//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVOptionsTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVDiscoveryTaskGroupDelegate;

@interface CoreDAVDiscoveryTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate>
{
    NSString *_requiredComplianceClass;	// 88 = 0x58
    NSArray *_httpPorts;	// 96 = 0x60
    NSArray *_httpsPorts;	// 104 = 0x68
    NSString *_httpServiceString;	// 112 = 0x70
    NSString *_httpsServiceString;	// 120 = 0x78
    NSString *_wellKnownPath;	// 128 = 0x80
    NSArray *_potentialContextPaths;	// 136 = 0x88
    NSMutableArray *_discoveries;	// 144 = 0x90
    _Bool _didReceiveAuthenticationError;	// 152 = 0x98
    _Bool _shouldBailEarly;	// 153 = 0x99
    id <CoreDAVAccountInfoProvider> _discoveredAccountInfo;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000020af6
@property(retain, nonatomic) NSArray *potentialContextPaths; // @synthesize potentialContextPaths=_potentialContextPaths;
@property(retain, nonatomic) NSString *wellKnownPath; // @synthesize wellKnownPath=_wellKnownPath;
@property(retain, nonatomic) id <CoreDAVAccountInfoProvider> discoveredAccountInfo; // @synthesize discoveredAccountInfo=_discoveredAccountInfo;
@property(nonatomic) _Bool shouldBailEarly; // @synthesize shouldBailEarly=_shouldBailEarly;
@property(nonatomic) _Bool didReceiveAuthenticationError; // @synthesize didReceiveAuthenticationError=_didReceiveAuthenticationError;
- (void)getDiscoveryStatus:(id)arg1 priorFailed:(id *)arg2 subsequentFailed:(id *)arg3 priorIncomplete:(id *)arg4 subsequentIncomplete:(id *)arg5 priorSuccess:(id *)arg6 subsequentSuccess:(id *)arg7;	// IMP=0x000000000002070a
- (void)addToDiscoveryArray:(id *)arg1 discovery:(id)arg2;	// IMP=0x000000000002069e
- (id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2;	// IMP=0x00000000000203b3
- (id)extractPrincipalURLFromPropFindTask:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f70a
- (id)propFindProperties;	// IMP=0x000000000001f596
- (void)noteDefinitiveAuthFailureFromTask:(id)arg1;	// IMP=0x000000000001f2aa
- (void)completeDiscovery:(id)arg1 error:(id)arg2;	// IMP=0x000000000001d2e4
- (void)propFindTaskFinished:(id)arg1;	// IMP=0x000000000001cdfb
- (void)optionsTask:(id)arg1 error:(id)arg2;	// IMP=0x000000000001cd75
- (void)completeOptionsTask:(id)arg1 error:(id)arg2;	// IMP=0x000000000001c495
- (void)srvLookupTask:(id)arg1 error:(id)arg2;	// IMP=0x000000000001b420
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x000000000001b3a9
- (void)startPropfindTask:(id)arg1;	// IMP=0x000000000001af57
- (void)startOptionsTask:(id)arg1;	// IMP=0x000000000001ac44
- (void)startWellKnownFallbackHeadTask:(id)arg1 withURL:(id)arg2;	// IMP=0x000000000001a15e
- (void)startWellKnownLocationTask:(id)arg1 withURL:(id)arg2;	// IMP=0x00000000000197d0
- (void)startSRVLookup:(id)arg1 serviceString:(id)arg2;	// IMP=0x00000000000194a3
- (id)allDiscoveryPaths:(id)arg1;	// IMP=0x00000000000193ca
- (id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2;	// IMP=0x00000000000192ac
- (id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2;	// IMP=0x0000000000018a84
- (void)syncAway;	// IMP=0x0000000000018a72
- (void)startTaskGroup;	// IMP=0x000000000001716d
- (void)cancelTaskGroup;	// IMP=0x0000000000017009
- (void)taskGroupWillCancelWithError:(id)arg1;	// IMP=0x0000000000016f1d
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;	// IMP=0x0000000000016dfa
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8;	// IMP=0x0000000000016dc5
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPath:(id)arg7 potentialContextPaths:(id)arg8 requiredComplianceClass:(id)arg9;	// IMP=0x0000000000016bff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CoreDAVDiscoveryTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

