//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVKeyValueObserverCollection : NSObject
{
    NSMutableDictionary *_keyObserverMap;	// 8 = 0x8
    id _rootObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f4f57
@property(readonly) id rootObject; // @synthesize rootObject=_rootObject;
@property(readonly) NSMutableDictionary *keyObserverMap; // @synthesize keyObserverMap=_keyObserverMap;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000f4e3a
- (void)bindKeyPath:(id)arg1 toBoolKeyPath:(id)arg2;	// IMP=0x00000000000f4e21
- (void)bindKeyPath:(id)arg1 toKeyPath:(id)arg2;	// IMP=0x00000000000f4e0c
- (void)bindKeyPath:(id)arg1 toKeyPath:(id)arg2 nilNumber:(id)arg3;	// IMP=0x00000000000f4ca5
- (void)startObservingKeyPath:(id)arg1 options:(unsigned long long)arg2 selector:(SEL)arg3;	// IMP=0x00000000000f4b8b
- (void)invalidate;	// IMP=0x00000000000f498e
- (void)stopObservingKeyPath:(id)arg1;	// IMP=0x00000000000f489c
- (void)startObservingKeyPath:(id)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f474a
- (void)dealloc;	// IMP=0x00000000000f470c
- (id)initWithObservedObject:(id)arg1;	// IMP=0x00000000000f4689

@end

