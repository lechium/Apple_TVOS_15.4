//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICPushNotificationsResponse, ICStoreRequestContext, NSString;

@interface ICPushNotificationsDisableTypesRequest
{
    ICStoreRequestContext *_requestContext;	// 8 = 0x8
    NSString *_notificationType;	// 16 = 0x10
    ICPushNotificationsResponse *_response;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a2f2f
- (void)execute;	// IMP=0x00000000000a2e0d
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a2d7b
- (id)initWithRequestContext:(id)arg1 notificationType:(id)arg2;	// IMP=0x00000000000a2cb4

@end

