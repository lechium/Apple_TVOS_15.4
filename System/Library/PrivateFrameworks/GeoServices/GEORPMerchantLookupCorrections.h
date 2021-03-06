//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPMerchantLookupCorrections : PBCodable <NSCopying>
{
    _Bool _isCategoryIncorrect;	// 8 = 0x8
    _Bool _isMerchantIncorrect;	// 9 = 0x9
    _Bool _isOtherIssue;	// 10 = 0xa
    struct {
        unsigned int has_isCategoryIncorrect:1;
        unsigned int has_isMerchantIncorrect:1;
        unsigned int has_isOtherIssue:1;
    } _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e08d53
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e09347
- (unsigned long long)hash;	// IMP=0x0000000000e092c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e09194
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e090fe
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e09071
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e08fde
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e08fcf
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e08974
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e08962
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e0877d
- (id)jsonRepresentation;	// IMP=0x0000000000e0876e
- (id)dictionaryRepresentation;	// IMP=0x0000000000e085cf
- (id)description;	// IMP=0x0000000000e08520
@property(nonatomic) _Bool hasIsOtherIssue;
@property(nonatomic) _Bool isOtherIssue;
@property(nonatomic) _Bool hasIsMerchantIncorrect;
@property(nonatomic) _Bool isMerchantIncorrect;
@property(nonatomic) _Bool hasIsCategoryIncorrect;
@property(nonatomic) _Bool isCategoryIncorrect;

@end

