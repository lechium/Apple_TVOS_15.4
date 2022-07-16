//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKDigestVerification : NSObject
{
}

+ (_Bool)digest:(id)arg1 matchesHash:(id)arg2;	// IMP=0x0000000000041363
+ (id)computeVerificationHashForDigest:(id)arg1;	// IMP=0x000000000004117f
+ (id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;	// IMP=0x00000000000417c1
+ (id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;	// IMP=0x00000000000415a8

@end
