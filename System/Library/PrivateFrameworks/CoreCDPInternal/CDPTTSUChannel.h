//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPSecureChannelApprovingProxy-Protocol.h>
#import <CoreCDPInternal/CDPSecureChannelProxy-Protocol.h>

@class CUMessageSession, NSString;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy>
{
    CUMessageSession *_sharingSession;	// 8 = 0x8
    _Bool _approverBackupRecordsExist;	// 16 = 0x10
    unsigned long long _approveriCloudKeychainState;	// 24 = 0x18
    _Bool _sentInitialResponse;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000db9b
- (void)setApproveriCloudKeychainState:(unsigned long long)arg1;	// IMP=0x000000000000db91
- (void)setApproverBackupRecordsExist:(_Bool)arg1;	// IMP=0x000000000000db88
- (void)listenForPayloadsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d774
- (unsigned long long)approveriCloudKeychainState;	// IMP=0x000000000000d76a
- (_Bool)approverBackupRecordsExist;	// IMP=0x000000000000d761
- (void)sendPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d307
- (id)initWithContext:(id)arg1;	// IMP=0x000000000000d25d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

