//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEORPFeedbackTextListField : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_addeds;	// 16 = 0x10
    NSMutableArray *_originals;	// 24 = 0x18
    NSMutableArray *_removeds;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    CDStruct_c0dca870 _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000dce6fb
+ (Class)originalType;	// IMP=0x0000000000dcde42
+ (Class)removedType;	// IMP=0x0000000000dcdbdd
+ (Class)addedType;	// IMP=0x0000000000dcd978
- (void).cxx_destruct;	// IMP=0x0000000000dcf7c0
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000dcf470
- (unsigned long long)hash;	// IMP=0x0000000000dcf3f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dcf2cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dced94
- (void)copyTo:(id)arg1;	// IMP=0x0000000000dceb37
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dce717
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dce708
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000dce5ef
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000dce5e2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000dce046
- (id)jsonRepresentation;	// IMP=0x0000000000dce03c
- (id)dictionaryRepresentation;	// IMP=0x0000000000dcdf02
- (id)description;	// IMP=0x0000000000dcde53
- (id)originalAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dcde11
- (unsigned long long)originalsCount;	// IMP=0x0000000000dcdde5
- (void)addOriginal:(id)arg1;	// IMP=0x0000000000dcdd31
- (void)clearOriginals;	// IMP=0x0000000000dcdd09
@property(retain, nonatomic) NSMutableArray *originals;
- (id)removedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dcdbac
- (unsigned long long)removedsCount;	// IMP=0x0000000000dcdb80
- (void)addRemoved:(id)arg1;	// IMP=0x0000000000dcdacc
- (void)clearRemoveds;	// IMP=0x0000000000dcdaa4
@property(retain, nonatomic) NSMutableArray *removeds;
- (id)addedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dcd947
- (unsigned long long)addedsCount;	// IMP=0x0000000000dcd91b
- (void)addAdded:(id)arg1;	// IMP=0x0000000000dcd867
- (void)clearAddeds;	// IMP=0x0000000000dcd83f
@property(retain, nonatomic) NSMutableArray *addeds;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000dcd2ad
- (id)init;	// IMP=0x0000000000dcd251

@end

