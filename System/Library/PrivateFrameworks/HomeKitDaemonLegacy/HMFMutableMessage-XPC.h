//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMutableMessage.h>

@class HMDBackingStoreTransactionActions, HMDRemoteMessageSenderContext, NSString;

@interface HMFMutableMessage (XPC)
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;	// IMP=0x00000000005132ab
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000051325a
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x0000000000513245
- (void)setRequiresWalletKeyEntitlement;	// IMP=0x00000000002bd5d0
- (void)setSendPolicy:(id)arg1;	// IMP=0x00000000002bd5b7
- (void)setRequiresPersonManagerEntitlement;	// IMP=0x00000000002bd597
- (void)setRequiresMultiUserSetupEntitlement;	// IMP=0x00000000002bd577
- (void)setRequiresCameraClipsEntitlement;	// IMP=0x00000000002bd557
- (void)setRequiresSetupPayloadEntitlement;	// IMP=0x00000000002bd537
@property(nonatomic) _Bool requiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement;	// IMP=0x00000000002bd4c6
@property(nonatomic) _Bool requiresSPIEntitlement;
- (void)setRequiresSPIEntitlement;	// IMP=0x00000000002bd455
@property(retain) HMDBackingStoreTransactionActions *transactionResult;
@property(nonatomic, getter=isInternal) _Bool internal;
@property(retain, nonatomic) HMDRemoteMessageSenderContext *remoteSenderContext;
@property(nonatomic) unsigned long long remoteRestriction;
@property(retain, nonatomic) NSString *remoteToID;
@property(retain, nonatomic) NSString *remoteSourceID;
@property(nonatomic, getter=isSecureRemote) _Bool secureRemote;
@property(nonatomic, getter=isRemote) _Bool remote;
@end

