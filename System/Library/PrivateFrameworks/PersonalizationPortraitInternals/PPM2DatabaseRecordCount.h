//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2DatabaseRecordCount : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    unsigned int _schemaVersion;	// 16 = 0x10
    NSString *_tableName;	// 24 = 0x18
    CDStruct_278ffb8f _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b4fec
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(nonatomic) unsigned int schemaVersion; // @synthesize schemaVersion=_schemaVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b4f0f
- (unsigned long long)hash;	// IMP=0x00000000000b4e8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b4d9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b4cd9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b4c56
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b4bd5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b4bc8
- (id)dictionaryRepresentation;	// IMP=0x00000000000b4ae3
- (id)description;	// IMP=0x00000000000b4a34
@property(readonly, nonatomic) _Bool hasActiveTreatments;
@property(readonly, nonatomic) _Bool hasTableName;
@property(nonatomic) _Bool hasSchemaVersion;

@end
