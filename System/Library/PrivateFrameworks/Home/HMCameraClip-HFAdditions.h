//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCameraClip.h>

#import <Home/HFCameraClip-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface HMCameraClip (HFAdditions) <HFCameraClip>
- (unsigned long long)containerType;	// IMP=0x0000000000097541
- (void)dealloc;	// IMP=0x00000000000974fd
- (id)hf_familiarFaceEventAtOffset:(double)arg1;	// IMP=0x000000000009733b
- (id)hf_faceCropNamesAtOffset:(double)arg1;	// IMP=0x0000000000097115
- (id)hf_faceCropNameAtOffset:(double)arg1;	// IMP=0x0000000000096f4a
- (id)hf_allEventsContainingPeopleInClip;	// IMP=0x0000000000096dd0
- (void)hf_sortSignificantEvents;	// IMP=0x0000000000096cc5
@property(readonly, copy, nonatomic) NSArray *hf_sortedSignificantEvents;
- (_Bool)hf_isPlayable;	// IMP=0x0000000000096c2c
- (double)hf_duration;	// IMP=0x0000000000096be7
- (id)hf_dateInterval;	// IMP=0x0000000000096b72
- (id)hf_endDate;	// IMP=0x0000000000096b09

// Remaining properties
@property(readonly, copy) NSDate *dateOfOccurrence;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) long long quality;
@property(readonly, copy) NSDate *startDate;
@property(readonly) Class superclass;
@property(readonly, copy) NSUUID *uniqueIdentifier;
@end

