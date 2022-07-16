//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMFObjectObserver
{
    id _observedObject;	// 8 = 0x8
    CDUnknownBlockType _deallocationBlock;	// 16 = 0x10
    unsigned long long _cachedHash;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000ba82
@property(readonly) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(copy) CDUnknownBlockType deallocationBlock; // @synthesize deallocationBlock=_deallocationBlock;
@property(readonly) __weak id observedObject; // @synthesize observedObject=_observedObject;
- (void)_stopObserving;	// IMP=0x000000000000b9cf
- (void)_startObserving;	// IMP=0x000000000000b85b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b789
- (unsigned long long)hash;	// IMP=0x000000000000b777
- (void)dealloc;	// IMP=0x000000000000b71d
- (id)initWithObservedObject:(id)arg1;	// IMP=0x000000000000b65f
- (id)init;	// IMP=0x000000000000b5b7

@end
