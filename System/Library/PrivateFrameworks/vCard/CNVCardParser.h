//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNVCardDateComponentsParser, CNVCardLexer, CNVCardMutableNameComponents, CNVCardReadingOptions, CNVCardSelectorMap, NSArray, NSData, NSDateComponents, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;
@protocol CNVCardParsedResultBuilder;

@interface CNVCardParser : NSObject
{
    CNVCardReadingOptions *_options;	// 8 = 0x8
    CNVCardLexer *_lexer;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    unsigned long long _defaultEncoding;	// 32 = 0x20
    _Bool _hasImportErrors;	// 40 = 0x28
    CNVCardDateComponentsParser *_dateComponentsParser;	// 48 = 0x30
    CNVCardSelectorMap *_parsingSelectorMap;	// 56 = 0x38
    CNVCardSelectorMap *_parameterSelectorMap;	// 64 = 0x40
    id <CNVCardParsedResultBuilder> _resultBuilder;	// 72 = 0x48
    _Bool _30vCard;	// 80 = 0x50
    CNVCardMutableNameComponents *_nameComponents;	// 88 = 0x58
    NSDateComponents *_bday;	// 96 = 0x60
    NSDateComponents *_altBday;	// 104 = 0x68
    NSMutableArray *_emails;	// 112 = 0x70
    NSMutableArray *_dateComponents;	// 120 = 0x78
    NSMutableArray *_phones;	// 128 = 0x80
    NSMutableArray *_addresses;	// 136 = 0x88
    NSMutableArray *_relatedNames;	// 144 = 0x90
    NSMutableArray *_urls;	// 152 = 0x98
    NSMutableArray *_calendarURIs;	// 160 = 0xa0
    NSMutableString *_notes;	// 168 = 0xa8
    NSMutableDictionary *_extensions;	// 176 = 0xb0
    NSMutableArray *_unknowns;	// 184 = 0xb8
    NSString *_uid;	// 192 = 0xc0
    NSString *_carddavUID;	// 200 = 0xc8
    NSMutableArray *_instantMessagingAddresses;	// 208 = 0xd0
    NSMutableArray *_socialProfiles;	// 216 = 0xd8
    NSMutableDictionary *_activityAlerts;	// 224 = 0xe0
    NSMutableArray *_cropRects;	// 232 = 0xe8
    _Bool _fullNameHasZeroLength;	// 240 = 0xf0
    NSData *_imageData;	// 248 = 0xf8
    NSString *_imageGroup;	// 256 = 0x100
    NSString *_imageReference;	// 264 = 0x108
    unsigned long long _startingPositionOfCurrentProperty;	// 272 = 0x110
    NSArray *_itemParameters;	// 280 = 0x118
    NSString *_grouping;	// 288 = 0x120
    unsigned long long _encoding;	// 296 = 0x128
    _Bool _quotedPrintable;	// 304 = 0x130
    _Bool _base64;	// 305 = 0x131
}

