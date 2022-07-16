//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSString;

@interface CPLSuggestionPerson : PBCodable <NSCopying>
{
    NSString *_context;	// 8 = 0x8
    unsigned int _feature;	// 16 = 0x10
    NSString *_personIdentifier;	// 24 = 0x18
    unsigned int _type;	// 32 = 0x20
    CDStruct_35f57793 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000014d135
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) unsigned int feature; // @synthesize feature=_feature;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000014d02b
- (unsigned long long)hash;	// IMP=0x000000000014cf91
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014ce76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014cd98
- (void)copyTo:(id)arg1;	// IMP=0x000000000014ccf8
- (void)writeTo:(id)arg1;	// IMP=0x000000000014cc4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014cc40
- (id)dictionaryRepresentation;	// IMP=0x000000000014cafb
- (id)description;	// IMP=0x000000000014ca4c
@property(readonly, nonatomic) _Bool hasContext;
@property(nonatomic) _Bool hasFeature;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasPersonIdentifier;

@end

