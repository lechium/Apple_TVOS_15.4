//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSOwnedDictionaryProxy : NSDictionary
{
    id _owner;	// 8 = 0x8
}

- (id)objectForKey:(id)arg1;	// IMP=0x000000000022f701
- (id)keyEnumerator;	// IMP=0x000000000022f6e4
- (unsigned long long)count;	// IMP=0x000000000022f6c7
- (void)superRelease;	// IMP=0x000000000022f675
- (oneway void)release;	// IMP=0x000000000022f610
- (id)retain;	// IMP=0x000000000022f5ab
- (id)initWithOwner:(id)arg1;	// IMP=0x000000000022f544

@end

