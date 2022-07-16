//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject
{
    AFPreferences *_afPreferences;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000008e4441
- (void).cxx_destruct;	// IMP=0x00000000008e48c4
@property(retain, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
- (_Bool)isSmartLanguageSelectionEnabled;	// IMP=0x00000000008e4869
- (id)dictationSLSEnabledLanguages;	// IMP=0x00000000008e4853
- (void)afPreferencesChanged:(id)arg1;	// IMP=0x00000000008e4799
- (id)languageCode;	// IMP=0x00000000008e4783
- (id)manualEndpointingThreshold;	// IMP=0x00000000008e476d
- (_Bool)ignoreServerManualEndpointingThreshold;	// IMP=0x00000000008e4757
- (_Bool)suppressDictationOptIn;	// IMP=0x00000000008e4741
- (_Bool)suppressDataSharingOptIn;	// IMP=0x00000000008e472b
- (long long)dataSharingOptInStatus;	// IMP=0x00000000008e4715
- (_Bool)dictationIsEnabled;	// IMP=0x00000000008e46ff
- (id)initSingleton;	// IMP=0x00000000008e44a6

@end
