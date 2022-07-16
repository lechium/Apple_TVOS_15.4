//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPFeedbackFieldOptionAnnotations : PBCodable <NSCopying>
{
    NSString *_keyString;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000db4d75
- (void).cxx_destruct;	// IMP=0x0000000000db4fef
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000db4f80
- (unsigned long long)hash;	// IMP=0x0000000000db4f45
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000db4e82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000db4e0a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000db4db5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000db4d91
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000db4d82
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000db4d15
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000db4d03
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000db4c0c
- (id)jsonRepresentation;	// IMP=0x0000000000db4bfd
- (id)dictionaryRepresentation;	// IMP=0x0000000000db4b42
- (id)description;	// IMP=0x0000000000db4a93
@property(retain, nonatomic) NSString *keyString;
@property(readonly, nonatomic) _Bool hasKeyString;

@end
