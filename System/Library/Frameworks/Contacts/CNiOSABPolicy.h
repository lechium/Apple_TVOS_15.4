//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface CNiOSABPolicy <NSSecureCoding>
{
    void *_iOSABPolicy;	// 8 = 0x8
    void *_fakePerson;	// 16 = 0x10
    _Bool _abSourceIsContentReadonly;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000863cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008645b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000863d4
- (_Bool)isEqualToPolicy:(id)arg1;	// IMP=0x0000000000086396
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000086339
- (_Bool)shouldRemoveContact:(id)arg1;	// IMP=0x0000000000086301
- (_Bool)shouldAddContact:(id)arg1;	// IMP=0x00000000000862c9
- (_Bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id *)arg4;	// IMP=0x0000000000086149
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;	// IMP=0x0000000000085fe2
- (id)_orderedLabels:(id)arg1 withOrder:(id)arg2;	// IMP=0x0000000000085eea
- (id)supportedLabelsForContactProperty:(id)arg1;	// IMP=0x0000000000085b83
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;	// IMP=0x0000000000085a82
- (_Bool)isReadonly;	// IMP=0x0000000000085a72
- (void)dealloc;	// IMP=0x0000000000085a21
- (id)initWithAddressBookPolicy:(void *)arg1 readOnly:(_Bool)arg2;	// IMP=0x00000000000859a4

@end
