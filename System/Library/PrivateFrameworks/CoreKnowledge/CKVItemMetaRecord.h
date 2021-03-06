//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVDatabaseRecord-Protocol.h>

@class NSNumber, NSString, NSUUID;

@interface CKVItemMetaRecord : NSObject <CKVDatabaseRecord>
{
    NSNumber *_datasetRowId;	// 8 = 0x8
    NSNumber *_itemIdHash;	// 16 = 0x10
    NSNumber *_itemBufferHash;	// 24 = 0x18
    NSNumber *_validFrom;	// 32 = 0x20
    NSNumber *_validTo;	// 40 = 0x28
    NSUUID *_recordId;	// 48 = 0x30
}

+ (id)tableName;	// IMP=0x00000000000b94fd
+ (id)genSQLCreateTable;	// IMP=0x00000000000b947e
+ (id)recordFromDatabaseValueRow:(id)arg1;	// IMP=0x00000000000b942d
- (void).cxx_destruct;	// IMP=0x00000000000b93d9
@property(readonly, nonatomic) NSUUID *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) NSNumber *validTo; // @synthesize validTo=_validTo;
@property(readonly, nonatomic) NSNumber *validFrom; // @synthesize validFrom=_validFrom;
@property(readonly, nonatomic) NSNumber *itemBufferHash; // @synthesize itemBufferHash=_itemBufferHash;
@property(readonly, nonatomic) NSNumber *itemIdHash; // @synthesize itemIdHash=_itemIdHash;
@property(readonly, nonatomic) NSNumber *datasetRowId; // @synthesize datasetRowId=_datasetRowId;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToItemMetaRecord:(id)arg1;	// IMP=0x00000000000b912b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b90c3
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000000b8fa8
- (id)initWithDatabaseValueRow:(id)arg1;	// IMP=0x00000000000b8e23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

