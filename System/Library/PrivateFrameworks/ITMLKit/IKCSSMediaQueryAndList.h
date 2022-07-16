//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKMutableArray, NSString;

@interface IKCSSMediaQueryAndList
{
    IKMutableArray *_queryList;	// 8 = 0x8
    _Bool _negated;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000b250
@property _Bool negated; // @synthesize negated=_negated;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (id)description;	// IMP=0x000000000000b098
- (unsigned long long)count;	// IMP=0x000000000000b07b
- (id)subQueryAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000b05e
- (_Bool)evaluate;	// IMP=0x000000000000ae9b
- (id)expressionList;	// IMP=0x000000000000ae86
- (void)addQuery:(id)arg1;	// IMP=0x000000000000ae69
- (id)expressionAsString;	// IMP=0x000000000000ac0b
- (id)init;	// IMP=0x000000000000ab57

@end