+ (unsigned long long)inferredStringEncodingFromData:(id)arg1;	// IMP=0x000000000000391d
+ (id)parseData:(id)arg1 options:(id)arg2 resultFactory:(id)arg3;	// IMP=0x0000000000003183
+ (id)parseData:(id)arg1 resultFactory:(id)arg2;	// IMP=0x00000000000030f3
+ (id)newParameterSelectorMap;	// IMP=0x0000000000002e2e
+ (id)newParsingSelectorMap;	// IMP=0x0000000000002850
+ (_Bool)parseFirstResultInData:(id)arg1 resultBuilder:(id)arg2;	// IMP=0x00000000000027c5
+ (unsigned long long)countOfCardsInData:(id)arg1;	// IMP=0x0000000000002750
+ (id)os_log;	// IMP=0x00000000000026f4
- (void).cxx_destruct;	// IMP=0x0000000000008016
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) id <CNVCardParsedResultBuilder> resultBuilder; // @synthesize resultBuilder=_resultBuilder;
@property(readonly, nonatomic) CNVCardReadingOptions *options; // @synthesize options=_options;
- (long long)currentPosition;	// IMP=0x0000000000007fd0
- (_Bool)atEOF;	// IMP=0x0000000000007fba
- (id)nextBase64Data;	// IMP=0x0000000000007fa4
- (id)parseBase64Data;	// IMP=0x0000000000007f8e
- (id)parseUnknownValueStartingAtPosition:(unsigned long long)arg1;	// IMP=0x0000000000007e58
- (id)parseArrayValue;	// IMP=0x0000000000007e02
- (id)unparsedStringForCurrentProperty;	// IMP=0x0000000000007de9
- (id)parseRemainingLine;	// IMP=0x0000000000007d5f
- (_Bool)advancePastSemicolon;	// IMP=0x0000000000007d1c
- (id)parseStringValue;	// IMP=0x0000000000007cb2
- (id)firstCustomLabelForProperty:(id)arg1 types:(id)arg2;	// IMP=0x0000000000007a88
- (id)phoneLabel;	// IMP=0x0000000000007670
- (id)fallbackLabelForProperty:(id)arg1;	// IMP=0x0000000000007635
- (id)genericLabelForProperty:(id)arg1;	// IMP=0x000000000000735d
- (id)validCountryCodes;	// IMP=0x0000000000007347
- (_Bool)valueIsEmpty:(id)arg1;	// IMP=0x00000000000072a7
- (void)reportMultiValueLines:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000006db0
- (void)reportValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000006d3b
- (void)processExtensionValues;	// IMP=0x0000000000006cb6
- (void)processNameValues;	// IMP=0x0000000000006c96
- (void)reportValues;	// IMP=0x000000000000681c
- (void)parameter_ENCODING:(id)arg1;	// IMP=0x0000000000006794
- (void)parameter_CHARSET:(id)arg1;	// IMP=0x00000000000066d0
- (void)parameter_BASE64:(id)arg1;	// IMP=0x00000000000066c3
- (void)parameter_QUOTED_PRINTABLE:(id)arg1;	// IMP=0x00000000000066b6
- (SEL)handlerSelectorForParameterName:(id)arg1;	// IMP=0x00000000000066a0
- (id)parseParameterValues;	// IMP=0x00000000000065f9
- (id)nextParameterInCurrentLine;	// IMP=0x00000000000064c0
- (id)parseParameters;	// IMP=0x00000000000062bd
- (id)makeLineWithLabel:(id)arg1 value:(id)arg2;	// IMP=0x000000000000612a
- (id)makeLineWithValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000000609e
- (id)parameterValuesForName:(id)arg1;	// IMP=0x0000000000005e65
- (id)typeParameters;	// IMP=0x0000000000005e0a
- (id)firstValueForParameterWithName:(id)arg1;	// IMP=0x0000000000005d5a
- (id)firstParameterWithName:(id)arg1;	// IMP=0x0000000000005c59
- (id)firstValueForKey:(id)arg1 inExtension:(id)arg2;	// IMP=0x0000000000005c06
- (id)firstValueForKey:(id)arg1 inExtensionGroup:(id)arg2;	// IMP=0x0000000000005b4a
- (_Bool)parseExtension:(id)arg1;	// IMP=0x0000000000005a3b
- (_Bool)parseInstantMessageValueWithService:(id)arg1;	// IMP=0x0000000000005976
- (_Bool)parse_X_APPLE_GUARDIAN_WHITELISTED;	// IMP=0x00000000000058fc
- (_Bool)parse_X_APPLE_LIKENESS_SERVICE_IDENTIFIER;	// IMP=0x00000000000058a0
- (_Bool)parse_X_APPLE_LIKENESS_SOURCE;	// IMP=0x0000000000005844
- (_Bool)parse_X_ADDRESSBOOKSERVER_PHONEME_DATA;	// IMP=0x00000000000057eb
- (_Bool)parse_X_YAHOO_ID;	// IMP=0x00000000000057cf
- (_Bool)parse_X_YAHOO;	// IMP=0x00000000000057b3
- (_Bool)parse_X_SOCIALPROFILE;	// IMP=0x00000000000056e6
- (_Bool)parse_X_SKYPE_USERNAME;	// IMP=0x00000000000056ca
- (_Bool)parse_X_SKYPE_ID;	// IMP=0x00000000000056ae
- (_Bool)parse_X_SKYPE;	// IMP=0x0000000000005692
- (_Bool)parse_X_QQ_ID;	// IMP=0x0000000000005676
- (_Bool)parse_X_QQ;	// IMP=0x000000000000565a
- (_Bool)parse_X_PRONUNCIATION_LAST_NAME;	// IMP=0x00000000000055fe
- (_Bool)parse_X_PRONUNCIATION_FIRST_NAME;	// IMP=0x00000000000055a2
- (_Bool)parse_X_PHONETIC_MIDDLE_NAME;	// IMP=0x0000000000005546
- (_Bool)parse_X_PHONETIC_LAST_NAME;	// IMP=0x00000000000054ea
- (_Bool)parse_X_PHONETIC_FIRST_NAME;	// IMP=0x000000000000548e
- (_Bool)parse_X_MSN_ID;	// IMP=0x0000000000005472
- (_Bool)parse_X_MSN;	// IMP=0x0000000000005456
- (_Bool)parse_X_MAIDENNAME;	// IMP=0x00000000000053fa
- (_Bool)parse_X_JABBER_ID;	// IMP=0x00000000000053de
- (_Bool)parse_X_JABBER;	// IMP=0x00000000000053c2
- (_Bool)parse_X_IMAGETYPE;	// IMP=0x0000000000005366
- (_Bool)parse_X_IMAGEHASH;	// IMP=0x00000000000052de
- (_Bool)parse_X_ICQ_ID;	// IMP=0x00000000000052c2
- (_Bool)parse_X_ICQ;	// IMP=0x00000000000052a6
- (_Bool)parse_X_GTALK;	// IMP=0x000000000000528a
- (_Bool)parse_X_GOOGLE_TALK;	// IMP=0x000000000000526e
- (_Bool)parse_X_GOOGLE_ID;	// IMP=0x0000000000005252
- (_Bool)parse_X_APPLE_SUBLOCALITY;	// IMP=0x0000000000005239
- (_Bool)parse_X_APPLE_SUBADMINISTRATIVEAREA;	// IMP=0x0000000000005220
- (_Bool)parse_X_ALTBDAY;	// IMP=0x00000000000051e4
- (_Bool)parse_X_ACTIVITY_ALERT;	// IMP=0x0000000000005160
- (_Bool)parse_X_ABUID;	// IMP=0x00000000000050eb
- (_Bool)parse_X_ABSHOWAS;	// IMP=0x0000000000004f7d
- (_Bool)parse_X_ABRELATEDNAMES;	// IMP=0x0000000000004eba
- (_Bool)parse_X_AIM_ID;	// IMP=0x0000000000004e9e
- (_Bool)parse_X_AIM;	// IMP=0x0000000000004e82
- (_Bool)parse_X_ABPHOTO;	// IMP=0x0000000000004dee
- (_Bool)parse_X_ABORDER;	// IMP=0x0000000000004c35
- (_Bool)parse_X_ABLABEL;	// IMP=0x0000000000004c1c
- (_Bool)parse_X_ABDATE;	// IMP=0x0000000000004b6d
- (_Bool)parse_X_ABADR;	// IMP=0x0000000000004b54
- (_Bool)parse_VERSION;	// IMP=0x0000000000004ae5
- (_Bool)parse_URL;	// IMP=0x0000000000004a18
- (_Bool)parse_UID;	// IMP=0x0000000000004909
- (_Bool)parse_TITLE;	// IMP=0x0000000000004897
- (_Bool)parse_TEL;	// IMP=0x00000000000047e8
- (_Bool)parse_REV;	// IMP=0x00000000000047e0
- (_Bool)parse_PRODID;	// IMP=0x00000000000047d8
- (_Bool)parse_PHOTO;	// IMP=0x000000000000464f
- (_Bool)parse_X_PHONETIC_ORG;	// IMP=0x00000000000045f3
- (_Bool)parse_ORG;	// IMP=0x0000000000004553
- (_Bool)parse_NOTE;	// IMP=0x00000000000044f4
- (_Bool)parse_NICKNAME;	// IMP=0x000000000000449a
- (_Bool)parse_N;	// IMP=0x0000000000004213
- (_Bool)parse_IMPP;	// IMP=0x00000000000040b2
- (_Bool)parse_FN;	// IMP=0x0000000000004062
- (_Bool)parse_EMAIL;	// IMP=0x0000000000003fb6
- (_Bool)parse_CALURI;	// IMP=0x0000000000003ee9
- (_Bool)parse_BDAY;	// IMP=0x0000000000003ead
- (_Bool)parse_ADR;	// IMP=0x0000000000003dde
- (_Bool)parse_ADD;	// IMP=0x0000000000003dcc
- (_Bool)parseValueUsingSelector:(SEL)arg1;	// IMP=0x0000000000003da6
- (SEL)parsingSelectorForTag:(id)arg1;	// IMP=0x0000000000003d90
- (_Bool)parseLine;	// IMP=0x00000000000039a7
- (_Bool)hasImportErrors;	// IMP=0x0000000000003914
- (void)cleanUpCardState;	// IMP=0x00000000000037ad
- (_Bool)parseNextResultUsingResultBuilder:(id)arg1;	// IMP=0x0000000000003577
- (id)pool_nextResultWithFactory:(id)arg1 progressLength:(long long *)arg2;	// IMP=0x000000000000347f
- (id)nextResultWithFactory:(id)arg1 progressLength:(long long *)arg2;	// IMP=0x0000000000003377
- (id)resultsWithFactory:(id)arg1;	// IMP=0x000000000000323a
- (id)initWithData:(id)arg1 options:(id)arg2;	// IMP=0x0000000000002f23
- (id)initWithData:(id)arg1;	// IMP=0x0000000000002ebf

@end
