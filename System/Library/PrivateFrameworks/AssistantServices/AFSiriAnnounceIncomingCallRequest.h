//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriExternalRequest-Protocol.h>

@class AFSiriIncomingCall;

@interface AFSiriAnnounceIncomingCallRequest : NSObject <AFSiriExternalRequest>
{
    AFSiriIncomingCall *_call;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d061c
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d0278
- (id)initWithIncomingCall:(id)arg1;	// IMP=0x00000000000d0205

@end

