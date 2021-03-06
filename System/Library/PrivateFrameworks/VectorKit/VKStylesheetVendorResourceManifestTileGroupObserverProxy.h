//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver>
{
    struct weak_ptr<md::StylesheetVendor> _vendor;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000078abaf
- (void).cxx_destruct;	// IMP=0x000000000078ab9a
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000078ab4e
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000078aaf4
- (void)dealloc;	// IMP=0x000000000078aa97
- (id)initWithStylesheetVendor:(shared_ptr_dd2d1f5e)arg1;	// IMP=0x000000000078a9fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

