//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXFeedSectionInfosManagerDelegate-Protocol.h>
#import <PhotosUICore/PXSharedAlbumInvitationGadgetDelegate-Protocol.h>

@class NSMutableArray, NSString, PXFeedSectionInfosManager, PXGadgetNavigationHelper;
@protocol PXGadgetDelegate, PXGadgetTransition;

@interface PXSharedAlbumActivityGadgetProvider <PXFeedSectionInfosManagerDelegate, PXSharedAlbumInvitationGadgetDelegate>
{
    PXFeedSectionInfosManager *_feedSectionInfosManager;	// 8 = 0x8
    unsigned long long _estimatedGadgetCount;	// 16 = 0x10
    NSString *_invitationAlbumCloudGUID;	// 24 = 0x18
    NSMutableArray *_delayedChanges;	// 32 = 0x20
    long long _maxNumberOfSections;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000713461
@property(readonly, nonatomic) long long maxNumberOfSections; // @synthesize maxNumberOfSections=_maxNumberOfSections;
@property(retain, nonatomic) NSMutableArray *delayedChanges; // @synthesize delayedChanges=_delayedChanges;
@property(retain, nonatomic) NSString *invitationAlbumCloudGUID; // @synthesize invitationAlbumCloudGUID=_invitationAlbumCloudGUID;
@property(nonatomic) unsigned long long estimatedGadgetCount; // @synthesize estimatedGadgetCount=_estimatedGadgetCount;
@property(retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // @synthesize feedSectionInfosManager=_feedSectionInfosManager;
- (void)_update:(id)arg1;	// IMP=0x0000000000712ad9
- (id)_gadgetsForSectionIndexes:(id)arg1;	// IMP=0x00000000007129aa
- (id)_indexesOfSectionInfosToDisplay:(unsigned long long)arg1;	// IMP=0x000000000071282a
- (unsigned long long)_indexForGadget:(id)arg1;	// IMP=0x000000000071271c
- (void)_processDelayedChangesImmediatelyIfNecessary:(id)arg1;	// IMP=0x0000000000712678
- (void)_processDelayedChanges;	// IMP=0x00000000007124f5
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;	// IMP=0x000000000071244a
- (void)gadget:(id)arg1 didAccept:(_Bool)arg2;	// IMP=0x0000000000712307
- (void)generateGadgets;	// IMP=0x00000000007122ac
- (unsigned long long)estimatedNumberOfGadgets;	// IMP=0x000000000071229a
- (void)loadDataForGadgets;	// IMP=0x0000000000712217
- (void)dealloc;	// IMP=0x00000000007121cc
- (id)init;	// IMP=0x0000000000712053

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <PXGadgetTransition> gadgetTransition;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder;
@property(readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property(readonly) Class superclass;

@end

