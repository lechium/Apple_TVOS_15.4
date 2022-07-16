//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MLAppleWordEmbeddingParameters : NSObject
{
    unsigned long long _revision;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    NSString *_inputFeatureName;	// 24 = 0x18
    NSString *_outputFeatureName;	// 32 = 0x20
    NSData *_modelParameterData;	// 40 = 0x28
    NSDictionary *_metadata;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000014f8b3
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSData *modelParameterData; // @synthesize modelParameterData=_modelParameterData;
@property(retain) NSString *outputFeatureName; // @synthesize outputFeatureName=_outputFeatureName;
@property(retain) NSString *inputFeatureName; // @synthesize inputFeatureName=_inputFeatureName;
@property(retain) NSString *language; // @synthesize language=_language;
@property unsigned long long revision; // @synthesize revision=_revision;
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 error:(id *)arg6;	// IMP=0x000000000014f7c7
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 metadata:(id)arg6 error:(id *)arg7;	// IMP=0x000000000014f645

@end

