//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDBucket : NSObject
{
    _Bool _hasInclusiveUpperBound;	// 8 = 0x8
    double _lowerInclusiveBound;	// 16 = 0x10
    double _upperBound;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000a086
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) _Bool hasInclusiveUpperBound; // @synthesize hasInclusiveUpperBound=_hasInclusiveUpperBound;
@property(nonatomic) double upperBound; // @synthesize upperBound=_upperBound;
@property(nonatomic) double lowerInclusiveBound; // @synthesize lowerInclusiveBound=_lowerInclusiveBound;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000804c

@end

