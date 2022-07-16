//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>

@class MPSectionedCollection, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPCStoreLibraryPersonalizationMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>
{
    NSArray *_invalidationObservers;	// 8 = 0x8
    MPSectionedCollection *_personalizedModelObjects;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004c9f
@property(retain, nonatomic) MPSectionedCollection *personalizedModelObjects; // @synthesize personalizedModelObjects=_personalizedModelObjects;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)operationsForPlayerRequest:(id)arg1;	// IMP=0x0000000000004bad
- (id)operationsForRequest:(id)arg1;	// IMP=0x0000000000004b40
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;	// IMP=0x0000000000004cc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

