//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNMultiValueReorderUpdate
{
    NSOrderedSet *_values;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000fce39
@property(readonly, copy, nonatomic) NSOrderedSet *values; // @synthesize values=_values;
- (id)description;	// IMP=0x00000000000fcd96
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;	// IMP=0x00000000000fcbab
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x00000000000fcabc
- (id)initWithValues:(id)arg1;	// IMP=0x00000000000fca1c
- (_Bool)applyToABPerson:(void *)arg1 abmultivalue:(void *)arg2 propertyDescription:(id)arg3 logger:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000b04ff

@end

