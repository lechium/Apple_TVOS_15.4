//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString;

@interface PHCloudInvitation
{
    _Bool _isMine;	// 16 = 0x10
    int _invitationState;	// 20 = 0x14
    int _invitationStateLocal;	// 24 = 0x18
    NSString *_inviteeFirstName;	// 32 = 0x20
    NSString *_inviteeLastName;	// 40 = 0x28
    NSString *_inviteeFullName;	// 48 = 0x30
    NSDate *_inviteeSubscriptionDate;	// 56 = 0x38
    NSString *_albumGUID;	// 64 = 0x40
    NSString *_cloudGUID;	// 72 = 0x48
    NSNumber *_inviteeEmailKey;	// 80 = 0x50
    NSString *_inviteeHashedPersonID;	// 88 = 0x58
}

+ (id)fetchType;	// IMP=0x0000000000102fb9
+ (id)managedEntityName;	// IMP=0x0000000000102fac
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x0000000000102f49
- (void).cxx_destruct;	// IMP=0x0000000000102ed4
@property(readonly, nonatomic) NSString *inviteeHashedPersonID; // @synthesize inviteeHashedPersonID=_inviteeHashedPersonID;
@property(readonly, nonatomic) NSNumber *inviteeEmailKey; // @synthesize inviteeEmailKey=_inviteeEmailKey;
@property(readonly, nonatomic) int invitationStateLocal; // @synthesize invitationStateLocal=_invitationStateLocal;
@property(readonly, nonatomic) NSString *cloudGUID; // @synthesize cloudGUID=_cloudGUID;
@property(readonly, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(readonly, nonatomic) NSDate *inviteeSubscriptionDate; // @synthesize inviteeSubscriptionDate=_inviteeSubscriptionDate;
@property(readonly, nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(readonly, nonatomic) NSString *inviteeFullName; // @synthesize inviteeFullName=_inviteeFullName;
@property(readonly, nonatomic) NSString *inviteeLastName; // @synthesize inviteeLastName=_inviteeLastName;
@property(readonly, nonatomic) NSString *inviteeFirstName; // @synthesize inviteeFirstName=_inviteeFirstName;
@property(readonly, nonatomic) int invitationState; // @synthesize invitationState=_invitationState;
@property(readonly, nonatomic) NSString *invitationStateDescription;
@property(readonly, nonatomic) NSArray *inviteePhones;
@property(readonly, nonatomic) NSArray *inviteeEmails;
- (id)personInfoManager;	// IMP=0x0000000000102c00
- (id)inviteeDisplayNameIncludingEmail:(_Bool)arg1;	// IMP=0x00000000001027cd
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x0000000000102497
- (Class)changeRequestClass;	// IMP=0x000000000010248f

@end

