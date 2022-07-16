//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAURLSession, ACAccount;
@protocol FADeviceInfoProtocol, FAURLProvider;

@interface FANetworkService : NSObject
{
    AAURLSession *_urlSession;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    id <FAURLProvider> _urlProvider;	// 24 = 0x18
    id <FADeviceInfoProtocol> _deviceInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005e71
@property(readonly, nonatomic) id <FADeviceInfoProtocol> deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) AAURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) id <FAURLProvider> urlProvider; // @synthesize urlProvider=_urlProvider;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)standardPlistRequestWithEndpoint:(id)arg1 method:(id)arg2 plistBody:(id)arg3;	// IMP=0x0000000000005a1c
- (id)standardPlistRequestWithEndpoint:(id)arg1;	// IMP=0x0000000000005a00
- (id)plistWithResponse:(id)arg1;	// IMP=0x000000000000577b
- (id)plistWithRequest:(id)arg1;	// IMP=0x0000000000005557
- (id)dataWithRequest:(id)arg1;	// IMP=0x000000000000532e
- (id)signedRequestWithURL:(id)arg1 method:(id)arg2 headers:(id)arg3 plistBody:(id)arg4;	// IMP=0x0000000000005119
- (id)signedRequestWithURL:(id)arg1;	// IMP=0x00000000000050fa
- (id)signedRequestWithEndpoint:(id)arg1 method:(id)arg2 headers:(id)arg3 plistBody:(id)arg4;	// IMP=0x0000000000004ec7
- (id)signedRequestWithEndpoint:(id)arg1;	// IMP=0x0000000000004ea8
- (id)ensureAccount;	// IMP=0x0000000000004dd8
- (id)ensureDeviceUnlockedSinceBoot;	// IMP=0x0000000000004caa
- (id)initWithAccount:(id)arg1 deviceInfo:(id)arg2 urlProvider:(id)arg3 urlSession:(id)arg4;	// IMP=0x0000000000004bca

@end

