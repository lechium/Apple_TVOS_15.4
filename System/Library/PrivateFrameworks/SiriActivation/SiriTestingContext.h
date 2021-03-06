//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFRequestInfo, NSDictionary;

@interface SiriTestingContext
{
    NSDictionary *_testingContext;	// 8 = 0x8
    AFRequestInfo *_testingRequestInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001cd65
- (void).cxx_destruct;	// IMP=0x000000000001cf4a
@property(readonly, nonatomic) AFRequestInfo *testingRequestInfo; // @synthesize testingRequestInfo=_testingRequestInfo;
@property(readonly, nonatomic) NSDictionary *testingContext; // @synthesize testingContext=_testingContext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ce8d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001cd6d
- (id)description;	// IMP=0x000000000001ccd2
- (_Bool)containsAudioInput;	// IMP=0x000000000001cc8d
- (_Bool)containsRecognitionStrings;	// IMP=0x000000000001cc48
- (id)initWithRequestInfo:(id)arg1 recognitionStrings:(id)arg2 siriContextOverride:(id)arg3;	// IMP=0x000000000001cbee
- (id)initWithRequestInfo:(id)arg1 recognitionStrings:(id)arg2;	// IMP=0x000000000001cbd9
- (id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2;	// IMP=0x000000000001cb0b
- (id)initWithAudioInput:(id)arg1;	// IMP=0x000000000001caf7
- (id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2;	// IMP=0x000000000001ca29
- (id)initWithRecognitionStrings:(id)arg1;	// IMP=0x000000000001ca15
- (id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2;	// IMP=0x000000000001c99d
- (id)initWithPPTContext:(id)arg1;	// IMP=0x000000000001c989

@end

