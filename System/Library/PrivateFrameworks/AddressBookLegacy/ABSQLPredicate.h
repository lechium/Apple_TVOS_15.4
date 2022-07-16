//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABSQLPredicate : NSObject
{
    CDUnknownBlockType _bindBlock;	// 8 = 0x8
    CDUnknownBlockType _matchInfoProvider;	// 16 = 0x10
    id _storage;	// 24 = 0x18
    NSString *_query;	// 32 = 0x20
}

+ (id)predicateUnioningPredicate:(id)arg1 withPredicate:(id)arg2;	// IMP=0x0000000000063bcc
+ (id)predicateForContactsMatchingText:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2 collator:(struct UCollator *)arg3 matchNameFieldsOnly:(_Bool)arg4;	// IMP=0x000000000006368d
+ (id)predicateForContactsMatchingPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 containerIdentifiers:(id)arg3 map:(id)arg4;	// IMP=0x00000000000633ca
+ (id)predicateForMeContact;	// IMP=0x000000000006336d
+ (id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(_Bool)arg2;	// IMP=0x0000000000063285
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 values:(id)arg2 groupIdentifiers:(id)arg3 containerIdentifiers:(id)arg4 limitToOneResult:(_Bool)arg5 map:(id)arg6;	// IMP=0x0000000000062ec8
+ (id)predicateForContactsMatchingPhoneNumbers:(id)arg1 containerIdentifiers:(id)arg2 map:(id)arg3;	// IMP=0x0000000000062824
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 country:(id)arg2 homeCountryCode:(id)arg3 prefixHint:(id)arg4 groupIdentifiers:(id)arg5 limitToOneResult:(_Bool)arg6;	// IMP=0x0000000000062452
+ (id)predicateForContactsInRange:(struct _NSRange)arg1 allowedStoreIdentifiers:(id)arg2 sortOrder:(int)arg3;	// IMP=0x000000000006220c
+ (id)_sqlValuesTableOfLength:(unsigned long long)arg1 columnCount:(unsigned long long)arg2;	// IMP=0x0000000000062164
+ (id)_sqlListOfLength:(unsigned long long)arg1;	// IMP=0x00000000000620d5
+ (id)predicateForContactsInRange:(struct _NSRange)arg1 sortOrder:(int)arg2;	// IMP=0x0000000000061fc5
+ (id)predicateForContactsMatchingOrganizationName:(id)arg1;	// IMP=0x0000000000061ec6
+ (id)predicateForSingleContactMatchingMultivalueProperty:(int)arg1 value:(id)arg2;	// IMP=0x0000000000061dde
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 value:(id)arg2;	// IMP=0x0000000000061cf6
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;	// IMP=0x0000000000061c3c
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;	// IMP=0x0000000000061b82
+ (id)predicateForContactsMatchingName:(id)arg1 addressBook:(void *)arg2;	// IMP=0x000000000006190d
+ (id)predicateForContactsWithLegacyIdentifier:(int)arg1;	// IMP=0x0000000000061854
+ (id)predicateForContactsWithUUIDs:(id)arg1 ignoreUnifiedIdentifiers:(_Bool)arg2;	// IMP=0x0000000000061550
+ (id)bindPlaceholderStringOfCount:(unsigned long long)arg1;	// IMP=0x00000000000614db
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) id storage; // @synthesize storage=_storage;
@property(copy, nonatomic) CDUnknownBlockType matchInfoProvider; // @synthesize matchInfoProvider=_matchInfoProvider;
@property(copy, nonatomic) CDUnknownBlockType bindBlock; // @synthesize bindBlock=_bindBlock;
- (void)dealloc;	// IMP=0x0000000000061483

@end
