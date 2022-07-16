//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKFrozenReminderSource, NSNumber, NSString;

@interface EKPersistentSource
{
    EKFrozenReminderSource *_reminderSource;	// 8 = 0x8
}

+ (Class)meltedClass;	// IMP=0x00000000000fe2f8
+ (id)relations;	// IMP=0x00000000000fe206
+ (id)defaultPropertiesToLoad;	// IMP=0x00000000000fe10b
- (void).cxx_destruct;	// IMP=0x00000000000fe97b
@property(retain) EKFrozenReminderSource *reminderSource; // @synthesize reminderSource=_reminderSource;
- (id)description;	// IMP=0x00000000000fe85a
- (void)setOwnerName:(id)arg1;	// IMP=0x00000000000fe83e
- (id)ownerName;	// IMP=0x00000000000fe822
- (void)setDisplayOrder:(int)arg1;	// IMP=0x00000000000fe806
- (int)displayOrder;	// IMP=0x00000000000fe7ea
- (void)setDelegatedAccountOwnerStoreID:(id)arg1;	// IMP=0x00000000000fe7ce
- (id)delegatedAccountOwnerStoreID;	// IMP=0x00000000000fe7b2
- (void)setLastSyncErrorData:(id)arg1;	// IMP=0x00000000000fe796
- (id)lastSyncErrorData;	// IMP=0x00000000000fe77a
- (void)setLastSyncError:(unsigned long long)arg1;	// IMP=0x00000000000fe75e
- (unsigned long long)lastSyncError;	// IMP=0x00000000000fe73f
- (void)setLastSyncEndDate:(id)arg1;	// IMP=0x00000000000fe723
- (id)lastSyncEndDate;	// IMP=0x00000000000fe707
- (void)setLastSyncStartDate:(id)arg1;	// IMP=0x00000000000fe6eb
- (id)lastSyncStartDate;	// IMP=0x00000000000fe6cf
- (void)setFlags2:(int)arg1;	// IMP=0x00000000000fe6b3
- (int)flags2;	// IMP=0x00000000000fe697
- (void)setFlags:(int)arg1;	// IMP=0x00000000000fe67b
- (int)flags;	// IMP=0x00000000000fe65f
- (void)setShowsNotifications:(_Bool)arg1;	// IMP=0x00000000000fe643
- (_Bool)showsNotifications;	// IMP=0x00000000000fe627
@property(nonatomic) _Bool onlyCreatorCanModify; // @dynamic onlyCreatorCanModify;
- (void)setCreatorCodeSigningIdentity:(id)arg1;	// IMP=0x00000000000fe5d3
- (id)creatorCodeSigningIdentity;	// IMP=0x00000000000fe5b7
- (void)setCreatorBundleID:(id)arg1;	// IMP=0x00000000000fe59b
- (id)creatorBundleID;	// IMP=0x00000000000fe57f
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
- (void)setConstraintsName:(id)arg1;	// IMP=0x00000000000fe4f3
- (id)constraintsName;	// IMP=0x00000000000fe4d7
@property(copy, nonatomic) NSString *externalID; // @dynamic externalID;
@property(retain, nonatomic) NSString *UUID;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;	// IMP=0x00000000000fe44b
- (id)defaultAllDayAlarmOffset;	// IMP=0x00000000000fe42f
@property(copy, nonatomic) NSNumber *defaultAlarmOffset; // @dynamic defaultAlarmOffset;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)setStrictestEventPrivateValueRaw:(int)arg1;	// IMP=0x00000000000fe3a3
- (int)strictestEventPrivateValueRaw;	// IMP=0x00000000000fe387
- (void)setPreferredEventPrivateValueRaw:(int)arg1;	// IMP=0x00000000000fe36b
- (int)preferredEventPrivateValueRaw;	// IMP=0x00000000000fe34f
@property(nonatomic) long long sourceType; // @dynamic sourceType;
- (int)entityType;	// IMP=0x00000000000fe309
- (id)propertyKeyForUniqueIdentifier;	// IMP=0x00000000000fe0f7
- (id)constraints;	// IMP=0x000000000000c4a7

// Remaining properties
@property(nonatomic) int preferredEventPrivateValue; // @dynamic preferredEventPrivateValue;
@property(nonatomic) int strictestEventPrivateValue; // @dynamic strictestEventPrivateValue;

@end
