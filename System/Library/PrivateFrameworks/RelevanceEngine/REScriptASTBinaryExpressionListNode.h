//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface REScriptASTBinaryExpressionListNode
{
    NSArray *_expressions;	// 8 = 0x8
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009b756
- (void).cxx_destruct;	// IMP=0x000000000009bb67
@property(readonly, nonatomic) NSArray *expressions; // @synthesize expressions=_expressions;
- (id)dependencies;	// IMP=0x000000000009b98a
- (id)initWithExpressions:(id)arg1;	// IMP=0x000000000009b8c7

@end

