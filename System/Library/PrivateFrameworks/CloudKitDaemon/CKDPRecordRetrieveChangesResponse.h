//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying>
{
    NSMutableArray *_changedAtomBatchs;	// 8 = 0x8
    NSMutableArray *_changedRecords;	// 16 = 0x10
    NSMutableArray *_changedShares;	// 24 = 0x18
    NSData *_clientChangeToken;	// 32 = 0x20
    int _status;	// 40 = 0x28
    NSData *_syncContinuationToken;	// 48 = 0x30
    _Bool _pendingArchivedRecords;	// 56 = 0x38
    struct {
        unsigned int status:1;
        unsigned int pendingArchivedRecords:1;
    } _has;	// 60 = 0x3c
}

+ (Class)changedAtomBatchType;	// IMP=0x000000000021577f
+ (Class)changedShareType;	// IMP=0x0000000000215664
+ (Class)changedRecordType;	// IMP=0x00000000002153fd
- (void).cxx_destruct;	// IMP=0x0000000000217556
@property(retain, nonatomic) NSMutableArray *changedAtomBatchs; // @synthesize changedAtomBatchs=_changedAtomBatchs;
@property(nonatomic) _Bool pendingArchivedRecords; // @synthesize pendingArchivedRecords=_pendingArchivedRecords;
@property(retain, nonatomic) NSMutableArray *changedShares; // @synthesize changedShares=_changedShares;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
@property(retain, nonatomic) NSMutableArray *changedRecords; // @synthesize changedRecords=_changedRecords;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002170d7
- (unsigned long long)hash;	// IMP=0x0000000000216fd5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000216e0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021693f
- (void)copyTo:(id)arg1;	// IMP=0x00000000002166c3
- (void)writeTo:(id)arg1;	// IMP=0x000000000021634d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000216340
- (id)dictionaryRepresentation;	// IMP=0x000000000021583f
- (id)description;	// IMP=0x0000000000215790
- (id)changedAtomBatchAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000215762
- (unsigned long long)changedAtomBatchsCount;	// IMP=0x0000000000215745
- (void)addChangedAtomBatch:(id)arg1;	// IMP=0x00000000002156db
- (void)clearChangedAtomBatchs;	// IMP=0x00000000002156be
@property(nonatomic) _Bool hasPendingArchivedRecords;
- (id)changedShareAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000215647
- (unsigned long long)changedSharesCount;	// IMP=0x000000000021562a
- (void)addChangedShare:(id)arg1;	// IMP=0x00000000002155c0
- (void)clearChangedShares;	// IMP=0x00000000002155a3
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000215506
- (id)statusAsString:(int)arg1;	// IMP=0x000000000021549f
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasClientChangeToken;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;
- (id)changedRecordAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002153e0
- (unsigned long long)changedRecordsCount;	// IMP=0x00000000002153c3
- (void)addChangedRecord:(id)arg1;	// IMP=0x0000000000215359
- (void)clearChangedRecords;	// IMP=0x000000000021533c

@end
