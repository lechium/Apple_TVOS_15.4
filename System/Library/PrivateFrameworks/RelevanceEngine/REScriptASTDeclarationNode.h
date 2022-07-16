//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REScriptASTNode, REScriptToken;

@interface REScriptASTDeclarationNode
{
    REScriptToken *_type;	// 8 = 0x8
    REScriptToken *_name;	// 16 = 0x10
    REScriptASTNode *_value;	// 24 = 0x18
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000648f0
- (void).cxx_destruct;	// IMP=0x0000000000064d01
@property(readonly, nonatomic) REScriptASTNode *value; // @synthesize value=_value;
@property(readonly, nonatomic) REScriptToken *name; // @synthesize name=_name;
@property(readonly, nonatomic) REScriptToken *type; // @synthesize type=_type;
- (id)dependencies;	// IMP=0x0000000000064c80
- (id)initWithName:(id)arg1 type:(id)arg2 expression:(id)arg3;	// IMP=0x0000000000064bac

@end
