//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, TVSDocumentLoader, TVSStoreFrontLocale;

@interface TVSStoreFront : NSObject
{
    TVSDocumentLoader *_availableSFDocument;	// 8 = 0x8
    _Bool _changingStoreFront;	// 16 = 0x10
    _Bool _loadAvailableStoreFrontsChangedLocale;	// 17 = 0x11
    NSDictionary *_storeFrontDictionary;	// 24 = 0x18
    TVSStoreFrontLocale *_locale;	// 32 = 0x20
    NSDictionary *_availableStoreFronts;	// 40 = 0x28
    unsigned long long _loadStoreFrontRetryAttempt;	// 48 = 0x30
    unsigned long long _loadAvailableStoreFrontRetryAttempt;	// 56 = 0x38
}

+ (_Bool)_switchToStoreFrontWithLocale:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000000000cb5f
+ (_Bool)switchToStoreFrontWithLocale:(id)arg1;	// IMP=0x000000000000cb4b
+ (id)allLanguages;	// IMP=0x000000000000caa4
+ (id)availableLocales;	// IMP=0x000000000000c84f
+ (id)sharedInstance;	// IMP=0x000000000000ac43
+ (void)connect;	// IMP=0x000000000000ab81
+ (void)initialize;	// IMP=0x000000000000ab07
- (void).cxx_destruct;	// IMP=0x000000000000d061
@property unsigned long long loadAvailableStoreFrontRetryAttempt; // @synthesize loadAvailableStoreFrontRetryAttempt=_loadAvailableStoreFrontRetryAttempt;
@property unsigned long long loadStoreFrontRetryAttempt; // @synthesize loadStoreFrontRetryAttempt=_loadStoreFrontRetryAttempt;
@property _Bool loadAvailableStoreFrontsChangedLocale; // @synthesize loadAvailableStoreFrontsChangedLocale=_loadAvailableStoreFrontsChangedLocale;
@property(retain) NSDictionary *availableStoreFronts; // @synthesize availableStoreFronts=_availableStoreFronts;
@property(retain) TVSStoreFrontLocale *locale; // @synthesize locale=_locale;
@property(getter=isChangingStoreFront) _Bool changingStoreFront; // @synthesize changingStoreFront=_changingStoreFront;
- (id)allLanguages;	// IMP=0x000000000000caf4
- (id)availableLocales;	// IMP=0x000000000000c89f
- (void)_updateDateAndTimeFromURLResponse:(id)arg1;	// IMP=0x000000000000c60e
- (void)_updateDateAndTimeFromNonTLSSource;	// IMP=0x000000000000c472
- (_Bool)_extractDate:(id *)arg1 fromString:(id)arg2;	// IMP=0x000000000000c341
- (_Bool)_extractDateString:(id *)arg1 fromStoreResponse:(id)arg2;	// IMP=0x000000000000c2bb
- (_Bool)_validateCoreTimeEntitlement;	// IMP=0x000000000000c23f
- (void)_inspectCurrentStoreFront;	// IMP=0x000000000000c016
- (void)_retry:(unsigned long long)arg1 withSelector:(SEL)arg2;	// IMP=0x000000000000be85
- (void)_loadStoreFront;	// IMP=0x000000000000bb0d
@property(readonly, retain) NSString *localizedDescription;
- (void)_loadAvailableStoreFronts;	// IMP=0x000000000000b45f
- (void)_handleSystemLanguageUpdated;	// IMP=0x000000000000b390
- (void)_urlBagLoaded:(id)arg1;	// IMP=0x000000000000b37e
- (id)valueForStoreFrontKey:(id)arg1;	// IMP=0x000000000000b368
@property(readonly, retain) NSArray *vendorBags;
- (id)menuDefinitionForMediaType:(id)arg1;	// IMP=0x000000000000b246
@property(readonly, retain) NSArray *menuDefinitions;
@property(retain) NSDictionary *storeFrontDictionary; // @synthesize storeFrontDictionary=_storeFrontDictionary;
- (void)dealloc;	// IMP=0x000000000000ade7
- (id)initInstance;	// IMP=0x000000000000acfa

@end

