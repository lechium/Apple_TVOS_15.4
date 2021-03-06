//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PSIDateFilter;

@interface PSIParse : NSObject
{
    NSArray *_tokens;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
    PSIDateFilter *_dateFilter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000049fb56
@property(copy, nonatomic) PSIDateFilter *dateFilter; // @synthesize dateFilter=_dateFilter;
- (id)description;	// IMP=0x000000000049f8f7
- (id)descriptionWithToken:(id)arg1;	// IMP=0x000000000049f70c
- (id)parseByReplacingTokensInRange:(struct _NSRange)arg1 withTokens:(id)arg2;	// IMP=0x000000000049f652
- (id)parseByReplacingTokenAtIndex:(unsigned long long)arg1 withToken:(id)arg2;	// IMP=0x000000000049f5a4
@property(readonly, nonatomic) NSArray *datedTokens;
- (id)tokenAtIndex:(unsigned long long)arg1;	// IMP=0x000000000049f402
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000049f3ec
@property(readonly, nonatomic) unsigned long long numberOfTokens;
- (id)initWithTokens:(id)arg1 fromString:(id)arg2;	// IMP=0x000000000049f332
- (id)initWithToken:(id)arg1;	// IMP=0x000000000049f23e

@end

