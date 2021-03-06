//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MADVIDocumentRecognitionRequest
{
    _Bool _usesLanguageDetection;	// 8 = 0x8
    NSArray *_languages;	// 16 = 0x10
    unsigned long long _maximumCandidateCount;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a09d
- (void).cxx_destruct;	// IMP=0x000000000000a554
@property(nonatomic) _Bool usesLanguageDetection; // @synthesize usesLanguageDetection=_usesLanguageDetection;
@property(nonatomic) unsigned long long maximumCandidateCount; // @synthesize maximumCandidateCount=_maximumCandidateCount;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
- (id)description;	// IMP=0x000000000000a39a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a2da
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a152
- (id)initWithLanguages:(id)arg1;	// IMP=0x000000000000a0be
- (id)init;	// IMP=0x000000000000a0a5

@end

