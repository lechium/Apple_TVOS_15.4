//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HCBurstTrie : NSObject
{
    struct _CFBurstTrie *_burstTrie;	// 8 = 0x8
    unsigned long long _keysAdded;	// 16 = 0x10
}

+ (id)burstTrieFromFile:(id)arg1;	// IMP=0x0000000000133e48
@property(nonatomic) struct _CFBurstTrie *burstTrie; // @synthesize burstTrie=_burstTrie;
@property(readonly, nonatomic) unsigned long long keysAdded; // @synthesize keysAdded=_keysAdded;
- (void)_createUnderlyingBurstTrie;	// IMP=0x0000000000133e11
- (_Bool)writeToFile:(id)arg1;	// IMP=0x0000000000133d83
- (unsigned long long)count;	// IMP=0x0000000000133d6c
- (id)payloadForKey:(id)arg1;	// IMP=0x0000000000133cd1
- (void)dealloc;	// IMP=0x0000000000133c92
- (id)init;	// IMP=0x0000000000133c3e

@end

