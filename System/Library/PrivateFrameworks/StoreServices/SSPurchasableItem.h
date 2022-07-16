//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject
{
    NSDictionary *_propertyValues;	// 8 = 0x8
    NSString *_tableName;	// 16 = 0x10
    SSSQLiteDatabase *_database;	// 24 = 0x18
}

+ (id)allPropertyKeys;	// IMP=0x000000000014c976
+ (id)sortByDatePurchasedKey;	// IMP=0x000000000014c969
+ (id)databaseTable;	// IMP=0x000000000014c961
- (long long)storeID;	// IMP=0x000000000014c92b
- (_Bool)isHidden;	// IMP=0x000000000014c8f5
- (id)datePurchased;	// IMP=0x000000000014c8a8
- (long long)accountUniqueIdentifier;	// IMP=0x000000000014c872
- (long long)pid;	// IMP=0x000000000014c83c
- (id)description;	// IMP=0x000000000014c7a6
- (id)propertyValues;	// IMP=0x000000000014c78f
- (void)dealloc;	// IMP=0x000000000014c73e
- (id)initWithPropertyValues:(id)arg1;	// IMP=0x000000000014c703

@end

