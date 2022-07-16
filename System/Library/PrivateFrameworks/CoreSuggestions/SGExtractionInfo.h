//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface SGExtractionInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _extractionType;	// 8 = 0x8
    NSNumber *_modelVersion;	// 16 = 0x10
    NSNumber *_confidence;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004695e
+ (id)extractionInfoWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3;	// IMP=0x00000000000468e3
- (void).cxx_destruct;	// IMP=0x00000000000468bb
@property(readonly, nonatomic) NSNumber *confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSNumber *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(readonly, nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000467ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000046762
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000046621
- (id)initWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3;	// IMP=0x000000000004646f

@end
