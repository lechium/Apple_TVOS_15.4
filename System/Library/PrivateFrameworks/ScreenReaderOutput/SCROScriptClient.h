//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, SCRCTargetSelectorTimer, SCROConnection;
@protocol OS_dispatch_queue;

@interface SCROScriptClient : NSObject
{
    NSLock *_lock;	// 8 = 0x8
    SCROConnection *_connection;	// 16 = 0x10
    SCRCTargetSelectorTimer *_timer;	// 24 = 0x18
    _Bool _isReady;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *__scriptDispatchQueue;	// 40 = 0x28
}

+ (id)sharedClient;	// IMP=0x0000000000037c6d
- (void).cxx_destruct;	// IMP=0x000000000003835d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue; // @synthesize _scriptDispatchQueue=__scriptDispatchQueue;
- (_Bool)runShortcutWithIdentifier:(id)arg1;	// IMP=0x0000000000038267
- (_Bool)runScriptFile:(id)arg1;	// IMP=0x000000000003818c
- (_Bool)_runAsyncWithConnection:(int)arg1 object:(id)arg2;	// IMP=0x0000000000038062
- (void)handleCallback:(id)arg1;	// IMP=0x0000000000037fe6
- (_Bool)_isReady;	// IMP=0x0000000000037fac
- (id)_lazyConnection;	// IMP=0x0000000000037e42
- (void)_killConnection;	// IMP=0x0000000000037daf
- (void)dealloc;	// IMP=0x0000000000037d6d
- (id)init;	// IMP=0x0000000000037cc2

@end

