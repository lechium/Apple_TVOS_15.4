//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Speech/NSCopying-Protocol.h>
#import <Speech/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SFRequestParameters : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _narrowband;	// 8 = 0x8
    _Bool _detectMultipleUtterances;	// 9 = 0x9
    _Bool _onDeviceOnly;	// 10 = 0xa
    NSString *_applicationName;	// 16 = 0x10
    NSString *_applicationVersion;	// 24 = 0x18
    NSArray *_inlineItemList;	// 32 = 0x20
    NSString *_requestIdentifier;	// 40 = 0x28
    NSString *_language;	// 48 = 0x30
    NSString *_task;	// 56 = 0x38
    NSDictionary *_recognitionOverrides;	// 64 = 0x40
    NSURL *_modelOverrideURL;	// 72 = 0x48
    double _maximumRecognitionDuration;	// 80 = 0x50
    NSURL *_dynamicLanguageModel;	// 88 = 0x58
    NSURL *_dynamicVocabulary;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006698
- (void).cxx_destruct;	// IMP=0x0000000000006d54
@property(nonatomic) _Bool onDeviceOnly; // @synthesize onDeviceOnly=_onDeviceOnly;
@property(nonatomic) _Bool detectMultipleUtterances; // @synthesize detectMultipleUtterances=_detectMultipleUtterances;
@property(copy, nonatomic) NSURL *dynamicVocabulary; // @synthesize dynamicVocabulary=_dynamicVocabulary;
@property(copy, nonatomic) NSURL *dynamicLanguageModel; // @synthesize dynamicLanguageModel=_dynamicLanguageModel;
@property(nonatomic) double maximumRecognitionDuration; // @synthesize maximumRecognitionDuration=_maximumRecognitionDuration;
@property(copy, nonatomic) NSURL *modelOverrideURL; // @synthesize modelOverrideURL=_modelOverrideURL;
@property(copy, nonatomic) NSDictionary *recognitionOverrides; // @synthesize recognitionOverrides=_recognitionOverrides;
@property(nonatomic) _Bool narrowband; // @synthesize narrowband=_narrowband;
@property(copy, nonatomic) NSString *task; // @synthesize task=_task;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy, nonatomic) NSArray *inlineItemList; // @synthesize inlineItemList=_inlineItemList;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000680d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000066a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000668d
- (id)description;	// IMP=0x00000000000065c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000063f7
- (unsigned long long)hash;	// IMP=0x00000000000063e1

@end

