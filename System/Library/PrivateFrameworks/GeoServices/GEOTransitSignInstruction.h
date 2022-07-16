//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOComposedRouteStepTransitInstructionMerging-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitSignInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_commandFormatteds;	// 24 = 0x18
    NSMutableArray *_detailFormatteds;	// 32 = 0x20
    NSMutableArray *_noticeFormatteds;	// 40 = 0x28
    NSMutableArray *_priceFormatteds;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_commandFormatteds:1;
        unsigned int read_detailFormatteds:1;
        unsigned int read_noticeFormatteds:1;
        unsigned int read_priceFormatteds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000095cec7
+ (Class)priceFormattedType;	// IMP=0x000000000095ba0f
+ (Class)noticeFormattedType;	// IMP=0x000000000095b7aa
+ (Class)detailFormattedType;	// IMP=0x000000000095b545
+ (Class)commandFormattedType;	// IMP=0x000000000095b2e0
- (void).cxx_destruct;	// IMP=0x000000000095e8a3
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000095e49b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000095df65
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000095dd7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000095d6e8
- (void)copyTo:(id)arg1;	// IMP=0x000000000095d3f8
- (void)writeTo:(id)arg1;	// IMP=0x000000000095cee3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000095ced4
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000095cdbb
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000095cda9
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000095c57a
- (id)jsonRepresentation;	// IMP=0x000000000095c468
- (id)dictionaryRepresentation;	// IMP=0x000000000095bacf
@property(readonly, copy) NSString *description;
- (id)priceFormattedAtIndex:(unsigned long long)arg1;	// IMP=0x000000000095b9de
- (unsigned long long)priceFormattedsCount;	// IMP=0x000000000095b9b2
- (void)addPriceFormatted:(id)arg1;	// IMP=0x000000000095b8fe
- (void)clearPriceFormatteds;	// IMP=0x000000000095b8d6
@property(retain, nonatomic) NSMutableArray *priceFormatteds;
- (id)noticeFormattedAtIndex:(unsigned long long)arg1;	// IMP=0x000000000095b779
- (unsigned long long)noticeFormattedsCount;	// IMP=0x000000000095b74d
- (void)addNoticeFormatted:(id)arg1;	// IMP=0x000000000095b699
- (void)clearNoticeFormatteds;	// IMP=0x000000000095b671
@property(retain, nonatomic) NSMutableArray *noticeFormatteds;
- (id)detailFormattedAtIndex:(unsigned long long)arg1;	// IMP=0x000000000095b514
- (unsigned long long)detailFormattedsCount;	// IMP=0x000000000095b4e8
- (void)addDetailFormatted:(id)arg1;	// IMP=0x000000000095b434
- (void)clearDetailFormatteds;	// IMP=0x000000000095b40c
@property(retain, nonatomic) NSMutableArray *detailFormatteds;
- (id)commandFormattedAtIndex:(unsigned long long)arg1;	// IMP=0x000000000095b2af
- (unsigned long long)commandFormattedsCount;	// IMP=0x000000000095b283
- (void)addCommandFormatted:(id)arg1;	// IMP=0x000000000095b1cf
- (void)clearCommandFormatteds;	// IMP=0x000000000095b1a7
@property(retain, nonatomic) NSMutableArray *commandFormatteds;
- (id)initWithData:(id)arg1;	// IMP=0x000000000095a446
- (id)init;	// IMP=0x000000000095a3ea
- (void)_transit_mergeFrom:(id)arg1;	// IMP=0x00000000011dae99
- (_Bool)_transit_hasAnyFieldSet;	// IMP=0x00000000011dae31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

