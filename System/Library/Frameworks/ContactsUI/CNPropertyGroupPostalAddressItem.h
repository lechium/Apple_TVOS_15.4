//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPostalAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPostalAddressItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x0000000000089f19
- (id)bestValue:(id)arg1;	// IMP=0x000000000008ad45
- (_Bool)_isMinimalAddress:(id)arg1;	// IMP=0x000000000008ad0f
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;	// IMP=0x000000000008a5b0
- (id)defaultActionURL;	// IMP=0x000000000008a3e5
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000008a03e
- (id)normalizedValue;	// IMP=0x0000000000089f82
@property(readonly, nonatomic) CNPostalAddress *address;

@end

