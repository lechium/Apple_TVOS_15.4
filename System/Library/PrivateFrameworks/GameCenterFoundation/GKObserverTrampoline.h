//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKObserverTrampoline : NSObject
{
    id _observee;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    int _cancellationPredicate;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f23f6
- (void)dealloc;	// IMP=0x00000000000f23b8
- (void)cancelObservation;	// IMP=0x00000000000f22cb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000f2213
@property(readonly) id token;
- (void)startObserving;	// IMP=0x00000000000f21cb
- (id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000f20c6

@end

