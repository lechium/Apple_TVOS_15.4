//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneModifying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, SCKZoneDiff, SCKZoneSchema;

@interface SCKZoneModificationSilo : NSObject <SCKZoneModifying>
{
    SCKZoneSchema *_zoneSchema;	// 8 = 0x8
    NSMutableDictionary *_originalRecordsByID;	// 16 = 0x10
    NSMutableDictionary *_workingRecordsByID;	// 24 = 0x18
    NSMutableDictionary *_recordsToSaveByID;	// 32 = 0x20
    NSMutableArray *_deletedRecordIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000335e
@property(retain, nonatomic) NSMutableArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(retain, nonatomic) NSMutableDictionary *recordsToSaveByID; // @synthesize recordsToSaveByID=_recordsToSaveByID;
@property(retain, nonatomic) NSMutableDictionary *workingRecordsByID; // @synthesize workingRecordsByID=_workingRecordsByID;
@property(retain, nonatomic) NSMutableDictionary *originalRecordsByID; // @synthesize originalRecordsByID=_originalRecordsByID;
@property(retain, nonatomic) SCKZoneSchema *zoneSchema; // @synthesize zoneSchema=_zoneSchema;
- (_Bool)_shouldAssertRecordValidity;	// IMP=0x000000000000328c
@property(readonly, copy, nonatomic) SCKZoneDiff *diff;
- (_Bool)recordExistsWithName:(id)arg1;	// IMP=0x0000000000003037
- (void)deleteRecordWithName:(id)arg1;	// IMP=0x0000000000002d1a
- (void)createOrUpdateRecordWithName:(id)arg1 recordType:(id)arg2 modifyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000298a
- (id)initWithZoneSchema:(id)arg1 contents:(id)arg2;	// IMP=0x000000000000264e

@end
