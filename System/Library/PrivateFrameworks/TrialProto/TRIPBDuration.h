//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TRIPBDuration
{
}

+ (id)descriptor;	// IMP=0x0000000000023d8e
@property(nonatomic) double timeIntervalSince1970;
@property(nonatomic) double timeInterval;
- (id)initWithTimeIntervalSince1970:(double)arg1;	// IMP=0x0000000000024ea8
- (id)initWithTimeInterval:(double)arg1;	// IMP=0x0000000000024e18

// Remaining properties
@property(nonatomic) int nanos; // @dynamic nanos;
@property(nonatomic) long long seconds; // @dynamic seconds;

@end
