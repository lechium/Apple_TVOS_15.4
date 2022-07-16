//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver>
{
    _Bool _networkReachable;	// 8 = 0x8
    unsigned long long _errorCount;	// 16 = 0x10
    int _symptomsAlternateAdviceToken;	// 24 = 0x18
}

+ (id)sharedReachability;	// IMP=0x000000000110d058
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000110d4f3
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000110d4ed
- (void)_reachabilityChanged:(id)arg1;	// IMP=0x000000000110d457
- (_Bool)networkAvailable;	// IMP=0x000000000110d44e
- (void)reportLoadFailure:(id)arg1;	// IMP=0x000000000110d393
- (_Bool)anyFailures;	// IMP=0x000000000110d385
- (void)reportTileLoadSuccess:(id)arg1;	// IMP=0x000000000110d316
- (void)_resetErrors;	// IMP=0x000000000110d2a2
- (void)dealloc;	// IMP=0x000000000110d1c1
- (id)init;	// IMP=0x000000000110d0ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

