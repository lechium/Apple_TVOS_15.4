//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFTimer.h>

@class HMDSnapshotSession;

@interface HMDSnapshotCompletionTimer : HMFTimer
{
    HMDSnapshotSession *_snapshotSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000035b71f
@property(readonly, nonatomic) __weak HMDSnapshotSession *snapshotSession; // @synthesize snapshotSession=_snapshotSession;
- (id)initWithSnapshotSession:(id)arg1 timer:(double)arg2;	// IMP=0x000000000035b693

@end

