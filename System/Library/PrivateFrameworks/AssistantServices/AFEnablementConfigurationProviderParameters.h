//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFExperiment, NSDate, NSDictionary, NSError;

@interface AFEnablementConfigurationProviderParameters : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _newUser;	// 8 = 0x8
    _Bool _recognitionLanguageWithMultipleOutputVoicesExists;	// 9 = 0x9
    long long _enablementFlow;	// 16 = 0x10
    NSError *_userStatusFetchError;	// 24 = 0x18
    NSDate *_dateStartedResolvingUserStatus;	// 32 = 0x20
    NSDate *_dateEndedResolvingUserStatus;	// 40 = 0x28
    AFExperiment *_experiment;	// 48 = 0x30
    NSError *_experimentFetchError;	// 56 = 0x38
    NSDate *_dateStartedResolvingExperiment;	// 64 = 0x40
    NSDate *_dateEndedResolvingExperiment;	// 72 = 0x48
    NSDictionary *_outputVoiceCountForRecognitionLanguage;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a6a2f
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a7590
- (void).cxx_destruct;	// IMP=0x00000000000a6f9b
@property(readonly, nonatomic) _Bool recognitionLanguageWithMultipleOutputVoicesExists; // @synthesize recognitionLanguageWithMultipleOutputVoicesExists=_recognitionLanguageWithMultipleOutputVoicesExists;
@property(readonly, copy, nonatomic) NSDictionary *outputVoiceCountForRecognitionLanguage; // @synthesize outputVoiceCountForRecognitionLanguage=_outputVoiceCountForRecognitionLanguage;
@property(readonly, copy, nonatomic) NSDate *dateEndedResolvingExperiment; // @synthesize dateEndedResolvingExperiment=_dateEndedResolvingExperiment;
@property(readonly, copy, nonatomic) NSDate *dateStartedResolvingExperiment; // @synthesize dateStartedResolvingExperiment=_dateStartedResolvingExperiment;
@property(readonly, copy, nonatomic) NSError *experimentFetchError; // @synthesize experimentFetchError=_experimentFetchError;
@property(readonly, copy, nonatomic) AFExperiment *experiment; // @synthesize experiment=_experiment;
@property(readonly, copy, nonatomic) NSDate *dateEndedResolvingUserStatus; // @synthesize dateEndedResolvingUserStatus=_dateEndedResolvingUserStatus;
@property(readonly, copy, nonatomic) NSDate *dateStartedResolvingUserStatus; // @synthesize dateStartedResolvingUserStatus=_dateStartedResolvingUserStatus;
@property(readonly, copy, nonatomic) NSError *userStatusFetchError; // @synthesize userStatusFetchError=_userStatusFetchError;
@property(readonly, nonatomic) _Bool newUser; // @synthesize newUser=_newUser;
@property(readonly, nonatomic) long long enablementFlow; // @synthesize enablementFlow=_enablementFlow;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a6d8a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a6a37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a6a24
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a66c2
- (unsigned long long)hash;	// IMP=0x00000000000a6556
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000000000a6029
- (id)description;	// IMP=0x00000000000a6015
- (id)initWithEnablementFlow:(long long)arg1 newUser:(_Bool)arg2 userStatusFetchError:(id)arg3 dateStartedResolvingUserStatus:(id)arg4 dateEndedResolvingUserStatus:(id)arg5 experiment:(id)arg6 experimentFetchError:(id)arg7 dateStartedResolvingExperiment:(id)arg8 dateEndedResolvingExperiment:(id)arg9 outputVoiceCountForRecognitionLanguage:(id)arg10 recognitionLanguageWithMultipleOutputVoicesExists:(_Bool)arg11;	// IMP=0x00000000000a5e51
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a75ff

@end
