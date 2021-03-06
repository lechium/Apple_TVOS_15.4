//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSettingsConnection, NSArray, NSString;

@interface PBSSiriSettings : NSObject
{
    AFSettingsConnection *_connection;	// 8 = 0x8
    _Bool _dictationEnabled;	// 16 = 0x10
    _Bool _siriEnabled;	// 17 = 0x11
    _Bool _offeredEnableAssistant;	// 18 = 0x12
    _Bool _offeredEnableDictation;	// 19 = 0x13
    unsigned long long _dataSharingOptInStatus;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
}

+ (long long)_afDataSharingChangeSourceForOptInStatus:(unsigned long long)arg1;	// IMP=0x0000000000065610
+ (long long)_afDataSharingOptInStatusForOptInStatus:(unsigned long long)arg1;	// IMP=0x0000000000065590
+ (unsigned long long)_dataSharingOptInStatusForAFDataSharingOptInStatus:(long long)arg1;	// IMP=0x0000000000065510
+ (id)sharedInstance;	// IMP=0x00000000000631e0
- (void).cxx_destruct;	// IMP=0x0000000000065730
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned long long dataSharingOptInStatus; // @synthesize dataSharingOptInStatus=_dataSharingOptInStatus;
@property(nonatomic) _Bool offeredEnableDictation; // @synthesize offeredEnableDictation=_offeredEnableDictation;
@property(nonatomic) _Bool offeredEnableAssistant; // @synthesize offeredEnableAssistant=_offeredEnableAssistant;
@property(nonatomic, getter=isSiriEnabled) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
- (void)prefsChanged:(id)arg1;	// IMP=0x00000000000654c0
- (void)_reloadSettings;	// IMP=0x0000000000065040
- (void)deleteSiriHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064df0
- (_Bool)isDictationSupportedForSystemLanguage:(id)arg1;	// IMP=0x0000000000064d70
- (_Bool)isSirisupportedForStoreFrontID:(id)arg1;	// IMP=0x0000000000064cf0
- (_Bool)isSiriSupportedForSystemLanguage:(id)arg1;	// IMP=0x0000000000064c70
- (id)bestDictationLanguageForSystemLanguage:(id)arg1;	// IMP=0x0000000000064a10
- (id)_bestSiriLanguageForSystemLanguage:(id)arg1 forStoreFrontID:(id)arg2;	// IMP=0x00000000000644d0
- (id)bestSiriLanguageForStoreFrontID:(id)arg1;	// IMP=0x0000000000064450
- (id)bestSiriLanguageForSystemLanguage:(id)arg1;	// IMP=0x00000000000643d0
- (id)preferredSystemLanguageForSiriLanguage:(id)arg1;	// IMP=0x0000000000064240
@property(readonly, copy, nonatomic) NSArray *allAvailableLanguages;
@property(readonly, copy, nonatomic) NSArray *availableLanguages;
- (void)setLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063e70
- (void)setLanguage:(id)arg1;	// IMP=0x0000000000063d30
@property(readonly, nonatomic, getter=isSiriAvailable) _Bool siriAvailable;
- (void)setDataSharingOptInStatus:(unsigned long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(unsigned long long)arg3 reason:(id)arg4;	// IMP=0x00000000000639a0
@property(nonatomic, getter=isDictationEnabled) _Bool dictationEnabled; // @synthesize dictationEnabled=_dictationEnabled;
- (void)dealloc;	// IMP=0x0000000000063520
- (id)init;	// IMP=0x00000000000632a0

@end

