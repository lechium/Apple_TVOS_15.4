//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFOAuth2ProviderSessionManager-Protocol.h>

@class NSString;

@interface WFSlackOAuth2SessionManager <WFOAuth2ProviderSessionManager>
{
}

- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;	// IMP=0x00000000001f8cbd
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;	// IMP=0x00000000001f8ca3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

