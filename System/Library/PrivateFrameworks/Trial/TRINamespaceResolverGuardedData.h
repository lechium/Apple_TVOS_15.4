//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface TRINamespaceResolverGuardedData : NSObject
{
    NSDictionary *plplist;	// 8 = 0x8
    NSMutableDictionary *targetedRolloutDeploymentMap;	// 16 = 0x10
    NSMutableDictionary *targetedExperimentDeploymentMap;	// 24 = 0x18
    _Bool hasIssuedWarnings;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000012fb5

@end

