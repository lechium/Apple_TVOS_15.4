//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class Channel, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ReceivedInvitation : NSManagedObject
{
}

+ (id)statusTypeIdentifierKeyPath;	// IMP=0x000000000002f581
+ (id)senderHandleKeyPath;	// IMP=0x000000000002f574
+ (id)dateInvitationCreatedKeyPath;	// IMP=0x000000000002f567
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x000000000002f68a
+ (id)predicateForSenderHandleString:(id)arg1;	// IMP=0x000000000002f5f0
+ (id)predicateForSenderHandle:(id)arg1;	// IMP=0x000000000002f58e
+ (id)sortDescriptorForSenderHandleOrderedAscending:(_Bool)arg1;	// IMP=0x000000000002f793
+ (id)sortDescriptorForDateInvitationCreatedOrderedAscending:(_Bool)arg1;	// IMP=0x000000000002f724
+ (id)fetchRequest;	// IMP=0x000000000003eddd

// Remaining properties
@property(retain, nonatomic) Channel *channel; // @dynamic channel;
@property(copy, nonatomic) NSDate *dateInvitationCreated; // @dynamic dateInvitationCreated;
@property(retain, nonatomic) NSData *incomingRatchetState; // @dynamic incomingRatchetState;
@property(copy, nonatomic) NSString *invitationIdentifier; // @dynamic invitationIdentifier;
@property(retain, nonatomic) NSData *invitationPayload; // @dynamic invitationPayload;
@property(copy, nonatomic) NSString *invitedHandle; // @dynamic invitedHandle;
@property(copy, nonatomic) NSString *senderHandle; // @dynamic senderHandle;
@property(copy, nonatomic) NSString *statusTypeIdentifier; // @dynamic statusTypeIdentifier;

@end

