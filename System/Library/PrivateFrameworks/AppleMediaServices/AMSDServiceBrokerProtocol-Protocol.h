//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSPromise;
@protocol AMSDeviceMessengerClientInterface, AMSSecurityClientInterface;

@protocol AMSDServiceBrokerProtocol <NSObject>
- (AMSPromise *)callService:(AMSPromise *)arg1 then:(AMSPromise * (^)(id))arg2;
- (void)addInterruptionHandler:(void (^)(void))arg1;
- (AMSPromise *)securityServiceProxyWithDelegate:(id <AMSSecurityClientInterface>)arg1;
- (AMSPromise *)pushNotificationService;
- (AMSPromise *)purchaseServiceProxy;
- (AMSPromise *)fraudReportServiceProxy;
- (AMSPromise *)deviceMessengerProxyWithDelegate:(id <AMSDeviceMessengerClientInterface>)arg1;
- (AMSPromise *)cookieServiceProxy;
@end

