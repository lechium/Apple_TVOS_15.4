//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NRPBSwitchRecordCollection, NSMutableArray;

@interface NRPBDeviceCollectionHistory : PBCodable <NSCopying>
{
    long long _startIndex;	// 8 = 0x8
    NSMutableArray *_historys;	// 16 = 0x10
    NRPBSwitchRecordCollection *_switchRecords;	// 24 = 0x18
    struct {
        unsigned int startIndex:1;
    } _has;	// 32 = 0x20
}

+ (Class)historyType;	// IMP=0x0000000000007c48
- (void).cxx_destruct;	// IMP=0x0000000000008aff
@property(retain, nonatomic) NRPBSwitchRecordCollection *switchRecords; // @synthesize switchRecords=_switchRecords;
@property(retain, nonatomic) NSMutableArray *historys; // @synthesize historys=_historys;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000088f4
- (unsigned long long)hash;	// IMP=0x0000000000008877
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008782
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008553
- (void)copyTo:(id)arg1;	// IMP=0x0000000000008449
- (void)writeTo:(id)arg1;	// IMP=0x00000000000082c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000082b7
- (id)dictionaryRepresentation;	// IMP=0x0000000000007d1d
- (id)description;	// IMP=0x0000000000007c6e
@property(readonly, nonatomic) _Bool hasSwitchRecords;
- (id)historyAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000007c2b
- (unsigned long long)historysCount;	// IMP=0x0000000000007c0e
- (void)addHistory:(id)arg1;	// IMP=0x0000000000007ba4
- (void)clearHistorys;	// IMP=0x0000000000007b87
@property(nonatomic) _Bool hasStartIndex;

@end
