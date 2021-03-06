//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSItem, NSString;

__attribute__((visibility("hidden")))
@interface CKKSMirrorEntry
{
    CKKSItem *_item;	// 8 = 0x8
    unsigned long long _wasCurrent;	// 16 = 0x10
}

+ (id)pcsMirrorKeysForService:(id)arg1 matchingKeys:(id)arg2 error:(id *)arg3;	// IMP=0x00400000000a9ca5
+ (id)counts:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a9a6e
+ (id)countsByParentKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a98a7
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000000a9773
+ (id)sqlColumns;	// IMP=0x00100000000a9715
+ (id)sqlTable;	// IMP=0x00100000000a9708
+ (id)allWithUUID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a95f5
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a9458
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a92bb
- (void).cxx_destruct;	// IMP=0x00200000000a92a8
@property unsigned long long wasCurrent; // @synthesize wasCurrent=_wasCurrent;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (id)sqlValues;	// IMP=0x00100000000a916f
- (id)whereClauseToFindSelf;	// IMP=0x00100000000a911f
@property(retain) NSString *uuid;
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000a8eab
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000a8dfc
- (id)description;	// IMP=0x00100000000a8cd5
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000000a8bfb
- (id)initWithCKKSItem:(id)arg1;	// IMP=0x00100000000a8b7e

@end

