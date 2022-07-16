//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerReorderItemsCommand-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerReorderItemsCommand <MPCPlayerReorderItemsCommand>
{
}

- (id)moveItem:(id)arg1 beforeItem:(id)arg2;	// IMP=0x0000000000103748
- (id)moveItem:(id)arg1 afterItem:(id)arg2;	// IMP=0x0000000000103368
- (id)limitedDisplayIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;	// IMP=0x0000000000102ee3
- (id)limitedIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;	// IMP=0x0000000000102d2e
- (_Bool)canMoveItem:(id)arg1;	// IMP=0x0000000000102c4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

