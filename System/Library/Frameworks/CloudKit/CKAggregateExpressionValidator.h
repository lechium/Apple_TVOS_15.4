//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CKAggregateExpressionValidator
{
    NSArray *_subExpressionValidators;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013d4c3
@property(retain, nonatomic) NSArray *subExpressionValidators; // @synthesize subExpressionValidators=_subExpressionValidators;
- (id)CKPropertiesDescription;	// IMP=0x000000000013d432
- (_Bool)validate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013cb12
- (id)initWithValidators:(id)arg1;	// IMP=0x000000000013caa4

@end

