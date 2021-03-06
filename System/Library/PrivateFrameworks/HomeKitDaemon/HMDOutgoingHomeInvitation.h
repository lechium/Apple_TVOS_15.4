//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>

@class HMDUser, NSArray, NSString, NSUUID;
@protocol HMFLocking;

@interface HMDOutgoingHomeInvitation <HMDBackingStoreObjectProtocol>
{
    id <HMFLocking> _lock;	// 96 = 0x60
    NSArray *_operationIdentifiers;	// 104 = 0x68
    NSUUID *_uuid;	// 112 = 0x70
    HMDUser *_user;	// 120 = 0x78
    NSString *_inviteeDestinationAddress;	// 128 = 0x80
    NSUUID *_messageIdentifier;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000092901
- (void).cxx_destruct;	// IMP=0x0000000000092012
@property(readonly, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) NSString *inviteeDestinationAddress; // @synthesize inviteeDestinationAddress=_inviteeDestinationAddress;
@property(retain, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x0000000000091d99
- (id)emptyModelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000091cdd
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000091b86
- (void)_transactionOutgoingInvitiationUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000000916ef
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000091657
@property(retain, nonatomic) NSArray *operationIdentifiers; // @synthesize operationIdentifiers=_operationIdentifiers;
- (void)updateInvitationState:(long long)arg1;	// IMP=0x00000000000913e2
- (void)notifyStateChangedForMessage:(id)arg1;	// IMP=0x000000000009105c
- (_Bool)refreshDisplayName;	// IMP=0x0000000000090f46
- (void)updateUser:(id)arg1;	// IMP=0x0000000000090f40
- (id)describeWithFormat;	// IMP=0x0000000000090e05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000090c31
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000090a12
@property(readonly, nonatomic) NSArray *accessoryInvitationsInformation;
- (void)cancel;	// IMP=0x000000000009098b
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) _Bool responseReceived;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)shortDescription;	// IMP=0x000000000009069e
- (id)initWithUUID:(id)arg1 invitee:(id)arg2 invitationState:(long long)arg3 forHome:(id)arg4 expiryDate:(id)arg5 messageIdentifier:(id)arg6;	// IMP=0x00000000000904ee
- (id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5;	// IMP=0x00000000000904c5

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

