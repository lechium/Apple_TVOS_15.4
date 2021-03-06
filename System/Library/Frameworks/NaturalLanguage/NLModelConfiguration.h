//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NaturalLanguage/NSCopying-Protocol.h>
#import <NaturalLanguage/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface NLModelConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    unsigned long long _revision;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
}

+ (unsigned long long)currentRevisionForType:(long long)arg1;	// IMP=0x00000000000354ce
+ (id)supportedRevisionsForType:(long long)arg1;	// IMP=0x0000000000035499
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000035491
+ (id)defaultModelConfigurationForType:(long long)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000034df8
+ (id)defaultModelConfigurationForType:(long long)arg1;	// IMP=0x0000000000034dbd
- (void).cxx_destruct;	// IMP=0x00000000000354d9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035392
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000352ad
- (id)embeddingData;	// IMP=0x0000000000035242
- (id)embeddingModel;	// IMP=0x00000000000351bc
- (id)embeddingURL;	// IMP=0x0000000000035115
- (id)options;	// IMP=0x0000000000035107
@property(readonly, copy) NSString *language;
@property(readonly) unsigned long long revision;
@property(readonly) long long type;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000034f1c
- (unsigned long long)hash;	// IMP=0x0000000000034e64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034e59
- (id)initWithModelType:(long long)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000034b04

@end

