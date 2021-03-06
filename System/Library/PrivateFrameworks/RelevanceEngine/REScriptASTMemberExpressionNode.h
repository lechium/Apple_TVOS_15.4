//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REScriptASTNode, REScriptToken;

@interface REScriptASTMemberExpressionNode
{
    REScriptASTNode *_expression;	// 8 = 0x8
    REScriptToken *_member;	// 16 = 0x10
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000509ed
- (void).cxx_destruct;	// IMP=0x0000000000050c1e
@property(readonly, nonatomic) REScriptToken *member; // @synthesize member=_member;
@property(readonly, nonatomic) REScriptASTNode *expression; // @synthesize expression=_expression;
- (id)dependencies;	// IMP=0x0000000000050bae
- (id)initWithMember:(id)arg1 expression:(id)arg2;	// IMP=0x0000000000050b09

@end

