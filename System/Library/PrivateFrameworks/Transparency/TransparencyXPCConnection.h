//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (void)invokeXPCSynchronousCallWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f6e7
+ (void)invokeXPCAsynchronousCallWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f6cc
+ (void)invokeXPCWithBlock:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;	// IMP=0x000000000000f169
+ (id)instance;	// IMP=0x000000000000f161
- (void).cxx_destruct;	// IMP=0x000000000000f728
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)createConnection;	// IMP=0x000000000000ec9a
- (void)dealloc;	// IMP=0x000000000000ebe8

@end

