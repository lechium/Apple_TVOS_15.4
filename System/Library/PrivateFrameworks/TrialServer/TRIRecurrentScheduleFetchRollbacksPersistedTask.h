//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedTaskAttribution;

@interface TRIRecurrentScheduleFetchRollbacksPersistedTask : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x00000000000efb4a

// Remaining properties
@property(nonatomic) _Bool hasIsRepeatedInstance; // @dynamic hasIsRepeatedInstance;
@property(nonatomic) _Bool hasTaskAttribution; // @dynamic hasTaskAttribution;
@property(nonatomic) _Bool isRepeatedInstance; // @dynamic isRepeatedInstance;
@property(retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution; // @dynamic taskAttribution;

@end

