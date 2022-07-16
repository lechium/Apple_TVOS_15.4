//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKDeviceListController : NSObject
{
}

+ (id)sharedController;	// IMP=0x0020000000058b99
- (void)_sendTrustedDeviceListChangeNotificationWithPayload:(id)arg1;	// IMP=0x0020000000059275
- (void)_handleCurrentDeviceTrustStatusChangedWithPayload:(id)arg1;	// IMP=0x0010000000059168
- (_Bool)shouldSuppressPushMessage:(id)arg1;	// IMP=0x0010000000059149
- (void)processPushMessage:(id)arg1;	// IMP=0x0010000000058c1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
