//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOExperimentConfigurationObserver-Protocol.h>
#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    function_6481840f _willChangeActiveTileGroup;	// 16 = 0x10
    function_0527ddd4 _didChangeActiveTileGroup;	// 64 = 0x40
    function_0c3951cf _experimentConfigurationDidChange;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x000000000070ae4c
- (void).cxx_destruct;	// IMP=0x000000000070adcf
@property function_0c3951cf experimentConfigurationDidChange; // @synthesize experimentConfigurationDidChange=_experimentConfigurationDidChange;
@property function_0527ddd4 didChangeActiveTileGroup; // @synthesize didChangeActiveTileGroup=_didChangeActiveTileGroup;
@property function_6481840f willChangeActiveTileGroup; // @synthesize willChangeActiveTileGroup=_willChangeActiveTileGroup;
- (void)experimentConfigurationDidChange:(id)arg1;	// IMP=0x000000000070a93d
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;	// IMP=0x000000000070a90b
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000070a8e7
- (void)dealloc;	// IMP=0x000000000070a80c
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000070a776

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

