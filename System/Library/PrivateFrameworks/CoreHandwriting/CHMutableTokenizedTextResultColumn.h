//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CHMutableTokenizedTextResultColumn
{
}

- (id)_mutableTokenRows;	// IMP=0x0000000000091fa0
- (void)sortTokenRows;	// IMP=0x0000000000091c60
- (void)removeTokenRowAtIndex:(long long)arg1;	// IMP=0x0000000000091b30
- (void)setTokenRowWithTokens:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000919b0
- (long long)addTokenRowWithTokens:(id)arg1;	// IMP=0x0000000000091920
@property(copy, nonatomic) NSArray *tokenRows; // @dynamic tokenRows;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000918b0
- (id)initWithTokenRows:(id)arg1;	// IMP=0x00000000000917b0

@end

