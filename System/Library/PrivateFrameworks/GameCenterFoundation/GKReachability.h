//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (_Bool)_gkIsOnline;	// IMP=0x000000000002f481
+ (id)_gkReachabilityForLocalWiFi;	// IMP=0x000000000002f369
+ (id)_gkReachabilityForInternetConnection;	// IMP=0x000000000002f31c
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x000000000002f2d2
+ (id)_gkReachabilityWithHostName:(id)arg1;	// IMP=0x000000000002f26f
- (int)_gkCurrentReachabilityStatus;	// IMP=0x000000000002f437
- (_Bool)_gkConnectionRequired;	// IMP=0x000000000002f40b
- (int)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000002f3d9
- (int)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000002f3c6
- (void)dealloc;	// IMP=0x000000000002f223
- (void)_gkStopNotifier;	// IMP=0x000000000002f1ed
- (_Bool)_gkStartNotifier;	// IMP=0x000000000002eff4

@end

