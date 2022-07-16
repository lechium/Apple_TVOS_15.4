//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHClusterSQLiteDataStore, SHClusterStatementRunner;

__attribute__((visibility("hidden")))
@interface SHClusterController : NSObject
{
    SHClusterStatementRunner *_query;	// 8 = 0x8
    SHClusterSQLiteDataStore *_dataStore;	// 16 = 0x10
}

+ (id)databaseURLForName:(id)arg1;	// IMP=0x0000000000004f20
+ (id)trackClusterDefaultLocationURL;	// IMP=0x0000000000004f07
+ (id)artistClusterDefaultLocationURL;	// IMP=0x0000000000004eee
- (void).cxx_destruct;	// IMP=0x0000000000004fe0
@property(readonly, nonatomic) SHClusterSQLiteDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) SHClusterStatementRunner *query; // @synthesize query=_query;
- (id)affinityGroupsAtCohesionLevel:(long long)arg1 forQuery:(id)arg2 queryCollection:(id)arg3 filteredBy:(id)arg4;	// IMP=0x0000000000004be7
- (id)filterQueryCollection:(id)arg1 byItemsWithinCluster:(id)arg2;	// IMP=0x000000000000494a
- (void)affinityGroupsFromQueryCollection:(id)arg1 filteredBySeedCollection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004615
- (void)resultsFromQueryBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000044ce
- (void)mediaItemsForPropertyCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000432d
- (void)mediaItemsSimilarToValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004186
- (id)initWithDataStore:(id)arg1;	// IMP=0x00000000000040bc

@end
