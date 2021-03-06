//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryMutableController-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>

@class NSObject, NSString, PXObservable, PXUpdater;
@protocol OS_dispatch_queue, PXStoryQueueParticipant;

@interface PXStoryController <PXStoryMutableController, PXChangeObserver, PXStoryQueueParticipant>
{
    NSObject<OS_dispatch_queue> *_storyQueue;	// 8 = 0x8
    PXObservable<PXStoryQueueParticipant> *_observableModel;	// 16 = 0x10
    PXUpdater *_updater;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005f949a
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) __weak PXObservable<PXStoryQueueParticipant> *observableModel; // @synthesize observableModel=_observableModel;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)handleModelChange:(unsigned long long)arg1;	// IMP=0x00000000005f9459
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000005f93a2
- (void)_setNeedsUpdate;	// IMP=0x00000000005f938e
- (void)didPerformChanges;	// IMP=0x00000000005f9324
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000005f929f
- (void)configureUpdater:(id)arg1;	// IMP=0x00000000005f9299
- (id)initWithObservableModel:(id)arg1;	// IMP=0x00000000005f915e
- (id)init;	// IMP=0x00000000005f90e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

