//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPDistributedValueIdentifier : PBCodable <NSCopying>
{
    CKDPIdentifier *_value;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000219b93
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000219ab8
- (unsigned long long)hash;	// IMP=0x0000000000219a6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002199a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000219905
- (void)copyTo:(id)arg1;	// IMP=0x00000000002198a2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000219845
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000219838
- (id)dictionaryRepresentation;	// IMP=0x000000000021955e
- (id)description;	// IMP=0x00000000002194af
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasValue;

@end

