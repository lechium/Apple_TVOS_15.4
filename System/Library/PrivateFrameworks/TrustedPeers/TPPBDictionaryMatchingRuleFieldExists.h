//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString;

@interface TPPBDictionaryMatchingRuleFieldExists : PBCodable <NSCopying>
{
    NSString *_fieldName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004118
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000040cf
- (unsigned long long)hash;	// IMP=0x00000000000040b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004018
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003fa0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003f76
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003f55
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003f48
- (id)dictionaryRepresentation;	// IMP=0x0000000000003eec
- (id)description;	// IMP=0x0000000000003e3d
@property(readonly, nonatomic) _Bool hasFieldName;
- (_Bool)matches:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024bdd

@end

