//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOWiFiESS : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _attributes;	// 16 = 0x10
    CDStruct_95bda58d _authTraits;	// 40 = 0x28
    NSMutableArray *_bss;	// 64 = 0x40
    NSString *_identifier;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
    NSMutableArray *_ownerIdentifiers;	// 88 = 0x58
    NSMutableArray *_qualities;	// 96 = 0x60
    long long _uniqueIdentifier;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    int _networkType;	// 124 = 0x7c
    int _venueGroup;	// 128 = 0x80
    unsigned int _venueType;	// 132 = 0x84
    struct {
        unsigned int has_uniqueIdentifier:1;
        unsigned int has_networkType:1;
        unsigned int has_venueGroup:1;
        unsigned int has_venueType:1;
        unsigned int read_attributes:1;
        unsigned int read_authTraits:1;
        unsigned int read_bss:1;
        unsigned int read_identifier:1;
        unsigned int read_name:1;
        unsigned int read_ownerIdentifiers:1;
        unsigned int read_qualities:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 136 = 0x88
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009e17c7
+ (Class)ownerIdentifierType;	// IMP=0x00000000009defca
+ (Class)qualitiesType;	// IMP=0x00000000009de90c
+ (Class)bssType;	// IMP=0x00000000009de19f
- (void).cxx_destruct;	// IMP=0x00000000009e38af
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009e33d6
- (unsigned long long)hash;	// IMP=0x00000000009e3262
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009e2ff1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009e29a1
- (void)copyTo:(id)arg1;	// IMP=0x00000000009e2599
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000009e2448
- (void)writeTo:(id)arg1;	// IMP=0x00000000009e1db7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009e1da8
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009e1514
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009e1502
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009e0357
- (id)jsonRepresentation;	// IMP=0x00000000009e0348
- (id)dictionaryRepresentation;	// IMP=0x00000000009df803
- (id)description;	// IMP=0x00000000009df754
@property(nonatomic) _Bool hasVenueType;
@property(nonatomic) unsigned int venueType;
- (int)StringAsVenueGroup:(id)arg1;	// IMP=0x00000000009df534
- (id)venueGroupAsString:(int)arg1;	// IMP=0x00000000009df44a
@property(nonatomic) _Bool hasVenueGroup;
@property(nonatomic) int venueGroup;
- (int)StringAsNetworkType:(id)arg1;	// IMP=0x00000000009df17c
- (id)networkTypeAsString:(int)arg1;	// IMP=0x00000000009df04d
@property(nonatomic) _Bool hasNetworkType;
@property(nonatomic) int networkType;
- (id)ownerIdentifierAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009def99
- (unsigned long long)ownerIdentifiersCount;	// IMP=0x00000000009def6d
- (void)addOwnerIdentifier:(id)arg1;	// IMP=0x00000000009deeb8
- (void)clearOwnerIdentifiers;	// IMP=0x00000000009dee8f
@property(retain, nonatomic) NSMutableArray *ownerIdentifiers;
@property(nonatomic) _Bool hasUniqueIdentifier;
@property(nonatomic) long long uniqueIdentifier;
- (int)StringAsAttributes:(id)arg1;	// IMP=0x00000000009dec20
- (id)attributesAsString:(int)arg1;	// IMP=0x00000000009deb89
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000009deb65
- (int)attributesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009dea8f
- (void)addAttributes:(int)arg1;	// IMP=0x00000000009dea54
- (void)clearAttributes;	// IMP=0x00000000009dea36
@property(readonly, nonatomic) int *attributes;
@property(readonly, nonatomic) unsigned long long attributesCount;
- (id)qualitiesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009de8db
- (unsigned long long)qualitiesCount;	// IMP=0x00000000009de8af
- (void)addQualities:(id)arg1;	// IMP=0x00000000009de7fa
- (void)clearQualities;	// IMP=0x00000000009de7d1
@property(retain, nonatomic) NSMutableArray *qualities;
- (int)StringAsAuthTraits:(id)arg1;	// IMP=0x00000000009de5e8
- (id)authTraitsAsString:(int)arg1;	// IMP=0x00000000009de55e
- (void)setAuthTraits:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000009de53a
- (int)authTraitsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009de464
- (void)addAuthTraits:(int)arg1;	// IMP=0x00000000009de429
- (void)clearAuthTraits;	// IMP=0x00000000009de40b
@property(readonly, nonatomic) int *authTraits;
@property(readonly, nonatomic) unsigned long long authTraitsCount;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (id)bssAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009de16e
- (unsigned long long)bssCount;	// IMP=0x00000000009de142
- (void)addBss:(id)arg1;	// IMP=0x00000000009de08c
- (void)clearBss;	// IMP=0x00000000009de062
@property(retain, nonatomic) NSMutableArray *bss;
@property(retain, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;	// IMP=0x00000000009dcdba
- (id)initWithData:(id)arg1;	// IMP=0x00000000009dcd5e
- (id)init;	// IMP=0x00000000009dcd02

@end
