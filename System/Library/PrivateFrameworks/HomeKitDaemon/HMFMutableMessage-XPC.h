//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMutableMessage.h>

@class HMDBackingStoreTransactionActions, HMDRemoteMessageSenderContext, NSString;

@interface HMFMutableMessage (XPC)
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;	// IMP=0x00000000005714d4
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000571483
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x000000000057146e
- (void)setRequiresWalletKeyEntitlement;	// IMP=0x00000000002eaa00
- (void)setSendPolicy:(id)arg1;	// IMP=0x00000000002ea9e7
- (void)setRequiresPersonManagerEntitlement;	// IMP=0x00000000002ea9c7
- (void)setRequiresMultiUserSetupEntitlement;	// IMP=0x00000000002ea9a7
- (void)setRequiresCameraClipsEntitlement;	// IMP=0x00000000002ea987
- (void)setRequiresSetupPayloadEntitlement;	// IMP=0x00000000002ea967
@property(nonatomic) _Bool requiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement;	// IMP=0x00000000002ea8f6
@property(nonatomic) _Bool requiresSPIEntitlement;
- (void)setRequiresSPIEntitlement;	// IMP=0x00000000002ea885
@property(retain) HMDBackingStoreTransactionActions *transactionResult;
@property(nonatomic, getter=isInternal) _Bool internal;
@property(retain, nonatomic) HMDRemoteMessageSenderContext *remoteSenderContext;
@property(nonatomic) unsigned long long remoteRestriction;
@property(retain, nonatomic) NSString *remoteToID;
@property(retain, nonatomic) NSString *remoteSourceID;
@property(nonatomic, getter=isSecureRemote) _Bool secureRemote;
@property(nonatomic, getter=isRemote) _Bool remote;
@end

