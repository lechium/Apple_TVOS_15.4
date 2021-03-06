//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDCTCallCapabilities, CTXPCContextInfo, NSDictionary;
@protocol CSDCoreTelephonyClient;

@protocol CSDCoreTelephonyClientDelegate <NSObject>
- (void)emergencyCallbackModeDidChangeForAllSubscriptionsForClient:(id <CSDCoreTelephonyClient>)arg1;
- (void)client:(id <CSDCoreTelephonyClient>)arg1 subscription:(CTXPCContextInfo *)arg2 capabilitiesDidChange:(NSDictionary *)arg3;
- (void)client:(id <CSDCoreTelephonyClient>)arg1 capabilitiesDidChange:(NSDictionary *)arg2;
- (void)client:(id <CSDCoreTelephonyClient>)arg1 subscription:(CTXPCContextInfo *)arg2 callCapabilitiesDidChange:(CSDCTCallCapabilities *)arg3;
- (void)subscriptionsDidChangeForClient:(id <CSDCoreTelephonyClient>)arg1;
@end

