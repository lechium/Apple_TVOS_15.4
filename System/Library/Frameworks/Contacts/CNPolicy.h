//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@interface CNPolicy : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e894e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e89a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e8956
- (id)_replacementLabeledValue:(id)arg1 omittingKeys:(id)arg2;	// IMP=0x00000000000e8754
- (_Bool)_validateLabeledValueArrayAttributeSupport:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id *)arg3;	// IMP=0x00000000000e81f9
- (_Bool)_validateLabeledValueArrayLabels:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id *)arg3;	// IMP=0x00000000000e760d
- (_Bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id *)arg4;	// IMP=0x00000000000e7412
- (_Bool)isContactPropertySupported:(id)arg1;	// IMP=0x00000000000e740a
- (_Bool)shouldRemoveContact:(id)arg1;	// IMP=0x00000000000e7402
- (_Bool)shouldAddContact:(id)arg1;	// IMP=0x00000000000e73fa
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;	// IMP=0x00000000000e73f2
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;	// IMP=0x00000000000e73ea
- (id)supportedLabelsForContactProperty:(id)arg1;	// IMP=0x00000000000e73d1
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;	// IMP=0x00000000000e73c9
@property(readonly, nonatomic, getter=isReadonly) _Bool readonly;

@end
