//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/SCROHandlerProtocol-Protocol.h>

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol>
{
    NSLock *_lock;	// 8 = 0x8
    _Bool isInvalid;	// 16 = 0x10
    id _callbackDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000034ab0
@property(nonatomic) __weak id callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
- (int)handlePerformActionForKey:(int)arg1 trusted:(_Bool)arg2;	// IMP=0x0000000000034a7e
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(_Bool)arg4;	// IMP=0x0000000000034a73
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;	// IMP=0x0000000000034a5b
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;	// IMP=0x0000000000034a50
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(_Bool)arg2;	// IMP=0x0000000000034a45
- (void)invalidate;	// IMP=0x0000000000034a3b
- (void)unlock;	// IMP=0x0000000000034a25
- (void)lock;	// IMP=0x0000000000034a0f
- (id)init;	// IMP=0x00000000000349b9

@end

