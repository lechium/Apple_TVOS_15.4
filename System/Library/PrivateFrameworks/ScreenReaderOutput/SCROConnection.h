//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

@interface SCROConnection : NSObject <NSSecureCoding>
{
    unsigned int _pingPort;	// 8 = 0x8
    struct __CFRunLoopSource *_pingSource;	// 16 = 0x10
    struct __CFRunLoopSource *_invalidationSource;	// 24 = 0x18
    unsigned int _identifier;	// 32 = 0x20
    int _handlerType;	// 36 = 0x24
    id _delegate;	// 40 = 0x28
    _Atomic _Bool _isConnectionStarted;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000033b4d
+ (void)_addConnectionToRunLoop:(id)arg1;	// IMP=0x0000000000032436
+ (void)_unconfigServerAndRetry:(_Bool)arg1;	// IMP=0x00000000000321e0
+ (void)_configServerWithMachServiceName:(char *)arg1;	// IMP=0x0000000000031dc3
+ (void)_configServer;	// IMP=0x0000000000031d83
+ (_Bool)inUnitTests;	// IMP=0x0000000000031d3c
+ (void)_createConnectionRunLoop;	// IMP=0x0000000000031b11
+ (void)initialize;	// IMP=0x0000000000031a5e
- (void).cxx_destruct;	// IMP=0x0000000000033bf1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033bcf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033b55
- (void)_ping;	// IMP=0x0000000000033756
- (int)performHandlerActionForKey:(int)arg1;	// IMP=0x0000000000033662
- (id)handlerValueForKey:(int)arg1 withObject:(id)arg2;	// IMP=0x000000000003337b
- (id)handlerValueForKey:(int)arg1;	// IMP=0x0000000000033175
- (id)handlerArrayValueForKey:(int)arg1;	// IMP=0x000000000003311e
- (int)setHandlerValue:(id)arg1 forKey:(int)arg2;	// IMP=0x0000000000032ee7
- (int)registerHandlerCallbackForKey:(int)arg1;	// IMP=0x0000000000032df3
- (int)sendEvent:(id)arg1;	// IMP=0x0000000000032a2d
- (void)_stopConnection;	// IMP=0x0000000000032949
- (void)_startConnection;	// IMP=0x0000000000032583
- (void)invalidate;	// IMP=0x0000000000032558
- (id)initWithHandlerType:(int)arg1 delegate:(id)arg2;	// IMP=0x00000000000324ce

@end
