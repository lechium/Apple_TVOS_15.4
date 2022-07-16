//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDate, CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying>
{
    CKDPDate *_lastMissingManateeIdentityErrorDate;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
    _Bool _userPurge;	// 24 = 0x18
    struct {
        unsigned int userPurge:1;
    } _has;	// 28 = 0x1c
}

+ (id)options;	// IMP=0x00000000000c7615
- (void).cxx_destruct;	// IMP=0x00000000000c7fc2
@property(retain, nonatomic) CKDPDate *lastMissingManateeIdentityErrorDate; // @synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate;
@property(nonatomic) _Bool userPurge; // @synthesize userPurge=_userPurge;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c7eb7
- (unsigned long long)hash;	// IMP=0x00000000000c7e43
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c7d43
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c7c82
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c7bff
- (Class)responseClass;	// IMP=0x00000000000c7bee
- (unsigned int)requestTypeCode;	// IMP=0x00000000000c7be3
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c7b61
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c7b54
- (id)dictionaryRepresentation;	// IMP=0x00000000000c7783
- (id)description;	// IMP=0x00000000000c76d4
@property(readonly, nonatomic) _Bool hasLastMissingManateeIdentityErrorDate;
@property(nonatomic) _Bool hasUserPurge;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end
