//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSApplicationDataStore, NSString;

@interface BKSApplicationDataStore : NSObject
{
    FBSApplicationDataStore *_fbsApplicationDataStore;	// 8 = 0x8
}

+ (void)setPrefetchedKeys:(id)arg1;	// IMP=0x0000000000026a88
+ (void)synchronize;	// IMP=0x0000000000026a6d
+ (id)applicationsWithAvailableStores;	// IMP=0x0000000000026a52
+ (id)storeForApplication:(id)arg1;	// IMP=0x00000000000269c4
- (void).cxx_destruct;	// IMP=0x00000000000268d4
- (void)removeAllObjects;	// IMP=0x00000000000268be
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000000268a8
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000026892
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002687c
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x00000000000267dd
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;	// IMP=0x00000000000267c7
- (void)archivedObjectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000002672b
- (id)archivedObjectForKey:(id)arg1;	// IMP=0x0000000000026715
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026676
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;	// IMP=0x0000000000026660
- (void)objectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x00000000000265c4
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000265ae
@property(readonly, nonatomic) NSString *bundleID;
- (void)dealloc;	// IMP=0x0000000000026555
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000264d5
- (id)_initWithFBSApplicationDataStore:(id)arg1;	// IMP=0x000000000002646a
- (id)init;	// IMP=0x000000000002642b

@end

