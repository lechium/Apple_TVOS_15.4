//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface VSRecognitionDisambiguateAction
{
    NSString *_repeatedSpokenFeedbackString;	// 72 = 0x48
    NSString *_sequenceTag;	// 80 = 0x50
    NSMutableDictionary *_knownValues;	// 88 = 0x58
    NSMutableDictionary *_knownPhoneticValues;	// 96 = 0x60
    NSMutableDictionary *_ambiguousValues;	// 104 = 0x68
    NSMutableDictionary *_ambiguousPhoneticValues;	// 112 = 0x70
    void *_context;	// 120 = 0x78
}

- (id)_actionForEmptyResults;	// IMP=0x0000000000025c04
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(CDStruct_90f67059 *)arg1 info:(void *)arg2;	// IMP=0x0000000000025b7e
- (struct __VSRecognitionDisambiguationContext *)_disambiguationContext;	// IMP=0x0000000000025a83
- (void)setKeywords:(id)arg1;	// IMP=0x0000000000025a42
- (_Bool)_keywordIndexChanged;	// IMP=0x0000000000025a3a
- (id)_keywords;	// IMP=0x0000000000025833
- (void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;	// IMP=0x0000000000025718
- (id)ambiguousValuesForClassIdentifier:(id)arg1;	// IMP=0x00000000000256fb
- (void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;	// IMP=0x00000000000255d7
- (id)knownValuesForClassIdentifier:(id)arg1;	// IMP=0x0000000000025574
- (void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3;	// IMP=0x0000000000025450
- (id)knownValueForClassIdentifier:(id)arg1;	// IMP=0x00000000000253f4
- (void)setSequenceTag:(id)arg1;	// IMP=0x00000000000253b6
- (id)sequenceTag;	// IMP=0x00000000000253a5
- (id)repeatedSpokenFeedbackString;	// IMP=0x0000000000025394
- (void)setRepeatedSpokenFeedbackString:(id)arg1;	// IMP=0x0000000000025356
- (int)completionType;	// IMP=0x000000000002534b
- (void)dealloc;	// IMP=0x00000000000252a6

@end

