//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp;

@interface TRIPersistedAllocationStatusCursor : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x000000000004bfe6

// Remaining properties
@property(nonatomic) _Bool hasLowerBoundExclusive; // @dynamic hasLowerBoundExclusive;
@property(retain, nonatomic) TRIPBTimestamp *lowerBoundExclusive; // @dynamic lowerBoundExclusive;

@end

