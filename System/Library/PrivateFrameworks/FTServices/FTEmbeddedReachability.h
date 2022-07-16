//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FTEmbeddedReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x000000000000e8e1
+ (id)reachabilityForInternetConnection;	// IMP=0x000000000000e885
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x000000000000e7f9
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x000000000000e737
- (long long)currentReachabilityStatus;	// IMP=0x000000000000ec38
- (_Bool)connectionRequired;	// IMP=0x000000000000eb46
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000000eb05
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000000e94d
- (void)dealloc;	// IMP=0x000000000000e6f0

@end

