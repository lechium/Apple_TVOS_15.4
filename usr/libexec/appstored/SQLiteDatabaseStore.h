//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteDatabase;

@interface SQLiteDatabaseStore : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x0020000000255f47
+ (id)storeDescriptor;	// IMP=0x0010000000255f2e
- (void).cxx_destruct;	// IMP=0x0020000000255fba
@property(readonly) SQLiteDatabase *database; // @synthesize database=_database;
- (void)readUsingSession:(CDUnknownBlockType)arg1;	// IMP=0x0010000000255f8a
- (void)modifyUsingTransactionClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000255f6b
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000255f4f
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000255ec3

@end
