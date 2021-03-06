//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSFormatter, NSString;

@interface HFAccessorySettingsEntity : NSObject
{
    _Bool _requiresDependenciesToShowSetting;	// 8 = 0x8
    _Bool _previewAccessory;	// 9 = 0x9
    _Bool _alwaysShowGroup;	// 10 = 0xa
    _Bool _wantsSeparateSectionPerGroup;	// 11 = 0xb
    _Bool _showInSeperateSection;	// 12 = 0xc
    _Bool _isSoftwareVersionNeeded;	// 13 = 0xd
    NSString *_keyPath;	// 16 = 0x10
    NSString *_sortKey;	// 24 = 0x18
    NSString *_localizedHeader;	// 32 = 0x20
    NSString *_localizedFooter;	// 40 = 0x28
    NSString *_overrideLocalizedTitleKey;	// 48 = 0x30
    NSArray *_booleanKeyPathDependencies;	// 56 = 0x38
    NSDictionary *_userInfo;	// 64 = 0x40
    long long _interfaceModality;	// 72 = 0x48
    NSString *_previewValueKeyPath;	// 80 = 0x50
    NSFormatter *_previewValueFormatter;	// 88 = 0x58
    NSFormatter *_footerTitleFormatter;	// 96 = 0x60
    NSFormatter *_headerTitleFormatter;	// 104 = 0x68
    NSString *_adapterIdentifier;	// 112 = 0x70
}

+ (id)settingsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000027d7d7
- (void).cxx_destruct;	// IMP=0x000000000027fade
@property(readonly, nonatomic) _Bool isSoftwareVersionNeeded; // @synthesize isSoftwareVersionNeeded=_isSoftwareVersionNeeded;
@property(readonly, nonatomic) _Bool showInSeperateSection; // @synthesize showInSeperateSection=_showInSeperateSection;
@property(readonly, copy, nonatomic) NSString *adapterIdentifier; // @synthesize adapterIdentifier=_adapterIdentifier;
@property(readonly, nonatomic) _Bool wantsSeparateSectionPerGroup; // @synthesize wantsSeparateSectionPerGroup=_wantsSeparateSectionPerGroup;
@property(readonly, nonatomic) _Bool alwaysShowGroup; // @synthesize alwaysShowGroup=_alwaysShowGroup;
@property(readonly, copy, nonatomic) NSFormatter *headerTitleFormatter; // @synthesize headerTitleFormatter=_headerTitleFormatter;
@property(readonly, copy, nonatomic) NSFormatter *footerTitleFormatter; // @synthesize footerTitleFormatter=_footerTitleFormatter;
@property(readonly, copy, nonatomic) NSFormatter *previewValueFormatter; // @synthesize previewValueFormatter=_previewValueFormatter;
@property(readonly, copy, nonatomic) NSString *previewValueKeyPath; // @synthesize previewValueKeyPath=_previewValueKeyPath;
@property(readonly, nonatomic) _Bool previewAccessory; // @synthesize previewAccessory=_previewAccessory;
@property(readonly, nonatomic) _Bool requiresDependenciesToShowSetting; // @synthesize requiresDependenciesToShowSetting=_requiresDependenciesToShowSetting;
@property(readonly, nonatomic) long long interfaceModality; // @synthesize interfaceModality=_interfaceModality;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSArray *booleanKeyPathDependencies; // @synthesize booleanKeyPathDependencies=_booleanKeyPathDependencies;
@property(readonly, copy, nonatomic) NSString *overrideLocalizedTitleKey; // @synthesize overrideLocalizedTitleKey=_overrideLocalizedTitleKey;
@property(readonly, copy, nonatomic) NSString *localizedFooter; // @synthesize localizedFooter=_localizedFooter;
@property(readonly, copy, nonatomic) NSString *localizedHeader; // @synthesize localizedHeader=_localizedHeader;
@property(readonly, copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000027dd2c
- (id)description;	// IMP=0x000000000027dc50

@end

