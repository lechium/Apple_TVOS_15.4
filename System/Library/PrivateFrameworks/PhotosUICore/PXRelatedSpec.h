//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXRelatedSpec
{
    long long _numberOfColumns;	// 8 = 0x8
    struct CGSize _interEntrySpacing;	// 16 = 0x10
}

@property(readonly, nonatomic) struct CGSize interEntrySpacing; // @synthesize interEntrySpacing=_interEntrySpacing;
@property(readonly, nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;	// IMP=0x00000000003e3f06
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000003e3e27

@end

