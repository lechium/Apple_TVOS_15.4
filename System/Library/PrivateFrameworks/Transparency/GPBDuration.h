//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GPBDuration
{
}

+ (id)descriptor;	// IMP=0x000000000004993c
@property(nonatomic) double timeIntervalSince1970;
@property(nonatomic) double timeInterval;
- (id)initWithTimeIntervalSince1970:(double)arg1;	// IMP=0x00000000000a04fe
- (id)initWithTimeInterval:(double)arg1;	// IMP=0x00000000000a046e

// Remaining properties
@property(nonatomic) int nanos; // @dynamic nanos;
@property(nonatomic) long long seconds; // @dynamic seconds;

@end

