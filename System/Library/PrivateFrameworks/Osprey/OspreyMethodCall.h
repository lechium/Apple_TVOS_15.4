//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OspreyRPC;

@interface OspreyMethodCall : NSObject
{
    NSString *_methodName;	// 8 = 0x8
    id <OspreyRPC> _channel;	// 16 = 0x10
    CDUnknownBlockType _serializeRequest;	// 24 = 0x18
    CDUnknownBlockType _deserializeResponse;	// 32 = 0x20
    CDUnknownBlockType _defaultRequestBuilder;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000f2e1
- (id)callWithRequestBuilder:(CDUnknownBlockType)arg1 messageReceived:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000effb
- (id)callWithMessageReceived:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000efe1
- (id)initWithMethodName:(id)arg1 channel:(id)arg2 serializeRequest:(CDUnknownBlockType)arg3 deserializeResponse:(CDUnknownBlockType)arg4 defaultRequestBuilder:(CDUnknownBlockType)arg5;	// IMP=0x000000000000eeae

@end

