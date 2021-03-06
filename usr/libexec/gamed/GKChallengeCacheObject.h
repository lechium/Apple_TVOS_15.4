//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSOrderedSet, NSSet, NSString;

@interface GKChallengeCacheObject
{
}

+ (id)entityName;	// IMP=0x002000000006eb8c
+ (id)fetchSortDescriptors;	// IMP=0x001000000006db7a
+ (id)challengeWithServerRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x001000000006d7d9
+ (id)challengesWithChallengeIDs:(id)arg1 context:(id)arg2;	// IMP=0x001000000006d5bf
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x001000000006d5b2
+ (id)uniqueAttributeName;	// IMP=0x001000000006d5a5
- (void)invalidate;	// IMP=0x002000000006ed4b
- (_Bool)hasDetails;	// IMP=0x001000000006eb99
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x001000000006e40d
- (id)orderedSetOfCompatibleBundleIDs;	// IMP=0x001000000006e06e
- (id)internalRepresentation;	// IMP=0x001000000006dc1d
- (Class)classForInternalRepresentation;	// IMP=0x001000000006dc15

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *challengeID; // @dynamic challengeID;
@property(retain, nonatomic) NSOrderedSet *compatibleBundleIDs; // @dynamic compatibleBundleIDs;
@property(retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *detailsExpirationDate; // @dynamic detailsExpirationDate;
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSDate *issueDate; // @dynamic issueDate;
@property(retain, nonatomic) NSString *issuingPlayerID; // @dynamic issuingPlayerID;
@property(retain, nonatomic) NSSet *listEntries; // @dynamic listEntries;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *receivingPlayerID; // @dynamic receivingPlayerID;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(readonly) Class superclass;
@property(nonatomic) _Bool wasViewed; // @dynamic wasViewed;

@end

