//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriKitRuntime/NSXPCListenerDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtCC14SiriKitRuntime21ConversationXPCServer8Listener : NSObject <NSXPCListenerDelegate>
{
    MISSING_TYPE *conversationService;	// 8 = 0x8
    MISSING_TYPE *listener;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f010
- (id)init;	// IMP=0x000000000000efc0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000ef00

@end

