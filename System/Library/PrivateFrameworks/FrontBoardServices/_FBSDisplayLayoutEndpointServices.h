//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutEndpointServices : NSObject
{
    _FBSDisplayLayoutService *_sharedLock_services[3];	// 8 = 0x8
    unsigned long long _sharedLock_servicesRefCnt[3];	// 32 = 0x20
}

+ (void)_checkinService:(id)arg1;	// IMP=0x0000000000030401
+ (id)_checkoutServiceWithEndpoint:(id)arg1 qos:(BOOL)arg2;	// IMP=0x00000000000300c4
- (void).cxx_destruct;	// IMP=0x000000000003066d

@end
