//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SADomainObject, SAUIDomainObjectPicker;

@interface SAUIDomainObjectPickerSelection
{
}

+ (id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003e8b5
+ (id)domainObjectPickerSelection;	// IMP=0x000000000003e8a3
- (_Bool)requiresResponse;	// IMP=0x000000000003e903
@property(retain, nonatomic) SADomainObject *selectedItem;
@property(retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
- (id)encodedClassName;	// IMP=0x000000000003e896
- (id)groupIdentifier;	// IMP=0x000000000003e882

@end
