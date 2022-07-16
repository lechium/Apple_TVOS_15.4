//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEORPFeedbackULongListField : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_62a50c50 _addeds;	// 16 = 0x10
    CDStruct_62a50c50 _originals;	// 40 = 0x28
    CDStruct_62a50c50 _removeds;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    CDStruct_c0dca870 _flags;	// 100 = 0x64
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000dd6457
- (void).cxx_destruct;	// IMP=0x0000000000dd6c6a
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000dd6b32
- (unsigned long long)hash;	// IMP=0x0000000000dd6acf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dd69f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dd6874
- (void)copyTo:(id)arg1;	// IMP=0x0000000000dd666a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dd6473
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dd6464
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000dd634b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000dd633e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000dd5de2
- (id)jsonRepresentation;	// IMP=0x0000000000dd5dd8
- (id)dictionaryRepresentation;	// IMP=0x0000000000dd5c9d
- (id)description;	// IMP=0x0000000000dd5bee
- (void)setOriginals:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dd5bcc
- (unsigned long long)originalAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd5af6
- (void)addOriginal:(unsigned long long)arg1;	// IMP=0x0000000000dd5abd
- (void)clearOriginals;	// IMP=0x0000000000dd5aa1
@property(readonly, nonatomic) unsigned long long *originals;
@property(readonly, nonatomic) unsigned long long originalsCount;
- (void)setRemoveds:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dd5966
- (unsigned long long)removedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd5890
- (void)addRemoved:(unsigned long long)arg1;	// IMP=0x0000000000dd5857
- (void)clearRemoveds;	// IMP=0x0000000000dd583b
@property(readonly, nonatomic) unsigned long long *removeds;
@property(readonly, nonatomic) unsigned long long removedsCount;
- (void)setAddeds:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dd5700
- (unsigned long long)addedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd562a
- (void)addAdded:(unsigned long long)arg1;	// IMP=0x0000000000dd55f1
- (void)clearAddeds;	// IMP=0x0000000000dd55d5
@property(readonly, nonatomic) unsigned long long *addeds;
@property(readonly, nonatomic) unsigned long long addedsCount;
- (void)dealloc;	// IMP=0x0000000000dd4ca9
- (id)initWithData:(id)arg1;	// IMP=0x0000000000dd4c4d
- (id)init;	// IMP=0x0000000000dd4bf1

@end
