//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTDynamicTypeRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012b32b
+ (id)_propertyClasses;	// IMP=0x000000000012b1b2
- (void).cxx_destruct;	// IMP=0x000000000012b4a0
- (id)identifier;	// IMP=0x000000000012b48a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012b434
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012b38d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012b333
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x000000000012b233
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000012ace6
- (id)_delegatePath;	// IMP=0x000000000012acde
- (id)_declaringBundleBookmark;	// IMP=0x000000000012acd6
- (id)_localizedDescription;	// IMP=0x000000000012acce
- (_Bool)isChildOfTypeIdentifier:(id)arg1;	// IMP=0x000000000012abf9
- (id)childTypeIdentifiers;	// IMP=0x000000000012abe0
- (id)parentTypeIdentifiers;	// IMP=0x000000000012ab6f
- (void)_LSRecord_resolve_pedigree;	// IMP=0x000000000012ab54
- (id)pedigree;	// IMP=0x000000000012ab43
- (id)pedigreeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000012ab02
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x000000000012aa24
- (id)referenceURL;	// IMP=0x000000000012aa1c
- (id)preferredTagOfClass:(id)arg1;	// IMP=0x000000000012a9fc
- (id)tagSpecification;	// IMP=0x000000000012a987
- (id)declaration;	// IMP=0x000000000012a886
- (id)declaringBundleRecord;	// IMP=0x000000000012a87e
- (_Bool)isCoreType;	// IMP=0x000000000012a876
- (_Bool)isActive;	// IMP=0x000000000012a86e
- (_Bool)isImported;	// IMP=0x000000000012a866
- (_Bool)isExported;	// IMP=0x000000000012a85e
- (_Bool)isInPublicDomain;	// IMP=0x000000000012a856
- (_Bool)isWildcard;	// IMP=0x000000000012a84e
- (_Bool)isDeclared;	// IMP=0x000000000012a846
- (_Bool)isDynamic;	// IMP=0x000000000012a83e
- (id)version;	// IMP=0x000000000012a836
- (id)_initWithContext:(struct LSContext *)arg1 dynamicUTI:(id)arg2;	// IMP=0x000000000012a79c

@end

