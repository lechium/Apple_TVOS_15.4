//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>

@class MPModelGenericObject, NSArray, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface MPCStoreFrontLocalEquivalencyMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>
{
    NSArray *_invalidationObservers;	// 8 = 0x8
    MPModelGenericObject *_overridePlayingItem;	// 16 = 0x10
    NSIndexPath *_playingItemIndexPath;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000189967
@property(copy, nonatomic) NSIndexPath *playingItemIndexPath; // @synthesize playingItemIndexPath=_playingItemIndexPath;
@property(retain, nonatomic) MPModelGenericObject *overridePlayingItem; // @synthesize overridePlayingItem=_overridePlayingItem;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)_stateDumpObject;	// IMP=0x00000000001897c9
- (id)operationsForPlayerRequest:(id)arg1;	// IMP=0x000000000018970d
- (id)operationsForRequest:(id)arg1;	// IMP=0x00000000001896a0
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;	// IMP=0x000000000018999a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

