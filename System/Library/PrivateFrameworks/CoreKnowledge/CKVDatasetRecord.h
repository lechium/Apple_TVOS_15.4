//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVDatabaseRecord-Protocol.h>

@class CKVOriginApp, NSNumber, NSString;

@interface CKVDatasetRecord : NSObject <CKVDatabaseRecord>
{
    NSNumber *_datasetRowId;	// 8 = 0x8
    CKVOriginApp *_originApp;	// 16 = 0x10
    long long _itemType;	// 24 = 0x18
    NSNumber *_validTo;	// 32 = 0x20
}

+ (id)tableName;	// IMP=0x00000000000ebdbc
+ (id)genSQLCreateTable;	// IMP=0x00000000000ebd6e
+ (id)recordFromDatabaseValueRow:(id)arg1;	// IMP=0x00000000000ebd1d
- (void).cxx_destruct;	// IMP=0x00000000000ebcea
@property(readonly, nonatomic) NSNumber *validTo; // @synthesize validTo=_validTo;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) CKVOriginApp *originApp; // @synthesize originApp=_originApp;
@property(readonly, nonatomic) NSNumber *datasetRowId; // @synthesize datasetRowId=_datasetRowId;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDatasetRecord:(id)arg1;	// IMP=0x00000000000ebb0a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ebaa2
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000000eb9a3
- (id)initWithDatabaseValueRow:(id)arg1;	// IMP=0x00000000000eb864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

