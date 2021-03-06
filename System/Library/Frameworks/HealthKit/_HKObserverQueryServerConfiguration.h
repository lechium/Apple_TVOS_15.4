//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKObserverQueryServerConfiguration
{
    _Bool _observeUnfrozenSeries;	// 8 = 0x8
    NSArray *_queryDescriptors;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000968c7
- (void).cxx_destruct;	// IMP=0x0000000000096b39
@property(copy, nonatomic) NSArray *queryDescriptors; // @synthesize queryDescriptors=_queryDescriptors;
@property(nonatomic) _Bool observeUnfrozenSeries; // @synthesize observeUnfrozenSeries=_observeUnfrozenSeries;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096a80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000969df
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000968cf

@end

