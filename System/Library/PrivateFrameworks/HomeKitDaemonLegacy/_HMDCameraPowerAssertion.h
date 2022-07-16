//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraPowerAssertionHandler, HMDCameraSessionID;

@interface _HMDCameraPowerAssertion : HMFObject
{
    HMDCameraPowerAssertionHandler *_assertionHandler;	// 8 = 0x8
    HMDCameraSessionID *_remoteRequestHandlerSessionID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000071fdf5
@property(readonly, nonatomic) HMDCameraSessionID *remoteRequestHandlerSessionID; // @synthesize remoteRequestHandlerSessionID=_remoteRequestHandlerSessionID;
@property(readonly, nonatomic) __weak HMDCameraPowerAssertionHandler *assertionHandler; // @synthesize assertionHandler=_assertionHandler;
- (void)dealloc;	// IMP=0x000000000071fd37
- (id)initWithPowerAssertionHandler:(id)arg1 remoteRequestHandlerSessionID:(id)arg2;	// IMP=0x000000000071fc9c

@end

