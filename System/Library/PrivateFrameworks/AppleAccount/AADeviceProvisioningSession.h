//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AADeviceProvisioningSession : NSObject
{
    NSString *_dsid;	// 8 = 0x8
    unsigned long long _dsidNumber;	// 16 = 0x10
    struct OpaqueCFHTTPCookieStorage *_cookieStorageRef;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000335ea
- (int)eraseProvisioning;	// IMP=0x00000000000335e2
- (int)synchronizeProvisioningWithData:(id)arg1;	// IMP=0x00000000000335da
- (int)provisionDeviceWithData:(id)arg1;	// IMP=0x00000000000335d2
- (id)deviceProvisioningInfo;	// IMP=0x000000000003356d
- (void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(_Bool)arg2;	// IMP=0x00000000000333db
- (void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(_Bool)arg2;	// IMP=0x00000000000332cc
- (void)addProvisioningInfoToAARequest:(id)arg1;	// IMP=0x00000000000332b8
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage *)arg1;	// IMP=0x00000000000332ae
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000000331d6
- (id)initWithDSID:(id)arg1;	// IMP=0x0000000000033078
- (id)init;	// IMP=0x0000000000033064

@end
