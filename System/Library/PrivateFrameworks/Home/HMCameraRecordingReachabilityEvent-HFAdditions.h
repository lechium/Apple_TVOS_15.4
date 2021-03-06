//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCameraRecordingReachabilityEvent.h>

#import <Home/HFCameraRecordingEvent-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HMCameraRecordingReachabilityEvent (HFAdditions) <HFCameraRecordingEvent>
- (unsigned long long)containerType;	// IMP=0x0000000000021850
- (id)videoAssetRequiredHTTPHeaders;	// IMP=0x0000000000021843
- (id)encryptionKey;	// IMP=0x000000000002182a
- (double)targetFragmentDuration;	// IMP=0x000000000002181c
- (_Bool)hf_isPlayable;	// IMP=0x0000000000021814
- (id)hf_dateInterval;	// IMP=0x000000000002179f
- (id)hf_endDate;	// IMP=0x0000000000021736
- (_Bool)canAskForUserFeedback;	// IMP=0x000000000002172e
- (_Bool)isComplete;	// IMP=0x0000000000021726
- (double)hf_duration;	// IMP=0x0000000000021714
- (double)duration;	// IMP=0x0000000000021706

// Remaining properties
@property(readonly, copy) NSDate *dateOfOccurrence;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSUUID *uniqueIdentifier;
@end

