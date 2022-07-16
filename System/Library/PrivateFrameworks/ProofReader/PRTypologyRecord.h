//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSValue, PRLanguage;

__attribute__((visibility("hidden")))
@interface PRTypologyRecord : NSObject
{
    NSString *_string;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
    PRLanguage *_langObj;	// 32 = 0x20
    NSArray *_languages;	// 40 = 0x28
    NSString *_appIdentifier;	// 48 = 0x30
    NSValue *_selectedRangeValue;	// 56 = 0x38
    NSArray *_topLanguages;	// 64 = 0x40
    NSArray *_keyEventArray;	// 72 = 0x48
    NSMutableArray *_typologyCorrections;	// 80 = 0x50
    NSMutableArray *_typologyCandidates;	// 88 = 0x58
    NSArray *_results;	// 96 = 0x60
    double _openTime;	// 104 = 0x68
    double _closeTime;	// 112 = 0x70
    unsigned long long _offset;	// 120 = 0x78
    _Bool _autocorrect;	// 128 = 0x80
    _Bool _initialCapitalize;	// 129 = 0x81
    _Bool _autocapitalize;	// 130 = 0x82
    _Bool _isOpen;	// 131 = 0x83
}

+ (void)setTypologyRecordsLimit:(unsigned long long)arg1;	// IMP=0x0000000000019781
+ (void)resetTypologyRecords;	// IMP=0x00000000000196e7
+ (void)writeTypologyRecords;	// IMP=0x0000000000019475
+ (id)currentTypologyRecord;	// IMP=0x0000000000018d7d
+ (id)openTypologyRecordWithString:(id)arg1 range:(struct _NSRange)arg2 languageObject:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(_Bool)arg6 initialCapitalize:(_Bool)arg7 autocapitalize:(_Bool)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11;	// IMP=0x0000000000018afd
- (void)closeTypologyRecordWithResults:(id)arg1;	// IMP=0x0000000000019820
- (id)dictionaryRepresentation;	// IMP=0x0000000000018f24
- (void)addCandidate:(id)arg1;	// IMP=0x0000000000018f03
- (void)addCorrection:(id)arg1;	// IMP=0x0000000000018ee2
- (void)dealloc;	// IMP=0x0000000000018a7b
- (id)initWithString:(id)arg1 offset:(unsigned long long)arg2 range:(struct _NSRange)arg3 languageObject:(id)arg4 languages:(id)arg5 topLanguages:(id)arg6 autocorrect:(_Bool)arg7 initialCapitalize:(_Bool)arg8 autocapitalize:(_Bool)arg9 keyEventArray:(id)arg10 appIdentifier:(id)arg11 selectedRangeValue:(id)arg12;	// IMP=0x0000000000018950

@end
