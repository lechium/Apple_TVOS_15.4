//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPOplockFailure, CKDPUniqueFieldFailure;

@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying>
{
    CKDPOplockFailure *_oplockFailure;	// 8 = 0x8
    int _type;	// 16 = 0x10
    CKDPUniqueFieldFailure *_uniqueFieldFailure;	// 24 = 0x18
    CDStruct_f953fb60 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000fe534
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000fe483
- (unsigned long long)hash;	// IMP=0x00000000000fe403
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fe30e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fe24d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000fe1ca
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fe149
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fe13c
- (id)dictionaryRepresentation;	// IMP=0x00000000000fd87a
- (id)description;	// IMP=0x00000000000fd7cb
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000fcda8
- (id)typeAsString:(int)arg1;	// IMP=0x00000000000fc8a3
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) CKDPOplockFailure *oplockFailure;
@property(readonly, nonatomic) _Bool hasOplockFailure;
@property(retain, nonatomic) CKDPUniqueFieldFailure *uniqueFieldFailure;
@property(readonly, nonatomic) _Bool hasUniqueFieldFailure;
- (id)_typeCKLogValue;	// IMP=0x000000000017cc94

@end

