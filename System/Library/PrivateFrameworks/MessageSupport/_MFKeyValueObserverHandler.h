//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageSupport/MFKVOObservation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MFKeyValueObserverHandler : NSObject <MFKVOObservation>
{
    id _object;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    _Bool _observing;	// 32 = 0x20
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000002252
- (void)stopObserving;	// IMP=0x0000000000002219
- (void)startObservingWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000021e3
- (void)dealloc;	// IMP=0x000000000000218c
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000210b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
