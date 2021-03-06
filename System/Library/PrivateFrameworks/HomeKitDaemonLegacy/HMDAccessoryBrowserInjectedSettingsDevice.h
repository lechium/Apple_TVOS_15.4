//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDAccessoryBrowserInjectedSettings-Protocol.h>

@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000803d6c
- (id)createAuthServerWithDelegate:(id)arg1;	// IMP=0x0000000000803d1f
- (id)createHap2AccessoryBrowserWithStorage:(id)arg1;	// IMP=0x0000000000803cc2
- (id)createBtleAccessoryBrowser;	// IMP=0x0000000000803c8b
- (id)createIpAccessoryBrowser;	// IMP=0x0000000000803c54
- (id)workQueue;	// IMP=0x0000000000803c46
- (id)init;	// IMP=0x0000000000803bb3

@end

