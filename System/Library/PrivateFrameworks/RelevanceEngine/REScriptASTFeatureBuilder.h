//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface REScriptASTFeatureBuilder
{
}

- (_Bool)_loadIndexFromNode:(id)arg1 index:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000009d881
- (id)_buildTransformedFeature:(id)arg1 features:(id)arg2 node:(id)arg3 error:(id *)arg4;	// IMP=0x000000000009d660
- (id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009d319
- (id)buildObjectWithFunctionNode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009ca53
- (id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009c7b2
- (id)buildObjectWithIdentifierNode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009c471
- (id)objectTypeErrorDescription;	// IMP=0x000000000009c458

@end

