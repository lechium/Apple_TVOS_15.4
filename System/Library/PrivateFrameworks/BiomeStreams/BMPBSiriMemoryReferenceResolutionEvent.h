//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BMPBSiriMemoryReferenceResolutionEvent : PBCodable <NSCopying>
{
    NSMutableArray *_entityMapElements;	// 8 = 0x8
    NSString *_version;	// 16 = 0x10
}

+ (Class)entityMapElementsType;	// IMP=0x0000000000067d31
- (void).cxx_destruct;	// IMP=0x000000000006892c
@property(retain, nonatomic) NSMutableArray *entityMapElements; // @synthesize entityMapElements=_entityMapElements;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006876a
- (unsigned long long)hash;	// IMP=0x000000000006871d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000068655
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006847c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000068392
- (void)writeTo:(id)arg1;	// IMP=0x0000000000068246
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000068239
- (id)dictionaryRepresentation;	// IMP=0x0000000000067df1
- (id)description;	// IMP=0x0000000000067d42
- (id)entityMapElementsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000067d14
- (unsigned long long)entityMapElementsCount;	// IMP=0x0000000000067cf7
- (void)addEntityMapElements:(id)arg1;	// IMP=0x0000000000067c8d
- (void)clearEntityMapElements;	// IMP=0x0000000000067c70
@property(readonly, nonatomic) _Bool hasVersion;

@end

