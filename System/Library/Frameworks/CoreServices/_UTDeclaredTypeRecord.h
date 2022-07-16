//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSBundleRecord;

__attribute__((visibility("hidden")))
@interface _UTDeclaredTypeRecord
{
    LSBundleRecord *_weakDeclaringBundleRecord;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012a713
+ (id)_propertyClasses;	// IMP=0x000000000012a574
- (void).cxx_destruct;	// IMP=0x000000000012a78b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012a71b
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x000000000012a645
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000012a4dc
- (void)_LSRecord_resolve__delegatePath;	// IMP=0x000000000012a4c1
- (id)_delegatePath;	// IMP=0x000000000012a4b0
- (id)_delegatePathWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000012a3da
- (void)_LSRecord_resolve__declaringBundleBookmark;	// IMP=0x000000000012a3bf
- (id)_declaringBundleBookmark;	// IMP=0x000000000012a3ae
- (id)_declaringBundleBookmarkWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000012a33e
- (void)_LSRecord_resolve__localizedDescription;	// IMP=0x000000000012a323
- (id)_localizedDescription;	// IMP=0x000000000012a312
- (id)_localizedDescriptionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000012a2c1
- (void)_LSRecord_resolve_childTypeIdentifiers;	// IMP=0x000000000012a2a6
- (id)childTypeIdentifiers;	// IMP=0x000000000012a295
- (id)childTypeIdentifiersWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000012a13d
- (void)_LSRecord_resolve_parentTypeIdentifiers;	// IMP=0x000000000012a122
- (id)parentTypeIdentifiers;	// IMP=0x000000000012a111
- (id)parentTypeIdentifiersWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000129fb9
- (void)_LSRecord_resolve_pedigree;	// IMP=0x0000000000129f9e
- (id)pedigree;	// IMP=0x0000000000129f8d
- (id)pedigreeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000129f51
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x0000000000129d71
- (void)_LSRecord_resolve_referenceURL;	// IMP=0x0000000000129d56
- (id)referenceURL;	// IMP=0x0000000000129d45
- (id)referenceURLWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000129ccc
- (void)_LSRecord_resolve_tagSpecification;	// IMP=0x0000000000129cb1
- (id)tagSpecification;	// IMP=0x0000000000129ca0
- (id)tagSpecificationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000012999f
- (void)_LSRecord_resolve_declaration;	// IMP=0x0000000000129984
- (id)declaration;	// IMP=0x0000000000129973
- (id)declarationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000129571
- (id)declaringBundleRecord;	// IMP=0x000000000012952e
- (_Bool)isCoreType;	// IMP=0x0000000000129515
- (_Bool)isActive;	// IMP=0x0000000000129500
- (_Bool)isImported;	// IMP=0x00000000001294e8
- (_Bool)isExported;	// IMP=0x00000000001294cf
- (_Bool)isInPublicDomain;	// IMP=0x00000000001294b7
- (_Bool)isWildcard;	// IMP=0x000000000012949e
- (_Bool)isDeclared;	// IMP=0x0000000000129496
- (_Bool)isDynamic;	// IMP=0x000000000012948e
- (void)_LSRecord_resolve_version;	// IMP=0x0000000000129473
- (id)version;	// IMP=0x0000000000129462
- (id)versionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000012942a
- (void)_LSRecord_resolve_identifier;	// IMP=0x000000000012940f
- (id)identifier;	// IMP=0x00000000001293fe
- (id)identifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x00000000001293c9
- (void)_enumerateRelatedTypeStructuresWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000129287
- (void)_LSRecord_resolve__declaringBundleRecord;	// IMP=0x000000000012926c
@property(readonly) LSBundleRecord *_declaringBundleRecord;
- (id)_declaringBundleRecordWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x00000000001290ca
- (void)_LSRecord_resolve__rawFlags;	// IMP=0x00000000001290b8
@property(readonly) unsigned int _rawFlags;
- (unsigned int)_rawFlagsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000012909d

@end
