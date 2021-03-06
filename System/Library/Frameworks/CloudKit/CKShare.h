//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKPropertiesDescription-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKRecordID, CKShareID, CKShareParticipant, NSArray, NSData, NSMutableArray, NSMutableSet, NSString, NSURL;

@interface CKShare <CKPropertiesDescription, NSSecureCoding, NSCopying>
{
    _Bool _encodeAllowsReadOnlyParticipantsToSeeEachOther;	// 8 = 0x8
    _Bool _allowsAnonymousPublicAccess;	// 9 = 0x9
    _Bool _serializePersonalInfo;	// 10 = 0xa
    long long _publicPermission;	// 16 = 0x10
    NSMutableSet *_addedParticipantIDs;	// 24 = 0x18
    NSMutableSet *_removedParticipantIDs;	// 32 = 0x20
    NSMutableArray *_lastFetchedParticipants;	// 40 = 0x28
    NSMutableArray *_allParticipants;	// 48 = 0x30
    long long _participantVisibility;	// 56 = 0x38
    long long _participantSelfRemovalBehavior;	// 64 = 0x40
    CKContainerID *_containerID;	// 72 = 0x48
    CKRecordID *_rootRecordID;	// 80 = 0x50
    NSData *_invitedProtectionData;	// 88 = 0x58
    NSString *_invitedProtectionEtag;	// 96 = 0x60
    NSString *_previousInvitedProtectionEtag;	// 104 = 0x68
    NSData *_publicProtectionData;	// 112 = 0x70
    NSString *_publicProtectionEtag;	// 120 = 0x78
    NSString *_previousPublicProtectionEtag;	// 128 = 0x80
    NSArray *_invitedKeysToRemove;	// 136 = 0x88
    CKShareID *_shareID;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b787f
- (void).cxx_destruct;	// IMP=0x00000000000b8654
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(nonatomic) _Bool serializePersonalInfo; // @synthesize serializePersonalInfo=_serializePersonalInfo;
@property(retain, nonatomic) NSArray *invitedKeysToRemove; // @synthesize invitedKeysToRemove=_invitedKeysToRemove;
@property(retain, nonatomic) NSString *previousPublicProtectionEtag; // @synthesize previousPublicProtectionEtag=_previousPublicProtectionEtag;
@property(retain, nonatomic) NSString *publicProtectionEtag; // @synthesize publicProtectionEtag=_publicProtectionEtag;
@property(retain, nonatomic) NSData *publicProtectionData; // @synthesize publicProtectionData=_publicProtectionData;
@property(retain, nonatomic) NSString *previousInvitedProtectionEtag; // @synthesize previousInvitedProtectionEtag=_previousInvitedProtectionEtag;
@property(retain, nonatomic) NSString *invitedProtectionEtag; // @synthesize invitedProtectionEtag=_invitedProtectionEtag;
@property(retain, nonatomic) NSData *invitedProtectionData; // @synthesize invitedProtectionData=_invitedProtectionData;
@property(copy, nonatomic) CKRecordID *rootRecordID; // @synthesize rootRecordID=_rootRecordID;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(nonatomic) _Bool allowsAnonymousPublicAccess; // @synthesize allowsAnonymousPublicAccess=_allowsAnonymousPublicAccess;
@property(nonatomic) long long participantSelfRemovalBehavior; // @synthesize participantSelfRemovalBehavior=_participantSelfRemovalBehavior;
@property(nonatomic) long long participantVisibility; // @synthesize participantVisibility=_participantVisibility;
@property(retain, nonatomic) NSMutableArray *allParticipants; // @synthesize allParticipants=_allParticipants;
@property(nonatomic) _Bool encodeAllowsReadOnlyParticipantsToSeeEachOther; // @synthesize encodeAllowsReadOnlyParticipantsToSeeEachOther=_encodeAllowsReadOnlyParticipantsToSeeEachOther;
@property(retain, nonatomic) NSMutableArray *lastFetchedParticipants; // @synthesize lastFetchedParticipants=_lastFetchedParticipants;
@property(retain, nonatomic) NSMutableSet *removedParticipantIDs; // @synthesize removedParticipantIDs=_removedParticipantIDs;
@property(retain, nonatomic) NSMutableSet *addedParticipantIDs; // @synthesize addedParticipantIDs=_addedParticipantIDs;
@property(nonatomic) long long publicPermission; // @synthesize publicPermission=_publicPermission;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b7ce4
- (void)encodeSystemFieldsWithCoder:(id)arg1;	// IMP=0x00000000000b7887
- (id)shareURL;	// IMP=0x00000000000b7664
@property(retain, nonatomic) NSData *publicSharingIdentity;
- (id)encryptedPublicSharingKey;	// IMP=0x00000000000b74e9
- (void)setWantsPublicSharingKey:(_Bool)arg1;	// IMP=0x00000000000b74ab
- (void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b7490
- (id)_copyWithoutPersonalInfo;	// IMP=0x00000000000b7460
- (void)_stripPersonalInfo;	// IMP=0x00000000000b7333
- (void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(_Bool)arg3 inContainer:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000b6d10
- (id)updateFromServerShare:(id)arg1;	// IMP=0x00000000000b63ad
- (void)registerFetchedParticipant:(id)arg1;	// IMP=0x00000000000b6325
- (void)resetFetchedParticipants;	// IMP=0x00000000000b62d2
- (_Bool)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2;	// IMP=0x00000000000b61cb
- (_Bool)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2;	// IMP=0x00000000000b5fa8
@property(readonly, copy, nonatomic) CKShareParticipant *currentUserParticipant;
- (id)removedParticipants;	// IMP=0x00000000000b5d2e
- (id)addedParticipants;	// IMP=0x00000000000b5c07
- (void)_removeParticipantBypassingChecks:(id)arg1;	// IMP=0x00000000000b5b11
- (void)removeParticipant:(id)arg1;	// IMP=0x00000000000b589d
- (void)_addParticipantBypassingChecks:(id)arg1;	// IMP=0x00000000000b55f5
- (void)addParticipant:(id)arg1;	// IMP=0x00000000000b5370
- (id)_knownParticipantEqualToParticipant:(id)arg1;	// IMP=0x00000000000b4942
@property(readonly, copy, nonatomic) CKShareParticipant *owner;
- (void)clearModifiedParticipants;	// IMP=0x00000000000b45f9
@property(readonly, copy, nonatomic) NSArray *participants;
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00000000000b43ef
- (_Bool)canHostServerURLInfo;	// IMP=0x00000000000b43dd
@property(readonly, nonatomic) _Bool isZoneWideShare;
- (_Bool)hasEncryptedData;	// IMP=0x00000000000b4360
- (id)redactedDescription;	// IMP=0x00000000000b434e
@property(readonly, copy) NSString *description;
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x00000000000b3f7e
- (id)copyWithOriginalValues;	// IMP=0x00000000000b3ba9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b3360
- (_Bool)allowsReadOnlyParticipantsToSeeEachOther;	// IMP=0x00000000000b3347
- (void)setAllowsReadOnlyParticipantsToSeeEachOther:(_Bool)arg1;	// IMP=0x00000000000b332f
- (void)_setPublicPermissionNoSideEffects:(long long)arg1;	// IMP=0x00000000000b331e
- (void)_removeAllParticipants;	// IMP=0x00000000000b2f66
- (void)_removePendingPrivateAndAdminParticipants;	// IMP=0x00000000000b2d12
- (void)_commonCKShareInit;	// IMP=0x00000000000b2c5d
- (void)_addOwnerParticipant;	// IMP=0x00000000000b2b5d
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;	// IMP=0x00000000000b2ad3
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;	// IMP=0x00000000000b2a49
- (id)initWithRecordType:(id)arg1;	// IMP=0x00000000000b29cc
- (id)init;	// IMP=0x00000000000b2958
- (id)_initWithShareRecordID:(id)arg1;	// IMP=0x00000000000b2902
- (id)initWithRecordZoneID:(id)arg1;	// IMP=0x00000000000b2849
- (id)initWithRootRecord:(id)arg1 shareID:(id)arg2;	// IMP=0x00000000000b2719
- (id)initWithRootRecord:(id)arg1;	// IMP=0x00000000000b2604

// Remaining properties
@property(readonly, copy, nonatomic) NSURL *URL; // @dynamic URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

