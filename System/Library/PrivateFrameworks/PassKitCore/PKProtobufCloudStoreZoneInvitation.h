//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PKProtobufCloudStoreZoneInvitation : PBCodable <NSCopying>
{
    double _dateCreated;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
    NSData *_shareInvitationToken;	// 24 = 0x18
    NSString *_shareURL;	// 32 = 0x20
    unsigned int _version;	// 40 = 0x28
    NSString *_zoneName;	// 48 = 0x30
    struct {
        unsigned int dateCreated:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000034ee3b
@property(nonatomic) double dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) NSData *shareInvitationToken; // @synthesize shareInvitationToken=_shareInvitationToken;
@property(retain, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000034eca0
- (unsigned long long)hash;	// IMP=0x000000000034eaeb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034e973
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034e852
- (void)copyTo:(id)arg1;	// IMP=0x000000000034e77d
- (void)writeTo:(id)arg1;	// IMP=0x000000000034e6a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000034e69c
- (id)dictionaryRepresentation;	// IMP=0x000000000034e24e
- (id)description;	// IMP=0x000000000034e19f
@property(nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasZoneName;
@property(readonly, nonatomic) _Bool hasContainerIdentifier;
@property(readonly, nonatomic) _Bool hasShareInvitationToken;
@property(readonly, nonatomic) _Bool hasShareURL;

@end

