//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPXPCClientHelper;

@interface PPNamedEntityReadWriteClient : NSObject
{
    PPXPCClientHelper *_clientHelper;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000003e205
- (void).cxx_destruct;	// IMP=0x000000000003df80
- (_Bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003de91
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x000000000003de78
- (_Bool)cloudSyncWithError:(id *)arg1;	// IMP=0x000000000003de5f
- (_Bool)removeMapItemsBeforeDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003ddc1
- (_Bool)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003dd23
- (_Bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003dc5e
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x000000000003db6b
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000003daca
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000003d9fd
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000003d930
- (_Bool)flushDonationsWithError:(id *)arg1;	// IMP=0x000000000003d7fd
- (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 error:(id *)arg6;	// IMP=0x000000000003d71a
- (_Bool)_doDeletionSyncCallWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2 syncCall:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d47c
- (_Bool)_doSyncCallWithError:(id *)arg1 syncCall:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d225
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d20f
- (id)init;	// IMP=0x000000000003d140

@end

