//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVDatabaseRecord-Protocol.h>

@class CKVOriginApp, NSString, NSUUID;

@interface CKVFTSRecord : NSObject <CKVDatabaseRecord>
{
    long long _fieldType;	// 8 = 0x8
    NSString *_fieldValue;	// 16 = 0x10
    CKVOriginApp *_originApp;	// 24 = 0x18
    long long _itemType;	// 32 = 0x20
    NSUUID *_recordId;	// 40 = 0x28
}

+ (id)genSQLCreateTable;	// IMP=0x00000000000dec01
+ (id)tableName;	// IMP=0x00000000000debe2
+ (id)recordFromDatabaseValueRow:(id)arg1;	// IMP=0x00000000000deb91
- (void).cxx_destruct;	// IMP=0x00000000000deb5e
@property(readonly, nonatomic) NSUUID *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) CKVOriginApp *originApp; // @synthesize originApp=_originApp;
@property(readonly, nonatomic) NSString *fieldValue; // @synthesize fieldValue=_fieldValue;
@property(readonly, nonatomic) long long fieldType; // @synthesize fieldType=_fieldType;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToFTSRecord:(id)arg1;	// IMP=0x00000000000de8a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000de83b
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000000de6f4
- (id)initWithDatabaseValueRow:(id)arg1;	// IMP=0x00000000000de55d
- (id)initWithFieldType:(long long)arg1 fieldValue:(id)arg2 originApp:(id)arg3 itemType:(long long)arg4 recordId:(id)arg5;	// IMP=0x00000000000de09b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

