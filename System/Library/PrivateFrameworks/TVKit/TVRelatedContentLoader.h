//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVRelatedContentViewController;
@protocol TVPPlayback, TVRelatedContentLoaderDelegate;

@interface TVRelatedContentLoader : NSObject
{
    NSObject<TVPPlayback> *_player;	// 8 = 0x8
    TVRelatedContentViewController *_relatedContentViewController;	// 16 = 0x10
    id <TVRelatedContentLoaderDelegate> _delegate;	// 24 = 0x18
    id _itemDidChangeObserver;	// 32 = 0x20
    id _metadataDidChangeObserver;	// 40 = 0x28
    id _beginningBoundaryTimeObserver;	// 48 = 0x30
    id _endingBoundaryTimeObserver;	// 56 = 0x38
    id _elapsedTimeObserver;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005de48
@property(retain, nonatomic) id elapsedTimeObserver; // @synthesize elapsedTimeObserver=_elapsedTimeObserver;
@property(retain, nonatomic) id endingBoundaryTimeObserver; // @synthesize endingBoundaryTimeObserver=_endingBoundaryTimeObserver;
@property(retain, nonatomic) id beginningBoundaryTimeObserver; // @synthesize beginningBoundaryTimeObserver=_beginningBoundaryTimeObserver;
@property(nonatomic) __weak id metadataDidChangeObserver; // @synthesize metadataDidChangeObserver=_metadataDidChangeObserver;
@property(nonatomic) __weak id itemDidChangeObserver; // @synthesize itemDidChangeObserver=_itemDidChangeObserver;
@property(nonatomic) __weak id <TVRelatedContentLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVRelatedContentViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
@property(retain, nonatomic) NSObject<TVPPlayback> *player; // @synthesize player=_player;
- (void)_updateDurationUntilPlaybackWillAdvance;	// IMP=0x000000000005d6b6
- (id)_durationUntilPlaybackWillAdvance;	// IMP=0x000000000005d5e5
- (void)_updateBoundaryTimeObserversForPlayer:(id)arg1;	// IMP=0x000000000005d275
- (id)_presentationEndTimeForCurrentMediaItem;	// IMP=0x000000000005d0ff
- (id)_presentationBeginTimeForCurrentMediaItem;	// IMP=0x000000000005cf87
- (void)_didLoadRelatedContent:(id)arg1;	// IMP=0x000000000005ced6
- (void)_crossedPresentationEndTimeBoundary;	// IMP=0x000000000005ce38
- (void)_crossedPresentationBeginTimeBoundary;	// IMP=0x000000000005cc1c
- (_Bool)_shouldShowRelatedContent:(id)arg1;	// IMP=0x000000000005cb91
- (void)_removeObservers;	// IMP=0x000000000005ca00
- (void)_updateBoundMediaItemEndAction;	// IMP=0x000000000005c9ee
- (void)_updateBoundDuration;	// IMP=0x000000000005c9a2
- (void)dealloc;	// IMP=0x000000000005c964
- (void)tvs_bindMediaItemEndActionBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000000005c86b
- (id)MediaItemEndActionBinding;	// IMP=0x000000000005c81b
- (void)tvs_bindDurationBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000000005c722
- (id)DurationBinding;	// IMP=0x000000000005c6d2

@end
