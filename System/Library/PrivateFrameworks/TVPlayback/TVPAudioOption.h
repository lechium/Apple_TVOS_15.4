//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaSelectionOption, NSString;

@interface TVPAudioOption : NSObject
{
    int _trackID;	// 8 = 0x8
    AVMediaSelectionOption *_avMediaSelectionOption;	// 16 = 0x10
    NSString *_localizedDisplayString;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_languageCodeFromLocale;	// 40 = 0x28
    NSString *_languageCodeBCP47;	// 48 = 0x30
    id _propertyListRepresentation;	// 56 = 0x38
    NSString *_savedLocaleLanguageCode;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000c44d
@property(copy, nonatomic) NSString *savedLocaleLanguageCode; // @synthesize savedLocaleLanguageCode=_savedLocaleLanguageCode;
@property(nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(retain, nonatomic) id propertyListRepresentation; // @synthesize propertyListRepresentation=_propertyListRepresentation;
@property(copy, nonatomic) NSString *languageCodeBCP47; // @synthesize languageCodeBCP47=_languageCodeBCP47;
@property(copy, nonatomic) NSString *languageCodeFromLocale; // @synthesize languageCodeFromLocale=_languageCodeFromLocale;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *localizedDisplayString; // @synthesize localizedDisplayString=_localizedDisplayString;
@property(retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption; // @synthesize avMediaSelectionOption=_avMediaSelectionOption;
- (void)_currentLocaleDidChange:(id)arg1;	// IMP=0x000000000000c3af
- (id)description;	// IMP=0x000000000000c293
@property(readonly, nonatomic) _Bool hasAudioDescriptions;
- (unsigned long long)hash;	// IMP=0x000000000000be95
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bde7
- (void)dealloc;	// IMP=0x000000000000bd72
- (id)initWithOption:(id)arg1;	// IMP=0x000000000000bcac
- (id)initWithSavedTrackID:(int)arg1 savedLocaleLanguageCode:(id)arg2;	// IMP=0x000000000000bc2e
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x000000000000bbbc
- (id)mediaRemoteIdentifier;	// IMP=0x0000000000009f9e

@end

