//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (PLManagedObjectContext)
+ (_Bool)shouldHavePhotoLibrary;	// IMP=0x000000000016a0f0
- (_Bool)pl_performWithOptions:(unsigned long long)arg1 andBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000169df0
- (_Bool)pl_executeBatchUpdateRequest:(id)arg1 withBatchSize:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000016979c
- (id)pl_resultWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000169678
- (id)deleteObjectsWithIncrementalSave:(id)arg1;	// IMP=0x000000000016961d
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000169606
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 shouldRefreshAfterSave:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001691fb
- (id)enumerateObjectsFromFetchRequest:(id)arg1 usingDefaultBatchSizeWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001691e1
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 usingDefaultBatchSizeWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001691c6
- (id)enumerateObjectsFromFetchRequest:(id)arg1 batchSize:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000168e47
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 batchSize:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000168d25
- (id)libraryBundle;	// IMP=0x0000000000168bd2
- (id)pathManager;	// IMP=0x00000000001689fe
- (id)photoLibrary;	// IMP=0x00000000001689f6
- (_Bool)isUserInterfaceContext;	// IMP=0x00000000001689ee
- (void)pl_refresh;	// IMP=0x0000000000168855
@end
