//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (CPLArchiver)
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;	// IMP=0x0000000000065a01
+ (id)cplAllPropertyNames;	// IMP=0x00000000000ce57f
+ (void)cplDumpProperties;	// IMP=0x00000000000ce4ba
+ (id)_cplPropertyAttributeMap;	// IMP=0x00000000000ce3dc
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;	// IMP=0x00000000000cd73d
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;	// IMP=0x00000000000cd735
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;	// IMP=0x00000000000cd6d7
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;	// IMP=0x00000000000cd6cf
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x0000000000063a7f
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x00000000000639cd
- (id)storedClassNameForCPLArchiver:(id)arg1;	// IMP=0x00000000000639b3
- (unsigned long long)cplSpecialHash;	// IMP=0x00000000000ca15b
- (_Bool)cplSpecialIsEqual:(id)arg1;	// IMP=0x00000000000ca149
- (id)cplFullDescription;	// IMP=0x00000000000ca12d
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ca11b
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca101
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c9d28
- (void)cplClearProperties:(id)arg1;	// IMP=0x00000000000c9b09
- (unsigned long long)cplHash;	// IMP=0x00000000000c9a15
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c99fd
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 diffTracker:(id)arg3 withEqualityBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c97d0
- (_Bool)cplIsEqual:(id)arg1 withEqualityBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c97b6
- (_Bool)cplIsEqual:(id)arg1;	// IMP=0x00000000000c97a2
- (void)cplDecodePropertiesFromCoder:(id)arg1;	// IMP=0x00000000000c96df
- (void)cplEncodePropertiesWithCoder:(id)arg1;	// IMP=0x00000000000c961c
- (id)cplDeepCopy;	// IMP=0x00000000000c95d6
@end

