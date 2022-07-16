//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaSelectionOption, NSNumber, NSString;

@interface TVPSubtitleOption : NSObject
{
    AVMediaSelectionOption *_avMediaSelectionOption;	// 8 = 0x8
    NSString *_languageCodeFromLocale;	// 16 = 0x10
    NSString *_languageCodeBCP47;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_localizedDisplayString;	// 40 = 0x28
    NSNumber *_cachedContainsOnlyForcedSubtitles;	// 48 = 0x30
    NSNumber *_cachedSubtitleType;	// 56 = 0x38
}

+ (id)autoSubtitleOption;	// IMP=0x00000000000f5e9d
+ (id)offSubtitleOptionWithAVMediaSelectionOption:(id)arg1;	// IMP=0x00000000000f5e50
+ (id)offSubtitleOption;	// IMP=0x00000000000f5e25
- (void).cxx_destruct;	// IMP=0x00000000000f66d1
@property(retain, nonatomic) NSNumber *cachedSubtitleType; // @synthesize cachedSubtitleType=_cachedSubtitleType;
@property(retain, nonatomic) NSNumber *cachedContainsOnlyForcedSubtitles; // @synthesize cachedContainsOnlyForcedSubtitles=_cachedContainsOnlyForcedSubtitles;
@property(copy, nonatomic) NSString *localizedDisplayString; // @synthesize localizedDisplayString=_localizedDisplayString;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *languageCodeBCP47; // @synthesize languageCodeBCP47=_languageCodeBCP47;
@property(copy, nonatomic) NSString *languageCodeFromLocale; // @synthesize languageCodeFromLocale=_languageCodeFromLocale;
@property(retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption; // @synthesize avMediaSelectionOption=_avMediaSelectionOption;
- (void)_currentLocaleDidChange:(id)arg1;	// IMP=0x00000000000f6630
- (id)description;	// IMP=0x00000000000f65e0
@property(readonly, nonatomic) long long subtitleType;
@property(readonly, nonatomic) _Bool containsOnlyForcedSubtitles;
- (unsigned long long)hash;	// IMP=0x00000000000f60c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f5ffc
- (void)dealloc;	// IMP=0x00000000000f5f87
- (id)initWithAVMediaSelectionOption:(id)arg1;	// IMP=0x00000000000f5ec8
@property(readonly, copy, nonatomic) NSString *mediaRemoteIdentifier;

@end
