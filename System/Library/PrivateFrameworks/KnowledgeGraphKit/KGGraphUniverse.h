//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface KGGraphUniverse : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_databaseByURL;	// 16 = 0x10
}

+ (void)closeDatabaseAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eafd6
+ (_Bool)swapDatabaseFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000eaf43
+ (id)managerForGraphStoreAtURL:(id)arg1;	// IMP=0x00000000000eaec0
+ (id)instance;	// IMP=0x00000000000eaeaf
+ (void)initialize;	// IMP=0x00000000000eae8a
- (void).cxx_destruct;	// IMP=0x00000000000ead01
@property(retain, nonatomic) NSMutableDictionary *databaseByURL; // @synthesize databaseByURL=_databaseByURL;
- (void)closeDatabaseAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eac4a
- (void)removeDatabaseByURL:(id)arg1;	// IMP=0x00000000000eabf6
- (_Bool)swapDatabaseFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ea9c4
- (id)managerForGraphStoreAtURL:(id)arg1;	// IMP=0x00000000000ea913
- (id)init;	// IMP=0x00000000000ea8b6

@end

