//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerResponseHandler : NSObject
{
}

- (void)_setSubscriptionDataWithResponse:(id)arg1 forJavascriptResponse:(id)arg2;	// IMP=0x000000000004e922
- (id)_parseSAMLResponseString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e84c
- (void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004dfeb
- (id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004db3e
- (void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d9b8

@end
