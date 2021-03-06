//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CNPermissivePolicy
{
}

+ (id)sharedPermissivePolicy;	// IMP=0x00000000000c32ff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c348e
- (_Bool)isContactPropertySupported:(id)arg1;	// IMP=0x00000000000c3486
- (_Bool)shouldSetValue:(id)arg1 ofProperty:(id)arg2 onContact:(id)arg3 replacementValue:(id *)arg4;	// IMP=0x00000000000c347e
- (_Bool)shouldRemoveContact:(id)arg1;	// IMP=0x00000000000c3476
- (_Bool)shouldAddContact:(id)arg1;	// IMP=0x00000000000c346e
- (id)unsupportedKeyPathsForContactProperty:(id)arg1;	// IMP=0x00000000000c3466
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;	// IMP=0x00000000000c3454
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;	// IMP=0x00000000000c343b
- (id)supportedLabelsForContactProperty:(id)arg1;	// IMP=0x00000000000c3433
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;	// IMP=0x00000000000c338c
- (_Bool)isReadonly;	// IMP=0x00000000000c3384

@end

