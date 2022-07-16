//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTVoicemailInfoType, CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientVoicemailDelegateInternal <NSObject>

@optional
- (void)voicemailInfoAvailableNotification:(CTXPCServiceSubscriptionContext *)arg1 voicemailInfo:(CTVoicemailInfoType *)arg2;
- (void)voicemailDatabaseReset:(CTXPCServiceSubscriptionContext *)arg1;
@end

