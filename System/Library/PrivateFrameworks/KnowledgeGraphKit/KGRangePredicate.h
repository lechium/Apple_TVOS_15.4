//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KGRangePredicate : NSObject
{
    unsigned long long _comparator;	// 8 = 0x8
    id _value1;	// 16 = 0x10
    id _value2;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000eb808
@property(readonly, nonatomic) id value2; // @synthesize value2=_value2;
@property(readonly, nonatomic) id value1; // @synthesize value1=_value1;
@property(readonly, nonatomic) unsigned long long comparator; // @synthesize comparator=_comparator;
- (id)initWithComparator:(unsigned long long)arg1 value1:(id)arg2 value2:(id)arg3;	// IMP=0x00000000000eb745

@end

