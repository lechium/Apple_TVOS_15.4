//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPShuffleableSectionedIdentifierListDataSource-Protocol.h>
#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class MPCPlaybackEngineEventStream, MPPlaceholderAVItem, MPPlaybackContext, NSString;
@protocol MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring;

__attribute__((visibility("hidden")))
@interface _MPCQueueControllerDataSourceState : NSObject <MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding>
{
    struct {
        unsigned int dataSourcePlaceholderItemForLoadingAdditionalItemsInSection:1;
        unsigned int dataSourceSupplementalPlaybackContextWithReason:1;
        unsigned int dataSourceSupplementalPlaybackContextBehavior:1;
        unsigned int dataSourceCanJumpToItem:1;
        unsigned int dataSourceCanSkipItem:1;
        unsigned int dataSourceFirstItemIntersectingIdentifierSet:1;
        unsigned int dataSourceItemDidBeginPlayback:1;
        unsigned int dataSourceShouldRequestAdditionalItemsWhenReachingTailOfSection:1;
        unsigned int dataSourcePrefetchThresholdForSection:1;
        unsigned int dataSourceShouldUsePlaceholderForItemInSection:1;
        unsigned int dataSourceSectionShouldShuffleExcludeItem:1;
        unsigned int dataSourceUpdatedPlaybackContext:1;
    } _supportedMethods;	// 8 = 0x8
    _Bool _frozen;	// 12 = 0xc
    struct os_unfair_lock_s _stateLock;	// 16 = 0x10
    MPPlaceholderAVItem *_tailPlaceholderItem;	// 24 = 0x18
    id <MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring> _dataSource;	// 32 = 0x20
    MPPlaybackContext *_playbackContext;	// 40 = 0x28
    MPPlaybackContext *_originalPlaybackContext;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    NSString *_sectionIdentifier;	// 64 = 0x40
    NSString *_preferredStartItemIdentifier;	// 72 = 0x48
    id _rtcSectionHierarchyToken;	// 80 = 0x50
    MPCPlaybackEngineEventStream *_eventStream;	// 88 = 0x58
    long long _supplementalPlaybackContextBehavior;	// 96 = 0x60
    MPPlaybackContext *_supplementalPlaybackContext;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d194f
- (void).cxx_destruct;	// IMP=0x00000000000d0f40
@property(readonly, nonatomic) MPPlaybackContext *supplementalPlaybackContext; // @synthesize supplementalPlaybackContext=_supplementalPlaybackContext;
@property(readonly, nonatomic) long long supplementalPlaybackContextBehavior; // @synthesize supplementalPlaybackContextBehavior=_supplementalPlaybackContextBehavior;
@property(readonly, nonatomic) struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
@property(nonatomic) __weak MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(retain, nonatomic) id rtcSectionHierarchyToken; // @synthesize rtcSectionHierarchyToken=_rtcSectionHierarchyToken;
@property(readonly, nonatomic) NSString *preferredStartItemIdentifier; // @synthesize preferredStartItemIdentifier=_preferredStartItemIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MPPlaybackContext *originalPlaybackContext; // @synthesize originalPlaybackContext=_originalPlaybackContext;
@property(readonly, nonatomic) MPPlaybackContext *playbackContext; // @synthesize playbackContext=_playbackContext;
@property(readonly, nonatomic) id <MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateRadioStationPlaybackAuthorizationTokenIfNeeded;	// IMP=0x00000000000d0d26
- (void)_inLock_buildPlaceholder;	// IMP=0x00000000000d0c65
- (void)_buildPlaceholder;	// IMP=0x00000000000d0c33
- (_Bool)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2;	// IMP=0x00000000000d0c13
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;	// IMP=0x00000000000d0bee
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d096a
- (void)updatePlaybackContext;	// IMP=0x00000000000d0847
@property(readonly, nonatomic) MPPlaceholderAVItem *tailPlaceholderItem; // @synthesize tailPlaceholderItem=_tailPlaceholderItem;
- (void)loadAdditionalItemsIfNeededWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d0565
- (_Bool)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000000d0545
- (_Bool)shouldShowPlaceholderAtTail;	// IMP=0x00000000000d04c7
- (long long)prefetchThreshold;	// IMP=0x00000000000d04a0
- (_Bool)shouldRequestAdditionalItemsAtTail;	// IMP=0x00000000000d0473
@property(readonly, nonatomic) _Bool shouldAddOriginalPlaybackContextAfterReplacement;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000000d0445
- (void)itemDidBeginPlayback:(id)arg1;	// IMP=0x00000000000d0427
- (id)firstItemIntersectingIdentifierSet:(id)arg1;	// IMP=0x00000000000d03f7
@property(readonly, nonatomic) _Bool containsLiveStream;
- (_Bool)canSkipItem:(id)arg1;	// IMP=0x00000000000d03c1
- (_Bool)canJumpToItem:(id)arg1;	// IMP=0x00000000000d03a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cffc2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cfd4f
@property(readonly, copy) NSString *description;
- (void)updatePlaybackCoordinator:(id)arg1;	// IMP=0x00000000000cfc2a
- (id)initWithPlaybackContext:(id)arg1;	// IMP=0x00000000000cf8f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

