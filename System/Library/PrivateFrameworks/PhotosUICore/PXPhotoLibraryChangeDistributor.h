//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, PHPhotoLibrary;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PXPhotoLibraryChangeDistributor : NSObject <PHPhotoLibraryChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_changeDeliverySemaphore;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_changePausingGroup;	// 40 = 0x28
    NSMutableSet *_changePausingTokens;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000551126
- (void)_notifyPausedStateChange;	// IMP=0x0000000000550ded
- (void)endPausingChanges:(id)arg1;	// IMP=0x0000000000550bea
- (id)beginPausingChangesWithTimeout:(double)arg1 identifier:(id)arg2;	// IMP=0x00000000005508ea
- (void)distributeChangeOnMainQueue:(id)arg1;	// IMP=0x00000000005506fb
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000000550120
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x0000000000550091
- (void)registerChangeObserver:(id)arg1;	// IMP=0x0000000000550002
@property(readonly, nonatomic, getter=areChangesPaused) _Bool changesPaused;
- (void)dealloc;	// IMP=0x000000000054fef9
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000054fde8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

