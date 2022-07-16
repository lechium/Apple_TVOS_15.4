//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognizing-Protocol.h>

@class NSArray, NSCharacterSet, NSDictionary, NSLocale, NSString, NSXPCConnection;

@interface CHRemoteRecognizer : NSObject <CHRecognizing>
{
    _Bool _enableCachingIfAvailable;	// 8 = 0x8
    _Bool _enableGen2ModelIfAvailable;	// 9 = 0x9
    _Bool _enableGen2CharacterLMIfAvailable;	// 10 = 0xa
    _Bool _shouldUseTextReplacements;	// 11 = 0xb
    int _recognitionMode;	// 12 = 0xc
    int _contentType;	// 16 = 0x10
    int _autoCapitalizationMode;	// 20 = 0x14
    int _autoCorrectionMode;	// 24 = 0x18
    unsigned long long _maxRecognitionResultCount;	// 32 = 0x20
    NSArray *_locales;	// 40 = 0x28
    NSDictionary *_activeCharacterSetPerLocale;	// 48 = 0x30
    long long _priority;	// 56 = 0x38
    NSXPCConnection *__connection;	// 64 = 0x40
    struct CGSize _minimumDrawingSize;	// 72 = 0x48
}

+ (long long)absoluteMaxStrokeCountPerRequest;	// IMP=0x00000000000f5b80
+ (long long)maxRequestStrokeCountForLocale:(id)arg1;	// IMP=0x00000000000f5b20
- (void).cxx_destruct;	// IMP=0x00000000000f5d00
@property(readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool shouldUseTextReplacements; // @synthesize shouldUseTextReplacements=_shouldUseTextReplacements;
@property(readonly, copy, nonatomic) NSDictionary *activeCharacterSetPerLocale; // @synthesize activeCharacterSetPerLocale=_activeCharacterSetPerLocale;
@property(readonly, copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(readonly, nonatomic) _Bool enableGen2CharacterLMIfAvailable; // @synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable;
@property(readonly, nonatomic) _Bool enableGen2ModelIfAvailable; // @synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable;
@property(readonly, nonatomic) _Bool enableCachingIfAvailable; // @synthesize enableCachingIfAvailable=_enableCachingIfAvailable;
@property(nonatomic) struct CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
@property(nonatomic) int autoCorrectionMode; // @synthesize autoCorrectionMode=_autoCorrectionMode;
@property(nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
@property(readonly, nonatomic) int recognitionMode; // @synthesize recognitionMode=_recognitionMode;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f57e0
- (_Bool)isEqualToRemoteRecognizer:(id)arg1;	// IMP=0x00000000000f52b0
- (void)dealloc;	// IMP=0x00000000000f5230
- (id)_recognitionResultForRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f4c70
- (id)_recognitionRequestWithDrawing:(id)arg1 options:(id)arg2;	// IMP=0x00000000000f49e0
- (id)transcriptionPathsForTokenizedTextResult:(id)arg1 withHistory:(id)arg2 scores:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000f4230
- (id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f4000
- (void)_teardownXPCConnection;	// IMP=0x00000000000f3fc0
- (void)_setupXPCConnectionIfNeeded;	// IMP=0x00000000000f3c50
@property(retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property(readonly, copy, nonatomic) NSLocale *locale;
- (id)initWithMode:(int)arg1 locales:(id)arg2 activeCharacterSetPerLocale:(id)arg3 recognizerOptions:(id)arg4;	// IMP=0x00000000000f3730
- (id)initWithMode:(int)arg1 locale:(id)arg2 recognizerOptions:(id)arg3;	// IMP=0x00000000000f35b0
- (id)initWithMode:(int)arg1 locale:(id)arg2;	// IMP=0x00000000000f3490

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

