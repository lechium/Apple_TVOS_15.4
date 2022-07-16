//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVKVONotifier-Protocol.h>

@class AVCallbackContextRegistry, AVWeakReference, NSString;
@protocol AVWeakObservable;

__attribute__((visibility("hidden")))
@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier>
{
    AVCallbackContextRegistry *_callbackContextRegistry;	// 8 = 0x8
    void *_callbackContextToken;	// 16 = 0x10
    NSObject *_observer;	// 24 = 0x18
    AVWeakReference *_weakReferenceToObject;	// 32 = 0x20
    NSObject<AVWeakObservable> *_unsafeUnretainedObject;	// 40 = 0x28
    NSString *_keyPath;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
    CDUnknownBlockType _block;	// 64 = 0x40
}

- (void)cancelCallbacks;	// IMP=0x000000000012e741
- (void)callbackDidFireWithChangeDictionary:(id)arg1;	// IMP=0x000000000012e6f0
- (void)start;	// IMP=0x000000000012e67e
- (void)dealloc;	// IMP=0x000000000012e5c9
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x000000000012e3ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
