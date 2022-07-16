//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBarButtonItemAppearanceChangeObserver-Protocol.h>

@class NSString, UIBarButtonItemAppearance;

@interface UIToolbarAppearance <_UIBarButtonItemAppearanceChangeObserver>
{
    UIBarButtonItemAppearance *_buttonAppearance;	// 24 = 0x18
    UIBarButtonItemAppearance *_doneButtonAppearance;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c07cd9
- (void).cxx_destruct;	// IMP=0x0000000000c08886
@property(copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance; // @synthesize doneButtonAppearance=_doneButtonAppearance;
@property(copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance; // @synthesize buttonAppearance=_buttonAppearance;
- (void)_barButtonItemDataChanged:(id)arg1;	// IMP=0x0000000000c086d6
- (void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3;	// IMP=0x0000000000c086d0
- (id)_doneButtonAppearance;	// IMP=0x0000000000c083a1
- (id)_plainButtonAppearance;	// IMP=0x0000000000c0838c
- (id)_doneButtonAppearanceData;	// IMP=0x0000000000c0836f
- (id)_plainButtonAppearanceData;	// IMP=0x0000000000c08352
- (_Bool)_checkEqualTo:(id)arg1;	// IMP=0x0000000000c08158
- (unsigned long long)_hashInto:(unsigned long long)arg1;	// IMP=0x0000000000c0808d
- (void)_describeInto:(id)arg1;	// IMP=0x0000000000c07fc6
- (void)_completeInit;	// IMP=0x0000000000c07f57
- (void)_decodeFromCoder:(id)arg1;	// IMP=0x0000000000c07e71
- (void)_copyFromAppearance:(id)arg1;	// IMP=0x0000000000c07d8d
- (void)_setupDefaults;	// IMP=0x0000000000c07ce1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c07c3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

