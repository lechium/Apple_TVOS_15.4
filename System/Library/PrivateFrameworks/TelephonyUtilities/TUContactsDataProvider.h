//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUContactsDataProviderAppleCareHandles;
@protocol TUContactsDataSource;

@interface TUContactsDataProvider : NSObject
{
    _Bool _useAsianNameFormat;	// 8 = 0x8
    CDUnknownBlockType _localeSupportsPrefixHintForFetchRequest;	// 16 = 0x10
    id <TUContactsDataSource> _contactsDataSource;	// 24 = 0x18
    TUContactsDataProviderAppleCareHandles *_appleCareHandles;	// 32 = 0x20
}

+ (id)asianLocaleCountryCodes;	// IMP=0x000000000004a479
+ (id)unsupportedLocalesForPrefixHint;	// IMP=0x000000000004a40d
+ (id)defaultContactKeyDescriptors;	// IMP=0x000000000004a25c
+ (id)numberFormatter;	// IMP=0x000000000004a1ee
+ (id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg1;	// IMP=0x000000000004a0dd
- (void).cxx_destruct;	// IMP=0x000000000004a63a
@property(copy, nonatomic) TUContactsDataProviderAppleCareHandles *appleCareHandles; // @synthesize appleCareHandles=_appleCareHandles;
@property(readonly, nonatomic) id <TUContactsDataSource> contactsDataSource; // @synthesize contactsDataSource=_contactsDataSource;
@property(copy, nonatomic) CDUnknownBlockType localeSupportsPrefixHintForFetchRequest; // @synthesize localeSupportsPrefixHintForFetchRequest=_localeSupportsPrefixHintForFetchRequest;
@property(nonatomic) _Bool useAsianNameFormat; // @synthesize useAsianNameFormat=_useAsianNameFormat;
- (id)ISOCountryCodeForHandle:(id)arg1 fetchRequest:(id)arg2;	// IMP=0x000000000004a4e5
- (id)prefixHintForFetchRequest:(id)arg1;	// IMP=0x000000000004a384
- (int)personIDForContact:(id)arg1;	// IMP=0x0000000000049fe3
- (id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2;	// IMP=0x0000000000049e56
- (id)compositeNameForFetchRequest:(id)arg1;	// IMP=0x0000000000049a0c
- (id)compositeNameForContacts:(id)arg1;	// IMP=0x0000000000049602
- (id)localizedCompositeNameForContact:(id)arg1 secondContact:(id)arg2;	// IMP=0x00000000000490ba
- (id)contactsForHandle:(id)arg1 countryCode:(id)arg2 keysToFetch:(id)arg3 prefixHint:(id)arg4;	// IMP=0x0000000000048d2d
- (id)unifiedContactsForFetchRequest:(id)arg1;	// IMP=0x0000000000048880
- (id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000004865d
- (id)labeledHandlesForContacts:(id)arg1;	// IMP=0x0000000000047f66
- (id)labeledHandlesForContactWithIdentifier:(id)arg1;	// IMP=0x0000000000047e9c
- (id)contactLabelForContacts:(id)arg1 matchingHandle:(id)arg2 countryCode:(id)arg3;	// IMP=0x0000000000047c7e
- (id)executeFetchRequest:(id)arg1;	// IMP=0x0000000000046798
- (id)initWithContactsDataSource:(id)arg1;	// IMP=0x000000000004645c
- (id)init;	// IMP=0x0000000000046402

@end

