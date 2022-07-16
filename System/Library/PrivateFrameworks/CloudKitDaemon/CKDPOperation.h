//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier, NSData, NSString;

@interface CKDPOperation : PBCodable <NSCopying>
{
    CKDPIdentifier *_anonymousCKUserID;	// 8 = 0x8
    NSString *_operationUUID;	// 16 = 0x10
    NSData *_requestSignature;	// 24 = 0x18
    int _type;	// 32 = 0x20
    _Bool _last;	// 36 = 0x24
    _Bool _synchronousMode;	// 37 = 0x25
    struct {
        unsigned int type:1;
        unsigned int last:1;
        unsigned int synchronousMode:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000012c397
@property(retain, nonatomic) CKDPIdentifier *anonymousCKUserID; // @synthesize anonymousCKUserID=_anonymousCKUserID;
@property(retain, nonatomic) NSData *requestSignature; // @synthesize requestSignature=_requestSignature;
@property(nonatomic) _Bool last; // @synthesize last=_last;
@property(nonatomic) _Bool synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property(retain, nonatomic) NSString *operationUUID; // @synthesize operationUUID=_operationUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012c216
- (unsigned long long)hash;	// IMP=0x000000000012c143
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012bfac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012be8d
- (void)copyTo:(id)arg1;	// IMP=0x000000000012bdb2
- (void)writeTo:(id)arg1;	// IMP=0x000000000012bcc9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012bcbc
- (id)dictionaryRepresentation;	// IMP=0x000000000012b2c5
- (id)description;	// IMP=0x000000000012b216
@property(readonly, nonatomic) _Bool hasAnonymousCKUserID;
@property(readonly, nonatomic) _Bool hasRequestSignature;
@property(nonatomic) _Bool hasLast;
@property(nonatomic) _Bool hasSynchronousMode;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000012ab7c
- (id)typeAsString:(int)arg1;	// IMP=0x000000000012a739
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasOperationUUID;
- (id)_typeCKLogValue;	// IMP=0x000000000017c677

@end

