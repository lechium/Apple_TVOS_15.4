//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFPropertyDifference
{
    id _valueA;	// 32 = 0x20
    id _valueB;	// 40 = 0x28
}

+ (_Bool)object:(id)arg1 isEqualToObject:(id)arg2;	// IMP=0x000000000003d219
+ (id)compareObjectA:(id)arg1 toObjectB:(id)arg2 key:(id)arg3 priority:(unsigned long long)arg4;	// IMP=0x000000000003d169
- (void).cxx_destruct;	// IMP=0x000000000003d69e
@property(retain, nonatomic) id valueB; // @synthesize valueB=_valueB;
@property(retain, nonatomic) id valueA; // @synthesize valueA=_valueA;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d55b
- (id)descriptionBuilder;	// IMP=0x000000000003d3a0
- (id)initWithObjectA:(id)arg1 toObjectB:(id)arg2 key:(id)arg3 priority:(unsigned long long)arg4;	// IMP=0x000000000003d0b2

@end

