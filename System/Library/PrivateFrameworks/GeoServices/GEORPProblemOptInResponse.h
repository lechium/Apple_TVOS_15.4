//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEORPProblemOptInResponse : PBCodable <NSCopying>
{
    int _statusCode;	// 8 = 0x8
    CDStruct_ade9d5f7 _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e34abd
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e350bb
- (unsigned long long)hash;	// IMP=0x0000000000e35074
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e34fb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e34f57
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e34f02
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e34ed7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e34c88
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e34ab7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e34aa5
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e34843
- (id)jsonRepresentation;	// IMP=0x0000000000e34834
- (id)dictionaryRepresentation;	// IMP=0x0000000000e346ac
- (id)description;	// IMP=0x0000000000e345fd
- (int)StringAsStatusCode:(id)arg1;	// IMP=0x0000000000e344a4
- (id)statusCodeAsString:(int)arg1;	// IMP=0x0000000000e343ca
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;

@end

