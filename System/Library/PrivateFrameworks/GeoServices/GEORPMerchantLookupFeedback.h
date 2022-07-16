//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPMerchantLookupContext, GEORPMerchantLookupCorrections, PBDataReader, PBUnknownFields;

@interface GEORPMerchantLookupFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEORPMerchantLookupContext *_context;	// 24 = 0x18
    GEORPMerchantLookupCorrections *_corrections;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    CDStruct_c6f0c348 _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000465283
- (void).cxx_destruct;	// IMP=0x0000000000465a55
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000465a04
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000046586b
- (unsigned long long)hash;	// IMP=0x000000000046580f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046571e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046555c
- (void)copyTo:(id)arg1;	// IMP=0x000000000046548e
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000046545d
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000046544b
- (void)writeTo:(id)arg1;	// IMP=0x000000000046529f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000465290
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000465177
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000465165
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000464fbc
- (id)jsonRepresentation;	// IMP=0x0000000000464eaa
- (id)dictionaryRepresentation;	// IMP=0x0000000000464c2d
- (id)description;	// IMP=0x0000000000464b7e
@property(retain, nonatomic) GEORPMerchantLookupCorrections *corrections;
@property(readonly, nonatomic) _Bool hasCorrections;
@property(retain, nonatomic) GEORPMerchantLookupContext *context;
@property(readonly, nonatomic) _Bool hasContext;
- (id)initWithData:(id)arg1;	// IMP=0x000000000046425e
- (id)init;	// IMP=0x0000000000464202

@end
