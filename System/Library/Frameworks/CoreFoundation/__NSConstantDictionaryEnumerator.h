//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSConstantDictionary;

__attribute__((visibility("hidden")))
@interface __NSConstantDictionaryEnumerator
{
    NSConstantDictionary *_underlyingDictionary;	// 8 = 0x8
    unsigned long long _currentIndex;	// 16 = 0x10
    _Bool _isForKeys;	// 24 = 0x18
}

- (id)nextObject;	// IMP=0x000000000009ad51
- (id)initWithConstantDictionary:(id)arg1 enumerateKeys:(_Bool)arg2;	// IMP=0x000000000009acce

@end

