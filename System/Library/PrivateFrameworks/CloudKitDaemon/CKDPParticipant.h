//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPContactInformation, CKDPDate, CKDPIdentifier, CKDPProtectionInfo, NSData;

@interface CKDPParticipant : PBCodable <NSCopying>
{
    long long _acceptTimestamp;	// 8 = 0x8
    CKDPDate *_acceptedTimestampDate;	// 16 = 0x10
    CKDPContactInformation *_contactInformation;	// 24 = 0x18
    CKDPDate *_inviteTimestampDate;	// 32 = 0x20
    CKDPIdentifier *_inviterId;	// 40 = 0x28
    int _keyHealth;	// 48 = 0x30
    int _outOfNetworkKeyType;	// 52 = 0x34
    NSData *_outOfNetworkPrivateKey;	// 56 = 0x38
    CKDPIdentifier *_participantId;	// 64 = 0x40
    int _participantType;	// 72 = 0x48
    int _permission;	// 76 = 0x4c
    CKDPProtectionInfo *_protectionInfo;	// 80 = 0x50
    NSData *_protectionInfoPublicKey;	// 88 = 0x58
    CKDPProtectionInfo *_publicKey;	// 96 = 0x60
    int _publicKeyVersion;	// 104 = 0x68
    int _state;	// 108 = 0x6c
    CKDPIdentifier *_userId;	// 112 = 0x70
    _Bool _acceptedInProcess;	// 120 = 0x78
    _Bool _createdInProcess;	// 121 = 0x79
    _Bool _isAnonymousInvitedParticipant;	// 122 = 0x7a
    _Bool _isInNetwork;	// 123 = 0x7b
    _Bool _isOrgUser;	// 124 = 0x7c
    struct {
        unsigned int acceptTimestamp:1;
        unsigned int keyHealth:1;
        unsigned int outOfNetworkKeyType:1;
        unsigned int participantType:1;
        unsigned int permission:1;
        unsigned int publicKeyVersion:1;
        unsigned int state:1;
        unsigned int acceptedInProcess:1;
        unsigned int createdInProcess:1;
        unsigned int isAnonymousInvitedParticipant:1;
        unsigned int isInNetwork:1;
        unsigned int isOrgUser:1;
    } _has;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000233d8d
@property(nonatomic) _Bool isAnonymousInvitedParticipant; // @synthesize isAnonymousInvitedParticipant=_isAnonymousInvitedParticipant;
@property(retain, nonatomic) CKDPDate *inviteTimestampDate; // @synthesize inviteTimestampDate=_inviteTimestampDate;
@property(retain, nonatomic) NSData *protectionInfoPublicKey; // @synthesize protectionInfoPublicKey=_protectionInfoPublicKey;
@property(nonatomic) _Bool isOrgUser; // @synthesize isOrgUser=_isOrgUser;
@property(retain, nonatomic) CKDPDate *acceptedTimestampDate; // @synthesize acceptedTimestampDate=_acceptedTimestampDate;
@property(nonatomic) _Bool isInNetwork; // @synthesize isInNetwork=_isInNetwork;
@property(nonatomic) _Bool acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(nonatomic) int outOfNetworkKeyType; // @synthesize outOfNetworkKeyType=_outOfNetworkKeyType;
@property(retain, nonatomic) NSData *outOfNetworkPrivateKey; // @synthesize outOfNetworkPrivateKey=_outOfNetworkPrivateKey;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(nonatomic) long long acceptTimestamp; // @synthesize acceptTimestamp=_acceptTimestamp;
@property(retain, nonatomic) CKDPProtectionInfo *publicKey; // @synthesize publicKey=_publicKey;
@property(nonatomic) _Bool createdInProcess; // @synthesize createdInProcess=_createdInProcess;
@property(retain, nonatomic) CKDPIdentifier *inviterId; // @synthesize inviterId=_inviterId;
@property(retain, nonatomic) CKDPContactInformation *contactInformation; // @synthesize contactInformation=_contactInformation;
@property(retain, nonatomic) CKDPIdentifier *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) CKDPIdentifier *participantId; // @synthesize participantId=_participantId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000023382f
- (unsigned long long)hash;	// IMP=0x00000000002334c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000232fc3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000232c72
- (void)copyTo:(id)arg1;	// IMP=0x00000000002329af
- (void)writeTo:(id)arg1;	// IMP=0x00000000002326d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002326cc
- (id)dictionaryRepresentation;	// IMP=0x000000000023143a
- (id)description;	// IMP=0x000000000023138b
@property(nonatomic) _Bool hasIsAnonymousInvitedParticipant;
@property(readonly, nonatomic) _Bool hasInviteTimestampDate;
- (int)StringAsKeyHealth:(id)arg1;	// IMP=0x000000000023128a
- (id)keyHealthAsString:(int)arg1;	// IMP=0x0000000000231223
@property(nonatomic) _Bool hasKeyHealth;
@property(nonatomic) int keyHealth; // @synthesize keyHealth=_keyHealth;
@property(readonly, nonatomic) _Bool hasProtectionInfoPublicKey;
@property(nonatomic) _Bool hasIsOrgUser;
@property(readonly, nonatomic) _Bool hasAcceptedTimestampDate;
@property(nonatomic) _Bool hasIsInNetwork;
@property(nonatomic) _Bool hasAcceptedInProcess;
@property(nonatomic) _Bool hasPublicKeyVersion;
@property(nonatomic) int publicKeyVersion; // @synthesize publicKeyVersion=_publicKeyVersion;
@property(nonatomic) _Bool hasOutOfNetworkKeyType;
@property(readonly, nonatomic) _Bool hasOutOfNetworkPrivateKey;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(nonatomic) _Bool hasAcceptTimestamp;
@property(readonly, nonatomic) _Bool hasPublicKey;
@property(nonatomic) _Bool hasCreatedInProcess;
@property(readonly, nonatomic) _Bool hasInviterId;
- (int)StringAsPermission:(id)arg1;	// IMP=0x0000000000230e65
- (id)permissionAsString:(int)arg1;	// IMP=0x0000000000230dfe
@property(nonatomic) _Bool hasPermission;
@property(nonatomic) int permission; // @synthesize permission=_permission;
- (int)StringAsParticipantType:(id)arg1;	// IMP=0x0000000000230cdc
- (id)participantTypeAsString:(int)arg1;	// IMP=0x0000000000230c5c
@property(nonatomic) _Bool hasParticipantType;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
- (int)StringAsState:(id)arg1;	// IMP=0x0000000000230b3c
- (id)stateAsString:(int)arg1;	// IMP=0x0000000000230abd
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool hasContactInformation;
@property(readonly, nonatomic) _Bool hasUserId;
@property(readonly, nonatomic) _Bool hasParticipantId;
- (id)_permissionCKLogValue;	// IMP=0x000000000017d6b0
- (id)_participantTypeCKLogValue;	// IMP=0x000000000017d624
- (id)_stateCKLogValue;	// IMP=0x000000000017d598

@end

