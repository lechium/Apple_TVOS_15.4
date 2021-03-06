//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2NamedEntityDonationError : PBCodable <NSCopying>
{
    long long _errorCode;	// 8 = 0x8
    NSString *_errorMessage;	// 16 = 0x10
    int _source;	// 24 = 0x18
    struct {
        unsigned int errorCode:1;
        unsigned int source:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000dd5a0
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000dd4e9
- (unsigned long long)hash;	// IMP=0x00000000000dd482
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dd39b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dd2ed
- (void)copyTo:(id)arg1;	// IMP=0x00000000000dd26c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000dd1dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000dd1d0
- (id)dictionaryRepresentation;	// IMP=0x00000000000dcf33
- (id)description;	// IMP=0x00000000000dce84
@property(readonly, nonatomic) _Bool hasErrorMessage;
@property(nonatomic) _Bool hasErrorCode;
- (int)StringAsSource:(id)arg1;	// IMP=0x00000000000dcac0
- (id)sourceAsString:(int)arg1;	// IMP=0x00000000000dc912
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

