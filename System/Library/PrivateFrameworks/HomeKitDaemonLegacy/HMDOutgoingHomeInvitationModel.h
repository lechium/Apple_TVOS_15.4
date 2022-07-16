//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface HMDOutgoingHomeInvitationModel
{
}

+ (id)properties;	// IMP=0x00000000000908ac
- (id)dependentUUIDs;	// IMP=0x00000000000903fe

// Remaining properties
@property(retain, nonatomic) NSDate *expiryDate; // @dynamic expiryDate;
@property(retain, nonatomic) NSNumber *invitationState; // @dynamic invitationState;
@property(retain, nonatomic) NSString *inviteeDestinationAddress; // @dynamic inviteeDestinationAddress;
@property(retain, nonatomic) NSString *messageIdentifier; // @dynamic messageIdentifier;
@property(retain, nonatomic) NSArray *operationIdentifiers; // @dynamic operationIdentifiers;
@property(retain, nonatomic) NSArray *operations; // @dynamic operations;
@property(retain, nonatomic) NSNumber *responseReceived; // @dynamic responseReceived;
@property(retain, nonatomic) NSDictionary *user; // @dynamic user;

@end

