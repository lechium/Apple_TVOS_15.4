//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUINowPlayingObserverDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, VUIDelayOperation, VUIMediaLibrary, VUIMediaLibraryFetchControllerQueueOperation, VUINowPlayingObserver;
@protocol OS_dispatch_queue, VUIMediaLibraryFetchControllerQueueDelegate;

@interface VUIMediaLibraryFetchControllerQueue : NSObject <VUINowPlayingObserverDelegate>
{
    _Bool _paused;	// 8 = 0x8
    _Bool _shouldFetchOnResume;	// 9 = 0x9
    id <VUIMediaLibraryFetchControllerQueueDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_mutableFetchControllers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 32 = 0x20
    VUIMediaLibrary *_mediaLibrary;	// 40 = 0x28
    unsigned long long _mediaLibraryRevision;	// 48 = 0x30
    VUIMediaLibraryFetchControllerQueueOperation *_currentFetchOperation;	// 56 = 0x38
    VUIDelayOperation *_delayContentsChangeOperation;	// 64 = 0x40
    NSOperationQueue *_serialFetchOperationQueue;	// 72 = 0x48
    VUINowPlayingObserver *_nowPlayingObserver;	// 80 = 0x50
}

+ (id)defaultQueueWithMediaLibrary:(id)arg1;	// IMP=0x000000000003f60f
- (void).cxx_destruct;	// IMP=0x0000000000041ccc
@property(retain, nonatomic) VUINowPlayingObserver *nowPlayingObserver; // @synthesize nowPlayingObserver=_nowPlayingObserver;
@property(retain, nonatomic) NSOperationQueue *serialFetchOperationQueue; // @synthesize serialFetchOperationQueue=_serialFetchOperationQueue;
@property(retain, nonatomic) VUIDelayOperation *delayContentsChangeOperation; // @synthesize delayContentsChangeOperation=_delayContentsChangeOperation;
@property(retain, nonatomic) VUIMediaLibraryFetchControllerQueueOperation *currentFetchOperation; // @synthesize currentFetchOperation=_currentFetchOperation;
@property(nonatomic) unsigned long long mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(nonatomic) _Bool shouldFetchOnResume; // @synthesize shouldFetchOnResume=_shouldFetchOnResume;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) NSMutableArray *mutableFetchControllers; // @synthesize mutableFetchControllers=_mutableFetchControllers;
@property(nonatomic) __weak id <VUIMediaLibraryFetchControllerQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateFetchDidComplete;	// IMP=0x00000000000419e4
- (void)_enqueueSyncProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000418d6
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000417c8
- (void)_enqueueProcessingQueueBlock:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;	// IMP=0x00000000000416ff
- (void)_enqueueControllerFetchOperation;	// IMP=0x0000000000041359
- (void)_queueOperationDidComplete:(id)arg1;	// IMP=0x00000000000411fd
- (void)_delayContentsChangeOperationDidComplete:(id)arg1;	// IMP=0x0000000000041008
- (void)_handleMediaLibraryContentsChange;	// IMP=0x0000000000040c80
- (void)_removeStateObserverForFetchControllers:(id)arg1;	// IMP=0x0000000000040b48
- (void)_addStateObserverForFetchControllers:(id)arg1;	// IMP=0x0000000000040a06
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000040776
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x0000000000040576
- (void)nowPlayingObserver:(id)arg1 latestObservationDidChange:(id)arg2;	// IMP=0x000000000004027b
- (void)resumeFetching;	// IMP=0x000000000004024b
- (void)pauseFetching;	// IMP=0x0000000000040218
- (void)removeFetchControllers:(id)arg1;	// IMP=0x000000000003fe60
- (void)removeFetchController:(id)arg1;	// IMP=0x000000000003fdb6
- (void)addFetchControllers:(id)arg1;	// IMP=0x000000000003fbe4
- (void)addFetchController:(id)arg1;	// IMP=0x000000000003fb35
@property(readonly, copy, nonatomic) NSArray *fetchControllers;
- (void)dealloc;	// IMP=0x000000000003f931
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000000003f7c3
- (id)init;	// IMP=0x000000000003f754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

