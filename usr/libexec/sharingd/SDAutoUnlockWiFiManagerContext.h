//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SDAutoUnlockWiFiManager, SDAutoUnlockWiFiRequest;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockWiFiManagerContext : NSObject
{
    SDAutoUnlockWiFiRequest *_request;	// 8 = 0x8
    SDAutoUnlockWiFiManager *_wiFiManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001289fd
@property(readonly, nonatomic) __weak SDAutoUnlockWiFiManager *wiFiManager; // @synthesize wiFiManager=_wiFiManager;
@property(readonly, nonatomic) SDAutoUnlockWiFiRequest *request; // @synthesize request=_request;
- (id)initWithRequest:(id)arg1 wiFiManager:(id)arg2;	// IMP=0x0010000000128944

@end
