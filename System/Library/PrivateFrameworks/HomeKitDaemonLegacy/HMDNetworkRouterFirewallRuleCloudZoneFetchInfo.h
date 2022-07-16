//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class CKServerChangeToken, HMBLocalZoneMirrorInput, NSSet, NSString;

@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo <HMFLogging>
{
    NSSet *_interestedRecordIDs;	// 8 = 0x8
    CKServerChangeToken *_changeToken;	// 16 = 0x10
    CKServerChangeToken *_originalChangeToken;	// 24 = 0x18
    HMBLocalZoneMirrorInput *_mirrorInput;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000007d04d0
- (void).cxx_destruct;	// IMP=0x00000000007d047d
@property(retain, nonatomic) HMBLocalZoneMirrorInput *mirrorInput; // @synthesize mirrorInput=_mirrorInput;
@property(readonly, nonatomic) CKServerChangeToken *originalChangeToken; // @synthesize originalChangeToken=_originalChangeToken;
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(readonly, nonatomic) NSSet *interestedRecordIDs; // @synthesize interestedRecordIDs=_interestedRecordIDs;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000007d037f
- (id)initWithOptions:(id)arg1 changeToken:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(_Bool)arg5 interestedRecordIDs:(id)arg6 mirrorInput:(id)arg7;	// IMP=0x00000000007d01c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

