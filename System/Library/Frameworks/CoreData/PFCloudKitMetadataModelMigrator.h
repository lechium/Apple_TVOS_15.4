//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSSQLCore, PFCloudKitMetadataMigrationContext, PFCloudKitMetricsClient;

__attribute__((visibility("hidden")))
@interface PFCloudKitMetadataModelMigrator : NSObject
{
    NSSQLCore *_store;	// 8 = 0x8
    NSManagedObjectContext *_metadataContext;	// 16 = 0x10
    PFCloudKitMetadataMigrationContext *_context;	// 24 = 0x18
    long long _databaseScope;	// 32 = 0x20
    PFCloudKitMetricsClient *_metricsClient;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x0000000000272b7c
- (id)initWithStore:(id)arg1 metadataContext:(id)arg2 databaseScope:(long long)arg3 metricsClient:(id)arg4;	// IMP=0x0000000000272acc

@end

