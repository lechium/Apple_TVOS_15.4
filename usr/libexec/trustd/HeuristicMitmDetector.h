//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HeuristicMitmDetector : NSObject
{
    NSArray *__priorMitmRoots;	// 8 = 0x8
    NSMutableDictionary *__rootHostnameMap;	// 16 = 0x10
    NSDate *_lastReset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000044a2a
@property(retain) NSDate *lastReset; // @synthesize lastReset=_lastReset;
@property(retain) NSMutableDictionary *_rootHostnameMap; // @synthesize _rootHostnameMap=__rootHostnameMap;
@property(retain) NSArray *_priorMitmRoots; // @synthesize _priorMitmRoots=__priorMitmRoots;
- (void)reset;	// IMP=0x0010000000044952
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004471d
- (_Bool)addHostname:(id)arg1 forRoot:(struct __SecCertificate *)arg2;	// IMP=0x0010000000044624
- (void)addPinningFailureForRoot:(struct __SecCertificate *)arg1;	// IMP=0x00100000000445e2
- (id)rootUsageForRoot:(struct __SecCertificate *)arg1;	// IMP=0x0010000000044509
- (_Bool)isMitmOperatingWithReporting:(_Bool)arg1;	// IMP=0x0010000000043ead
- (void)reportMitmScores:(long long)arg1;	// IMP=0x00100000000438d7
- (void)purgeUnusedRoots;	// IMP=0x001000000004360c
- (id)priorMitmRoots;	// IMP=0x0010000000043557
- (void)setPriorMitmRoots:(id)arg1;	// IMP=0x0010000000043335
- (void)addRootUsage:(id)arg1 forRoot:(id)arg2;	// IMP=0x0010000000043269
- (void)removeRoot:(id)arg1;	// IMP=0x00100000000431b7
- (void)removeAllRoots;	// IMP=0x0010000000043126
- (id)rootHostnameMap;	// IMP=0x0010000000043071
- (id)init;	// IMP=0x0010000000042e79
- (id)priorMitmRootsFileUrl;	// IMP=0x0010000000042e52

@end
