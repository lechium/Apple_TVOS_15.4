//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVKVOIntrospection-Protocol.h>
#import <AVFCore/AVKVONotifier-Protocol.h>

@class AVCallbackContextRegistry, NSString;

__attribute__((visibility("hidden")))
@interface AVClientBlockKVONotifier : NSObject <AVKVONotifier, AVKVOIntrospection>
{
    AVCallbackContextRegistry *_callbackContextRegistry;	// 8 = 0x8
    void *_callbackContextToken;	// 16 = 0x10
    NSObject *_observer;	// 24 = 0x18
    NSObject *_object;	// 32 = 0x20
    NSString *_keyPath;	// 40 = 0x28
    unsigned long long _options;	// 48 = 0x30
    CDUnknownBlockType _block;	// 56 = 0x38
}

- (void)cancelCallbacks;	// IMP=0x000000000012e352
- (void)callbackDidFireWithChangeDictionary:(id)arg1;	// IMP=0x000000000012e340
- (void)start;	// IMP=0x000000000012e2f7
@property(readonly, nonatomic) NSObject *observedObject;
- (void)dealloc;	// IMP=0x000000000012e245
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x000000000012e063

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

