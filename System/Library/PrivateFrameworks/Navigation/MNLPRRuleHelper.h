//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MNLPRRuleHelper : NSObject
{
}

- (void)_loadRules:(id)arg1 asyncCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4a95
- (void)_findResourceNamesForRegions:(id)arg1 forceUpdate:(_Bool)arg2 asyncCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a46c1
- (void)fetchRulesForWaypoints:(id)arg1 forceUpdateManifest:(_Bool)arg2 forceUpdateRules:(_Bool)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a3ef8
- (void)prefetchRulesForWaypoints:(id)arg1;	// IMP=0x00000000000a3ef2
- (id)workQueue;	// IMP=0x00000000000a3edb

@end

