//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class TRIPBStringEnumDictionary;

@interface TRIClientNamespaceMetadata : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x000000000002a946

// Remaining properties
@property(nonatomic) unsigned int compatibilityVersion; // @dynamic compatibilityVersion;
@property(retain, nonatomic) TRIPBStringEnumDictionary *factorNamePurgeabilityLevels; // @dynamic factorNamePurgeabilityLevels;
@property(readonly, nonatomic) unsigned long long factorNamePurgeabilityLevels_Count; // @dynamic factorNamePurgeabilityLevels_Count;
@property(nonatomic) _Bool hasCompatibilityVersion; // @dynamic hasCompatibilityVersion;

@end

