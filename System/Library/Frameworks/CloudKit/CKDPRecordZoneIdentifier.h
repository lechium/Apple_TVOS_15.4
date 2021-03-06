//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKit/NSCopying-Protocol.h>

@class CKDPIdentifier;

@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying>
{
    CKDPIdentifier *_ownerIdentifier;	// 8 = 0x8
    CKDPIdentifier *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000081b20
@property(retain, nonatomic) CKDPIdentifier *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(retain, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000081a45
- (unsigned long long)hash;	// IMP=0x00000000000819f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000081930
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000081892
- (void)copyTo:(id)arg1;	// IMP=0x000000000008182f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000817d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000817c5
- (id)dictionaryRepresentation;	// IMP=0x000000000008151a
- (id)description;	// IMP=0x000000000008146b
@property(readonly, nonatomic) _Bool hasOwnerIdentifier;
@property(readonly, nonatomic) _Bool hasValue;

@end

