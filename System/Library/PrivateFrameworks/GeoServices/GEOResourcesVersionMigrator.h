//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrator-Protocol.h>

@class GEOResourceManifestConfiguration, NSMutableArray, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOResourcesVersionMigrator : NSObject <GEOActiveTileGroupMigrator>
{
    GEOResourceManifestConfiguration *_manifestConfiguration;	// 8 = 0x8
    geo_isolater *_isolater;	// 16 = 0x10
    NSMutableArray *_runningTasks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000009bdb02
- (void)_removeRunningTask:(id)arg1;	// IMP=0x00000000009bda57
- (void)_addRunningTask:(id)arg1;	// IMP=0x00000000009bd9ac
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7;	// IMP=0x00000000009bd8a8
- (id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;	// IMP=0x00000000009bd7e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

