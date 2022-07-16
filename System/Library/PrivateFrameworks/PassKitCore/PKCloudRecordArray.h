//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_cloudRecordByDatabase;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d1162
- (void).cxx_destruct;	// IMP=0x00000000001d21a4
@property(retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase; // @synthesize cloudRecordByDatabase=_cloudRecordByDatabase;
- (id)allRecordIDs;	// IMP=0x00000000001d2086
- (id)allRecordNames;	// IMP=0x00000000001d1f83
- (id)allRecordsWithRecordType:(id)arg1;	// IMP=0x00000000001d1e50
- (id)allObjectsByDatabaseIdentifier;	// IMP=0x00000000001d1d4b
- (id)allObjects;	// IMP=0x00000000001d1c48
- (id)allItems;	// IMP=0x00000000001d1b45
- (void)applyCloudRecordArray:(id)arg1;	// IMP=0x00000000001d1a13
- (void)addCloudRecord:(id)arg1 forContainerDatabaseIdentifier:(id)arg2;	// IMP=0x00000000001d1936
- (long long)count;	// IMP=0x00000000001d1867
- (id)_descriptionWithDetailedOutput:(_Bool)arg1 includeItem:(_Bool)arg2;	// IMP=0x00000000001d12c1
- (id)description;	// IMP=0x00000000001d12ab
- (id)descriptionWithItem:(_Bool)arg1;	// IMP=0x00000000001d1292
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d126f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d116a
- (id)init;	// IMP=0x00000000001d110c

@end

