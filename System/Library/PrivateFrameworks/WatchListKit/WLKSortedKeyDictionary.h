//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface WLKSortedKeyDictionary : NSDictionary
{
    NSDictionary *_underlyingDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004eb3c
@property(copy, nonatomic) NSDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
- (id)keyEnumerator;	// IMP=0x000000000004e9cf
- (id)objectForKey:(id)arg1;	// IMP=0x000000000004e94c
- (unsigned long long)count;	// IMP=0x000000000004e908
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004e87d

@end

