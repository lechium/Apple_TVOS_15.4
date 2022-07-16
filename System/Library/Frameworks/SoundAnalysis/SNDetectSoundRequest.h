//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>
#import <SoundAnalysis/SNAnalyzerCreating-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class MLModelConfiguration, NSString, SNDetectorVariant;

@interface SNDetectSoundRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>
{
    SNDetectorVariant *_detectorVariant;	// 8 = 0x8
    NSString *_soundIdentifier;	// 16 = 0x10
    MLModelConfiguration *_modelConfiguration;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029050
+ (id)allValidSoundIdentifiers;	// IMP=0x000000000000a2ab
- (void).cxx_destruct;	// IMP=0x0000000000029328
@property(retain, nonatomic) MLModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
@property(readonly, nonatomic) NSString *soundIdentifier; // @synthesize soundIdentifier=_soundIdentifier;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000291a7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029058
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDetectSoundRequest:(id)arg1;	// IMP=0x0000000000028f6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028ef0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028e47
- (id)createAnalyzerWithError:(id *)arg1;	// IMP=0x0000000000028e08
- (id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2;	// IMP=0x0000000000028d4c
- (id)initWithDetectorVariant:(id)arg1 soundIdentifier:(id)arg2 modelConfiguration:(id)arg3;	// IMP=0x0000000000028c71
- (id)initWithDetectorVariant:(id)arg1 soundIdentifier:(id)arg2;	// IMP=0x0000000000028bc5
- (id)initWithDetectorIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028a27
- (id)initWithSoundIdentifier:(id)arg1;	// IMP=0x00000000000288a9
- (id)initWithSoundIdentifier:(id)arg1 shouldUseTwoPassDetection:(_Bool)arg2;	// IMP=0x0000000000028896

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

