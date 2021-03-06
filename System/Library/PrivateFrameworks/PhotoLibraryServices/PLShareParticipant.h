//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPersonNameComponents, NSString, PLShare;

@interface PLShareParticipant
{
}

+ (id)entityName;	// IMP=0x00000000002a3587
+ (id)_shareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x00000000002a33d0
+ (id)participantsWithUserIdentifiers:(id)arg1 inScope:(id)arg2 inPhotoLibrary:(id)arg3;	// IMP=0x00000000002a321c
+ (id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x00000000002a3157
+ (id)updateOrInsertWithCPLShareParticipant:(id)arg1 inShare:(id)arg2;	// IMP=0x00000000002a2ce3
+ (id)insertInPhotoLibrary:(id)arg1;	// IMP=0x00000000002a2b98
- (id)description;	// IMP=0x00000000002a2a05
@property(nonatomic) long long acceptanceStatus;
@property(nonatomic) long long role;
@property(nonatomic) long long permission;

// Remaining properties
@property(copy, nonatomic) NSString *emailAddress; // @dynamic emailAddress;
@property(nonatomic) _Bool isCurrentUser; // @dynamic isCurrentUser;
@property(copy, nonatomic) NSPersonNameComponents *nameComponents; // @dynamic nameComponents;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(retain, nonatomic) PLShare *share; // @dynamic share;
@property(copy, nonatomic) NSString *userIdentifier; // @dynamic userIdentifier;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end

