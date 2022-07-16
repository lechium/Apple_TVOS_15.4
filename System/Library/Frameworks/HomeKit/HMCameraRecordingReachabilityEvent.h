//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMCameraRecordingEvent-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HMCameraRecordingReachabilityEvent : NSObject <HMCameraRecordingEvent, NSSecureCoding>
{
    _Bool _reachable;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    NSDate *_dateOfOccurrence;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b5788
- (void).cxx_destruct;	// IMP=0x00000000001b5760
@property(readonly, copy) NSDate *dateOfOccurrence; // @synthesize dateOfOccurrence=_dateOfOccurrence;
@property(readonly, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b555f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b548b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b52e0
@property(readonly, copy) NSString *description;
- (id)initWithUniqueIdentifier:(id)arg1 dateOfOccurrence:(id)arg2 reachable:(_Bool)arg3;	// IMP=0x00000000001b507f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
