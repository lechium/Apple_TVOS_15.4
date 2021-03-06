//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface NSDictionary (HMFoundation) <HMFObject>
+ (id)shortDescription;	// IMP=0x00000000000175b3
- (id)hmf_fileHandleForKey:(id)arg1;	// IMP=0x0000000000018738
- (id)hmf_unarchivedObjectForKey:(id)arg1 ofClasses:(id)arg2;	// IMP=0x0000000000018549
- (id)hmf_valueForKey:(id)arg1;	// IMP=0x00000000000184f2
- (id)hmf_UUIDForKey:(id)arg1;	// IMP=0x00000000000183d6
- (id)hmf_URLForKey:(id)arg1;	// IMP=0x000000000001837f
- (id)hmf_timeZoneForKey:(id)arg1;	// IMP=0x0000000000018328
- (id)hmf_stringForKey:(id)arg1;	// IMP=0x00000000000182d1
- (id)hmf_mutableSetForKey:(id)arg1;	// IMP=0x000000000001827a
- (id)hmf_setForKey:(id)arg1;	// IMP=0x0000000000018223
- (id)hmf_numberForKey:(id)arg1;	// IMP=0x00000000000181cc
- (long long)hmf_integerForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000180d7
- (id)hmf_nullForKey:(id)arg1;	// IMP=0x0000000000018080
- (id)hmf_errorForKey:(id)arg1;	// IMP=0x0000000000018029
- (id)hmf_mutableDictionaryForKey:(id)arg1;	// IMP=0x0000000000017fd2
- (id)hmf_dictionaryForKey:(id)arg1;	// IMP=0x0000000000017f7b
- (id)hmf_dateComponentsForKey:(id)arg1;	// IMP=0x0000000000017f24
- (id)hmf_dateForKey:(id)arg1;	// IMP=0x0000000000017ecd
- (id)hmf_dataForKey:(id)arg1;	// IMP=0x0000000000017e76
- (id)hmf_calendarForKey:(id)arg1;	// IMP=0x0000000000017e1f
- (_Bool)hmf_boolForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017d2c
- (_Bool)hmf_boolForKey:(id)arg1 isPresent:(_Bool *)arg2;	// IMP=0x0000000000017cd0
- (_Bool)hmf_boolForKey:(id)arg1;	// IMP=0x0000000000017cbc
- (id)hmf_base64EncodedDataForKey:(id)arg1;	// IMP=0x0000000000017c57
- (id)hmf_mutableArrayForKey:(id)arg1;	// IMP=0x0000000000017c00
- (id)hmf_arrayForKey:(id)arg1 ofClasses:(id)arg2;	// IMP=0x0000000000017942
- (id)hmf_arrayForKey:(id)arg1;	// IMP=0x00000000000178eb
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)arrayOfDateComponentsFromDataForKey:(id)arg1;	// IMP=0x00000000000192d2
- (id)urlForKey:(id)arg1;	// IMP=0x00000000000192c0
- (id)nsValueForKey:(id)arg1;	// IMP=0x00000000000192ae
- (id)nullForKey:(id)arg1;	// IMP=0x000000000001929c
- (id)predicateFromDataForKey:(id)arg1;	// IMP=0x000000000001913e
- (id)calendarFromDataForKey:(id)arg1;	// IMP=0x00000000000190ee
- (id)calendarForKey:(id)arg1;	// IMP=0x00000000000190dc
- (id)errorFromDataForKey:(id)arg1;	// IMP=0x0000000000018ff7
- (id)errorForKey:(id)arg1;	// IMP=0x0000000000018fe5
- (id)dateComponentsFromDataForKey:(id)arg1;	// IMP=0x0000000000018f95
- (id)dateComponentsForKey:(id)arg1;	// IMP=0x0000000000018f20
- (id)timeZoneFromDataForKey:(id)arg1;	// IMP=0x0000000000018ed0
- (id)timeZoneForKey:(id)arg1;	// IMP=0x0000000000018ebe
- (id)dateForKey:(id)arg1;	// IMP=0x0000000000018eac
- (id)base64EncodedDataForKey:(id)arg1;	// IMP=0x0000000000018e9a
- (id)dataForKey:(id)arg1;	// IMP=0x0000000000018e88
- (id)setForKey:(id)arg1;	// IMP=0x0000000000018e76
- (id)mutableSetForKey:(id)arg1;	// IMP=0x0000000000018e64
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000000018e52
- (id)mutableArrayForKey:(id)arg1;	// IMP=0x0000000000018e40
- (id)mutableDictionaryForKey:(id)arg1;	// IMP=0x0000000000018e2e
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000000018e1c
- (_Bool)boolForKey:(id)arg1 keyPresent:(_Bool *)arg2;	// IMP=0x0000000000018e0a
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000018df8
- (id)numberForKey:(id)arg1;	// IMP=0x0000000000018de6
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000018dd4
- (id)uuidFromStringForKey:(id)arg1;	// IMP=0x0000000000018d74
- (id)uuidForKey:(id)arg1;	// IMP=0x0000000000018d62
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;	// IMP=0x0000000000018d46
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(_Bool)arg2 blacklistedKeys:(id)arg3;	// IMP=0x000000000001878f

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

