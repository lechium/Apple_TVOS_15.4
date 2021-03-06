//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying>
{
    NSMutableArray *_mappings;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000097e6c8
+ (Class)mappingsType;	// IMP=0x000000000097de67
- (void).cxx_destruct;	// IMP=0x000000000097eedb
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000097ed6f
- (unsigned long long)hash;	// IMP=0x000000000097ed34
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000097ec71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000097eaae
- (void)copyTo:(id)arg1;	// IMP=0x000000000097e9db
- (void)writeTo:(id)arg1;	// IMP=0x000000000097e8ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000097e89c
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000097e449
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000097e437
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000097e1b4
- (id)jsonRepresentation;	// IMP=0x000000000097e1a5
- (id)dictionaryRepresentation;	// IMP=0x000000000097df27
- (id)description;	// IMP=0x000000000097de78
- (id)mappingsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000097de4a
- (unsigned long long)mappingsCount;	// IMP=0x000000000097de2d
- (void)addMappings:(id)arg1;	// IMP=0x000000000097ddc3
- (void)clearMappings;	// IMP=0x000000000097dda6
@property(retain, nonatomic) NSMutableArray *mappings;

@end

