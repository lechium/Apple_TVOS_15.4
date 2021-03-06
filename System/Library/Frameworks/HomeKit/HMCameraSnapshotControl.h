//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/_HMCameraSnapshotControlDelegate-Protocol.h>

@class HMCameraSnapshot, HMFUnfairLock, NSString, _HMCameraSnapshotControl;
@protocol HMCameraSnapshotControlDelegate;

@interface HMCameraSnapshotControl <_HMCameraSnapshotControlDelegate>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    id <HMCameraSnapshotControlDelegate> _delegate;	// 16 = 0x10
    _HMCameraSnapshotControl *_snapshotControl;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000016ffc2
@property(readonly) _HMCameraSnapshotControl *snapshotControl; // @synthesize snapshotControl=_snapshotControl;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;	// IMP=0x000000000016ff1e
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;	// IMP=0x000000000016fe82
- (void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016fdfc
- (void)takeSnapshot;	// IMP=0x000000000016fceb
@property(readonly, nonatomic) HMCameraSnapshot *mostRecentSnapshot;
@property(nonatomic) __weak id <HMCameraSnapshotControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithSnapshotControl:(id)arg1;	// IMP=0x000000000016f9dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

