//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIPersistedExperimentAllocationStatus_VersionedNamespace : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x000000000004c2ec

// Remaining properties
@property(nonatomic) unsigned int compatibilityVersion; // @dynamic compatibilityVersion;
@property(nonatomic) _Bool hasCompatibilityVersion; // @dynamic hasCompatibilityVersion;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end
