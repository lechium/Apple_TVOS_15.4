//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface DaemonPBFuseItemPreference : PBCodable
{
    long long _adamId;	// 8 = 0x8
    long long _createdOffsetMillis;	// 16 = 0x10
    NSString *_externalId;	// 24 = 0x18
    int _preference;	// 32 = 0x20
    int _preferenceType;	// 36 = 0x24
    struct {
        unsigned int adamId:1;
        unsigned int createdOffsetMillis:1;
        unsigned int preferenceType:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001c2ebf
@property(nonatomic) long long createdOffsetMillis; // @synthesize createdOffsetMillis=_createdOffsetMillis;
@property(retain, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
- (long long)adamId;	// IMP=0x00100000001c2e78
@property(nonatomic) int preference; // @synthesize preference=_preference;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001c2da5
- (unsigned long long)hash;	// IMP=0x00100000001c2cf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001c2bc6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001c2ae6
- (void)writeTo:(id)arg1;	// IMP=0x00100000001c2a21
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001c2a14
- (id)dictionaryRepresentation;	// IMP=0x00100000001c2466
- (id)description;	// IMP=0x00100000001c23b7
@property(nonatomic) _Bool hasPreferenceType;
@property(nonatomic) int preferenceType; // @synthesize preferenceType=_preferenceType;
@property(nonatomic) _Bool hasCreatedOffsetMillis;
@property(readonly, nonatomic) _Bool hasExternalId;
@property(nonatomic) _Bool hasAdamId;
- (void)setAdamId:(long long)arg1;	// IMP=0x00100000001c22a8

@end

