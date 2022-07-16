//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding>
{
    _Bool _usesLanguageCorrection;	// 8 = 0x8
    unsigned long long _recognitionLevel;	// 16 = 0x10
    double _normalizedMinimumTextHeightRatio;	// 24 = 0x18
    NSArray *_textDetectionLocales;	// 32 = 0x20
    unsigned long long _postProcessingOptions;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000799c3
+ (id)defaultOptions;	// IMP=0x0000000000079953
- (void).cxx_destruct;	// IMP=0x000000000007a0df
@property(nonatomic) unsigned long long postProcessingOptions; // @synthesize postProcessingOptions=_postProcessingOptions;
@property(retain, nonatomic) NSArray *textDetectionLocales; // @synthesize textDetectionLocales=_textDetectionLocales;
@property(nonatomic) _Bool usesLanguageCorrection; // @synthesize usesLanguageCorrection=_usesLanguageCorrection;
@property(nonatomic) double normalizedMinimumTextHeightRatio; // @synthesize normalizedMinimumTextHeightRatio=_normalizedMinimumTextHeightRatio;
@property(nonatomic) unsigned long long recognitionLevel; // @synthesize recognitionLevel=_recognitionLevel;
@property(readonly, nonatomic) _Bool shouldApplySemanticTextFiltering;
- (id)description;	// IMP=0x0000000000079c0f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000079b09
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000799cb
- (id)_init;	// IMP=0x000000000007997c

@end
