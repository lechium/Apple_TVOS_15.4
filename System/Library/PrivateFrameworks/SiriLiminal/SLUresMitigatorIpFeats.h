//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSpeechPackage, NSDictionary, NSNumber;

@interface SLUresMitigatorIpFeats : NSObject
{
    _Bool _didDetectSpeechActivity;	// 8 = 0x8
    _Bool _isAirpodsConnected;	// 9 = 0x9
    AFSpeechPackage *_speechPackage;	// 16 = 0x10
    NSNumber *_inputOrigin;	// 24 = 0x18
    NSNumber *_acousticFTMScores;	// 32 = 0x20
    NSNumber *_boronScore;	// 40 = 0x28
    NSNumber *_speakerIDScore;	// 48 = 0x30
    double _timeSinceLastQuery;	// 56 = 0x38
    unsigned long long _decisionStage;	// 64 = 0x40
    NSNumber *_prevStageOutput;	// 72 = 0x48
    NSNumber *_eosLikelihood;	// 80 = 0x50
    NSDictionary *_nldaMetaInfo;	// 88 = 0x58
    NSNumber *_nldaScore;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000005ce8
@property(retain, nonatomic) NSNumber *nldaScore; // @synthesize nldaScore=_nldaScore;
@property(retain, nonatomic) NSDictionary *nldaMetaInfo; // @synthesize nldaMetaInfo=_nldaMetaInfo;
@property(retain, nonatomic) NSNumber *eosLikelihood; // @synthesize eosLikelihood=_eosLikelihood;
@property(retain, nonatomic) NSNumber *prevStageOutput; // @synthesize prevStageOutput=_prevStageOutput;
@property(nonatomic) unsigned long long decisionStage; // @synthesize decisionStage=_decisionStage;
@property(nonatomic) double timeSinceLastQuery; // @synthesize timeSinceLastQuery=_timeSinceLastQuery;
@property(nonatomic) _Bool isAirpodsConnected; // @synthesize isAirpodsConnected=_isAirpodsConnected;
@property(nonatomic) _Bool didDetectSpeechActivity; // @synthesize didDetectSpeechActivity=_didDetectSpeechActivity;
@property(retain, nonatomic) NSNumber *speakerIDScore; // @synthesize speakerIDScore=_speakerIDScore;
@property(retain, nonatomic) NSNumber *boronScore; // @synthesize boronScore=_boronScore;
@property(retain, nonatomic) NSNumber *acousticFTMScores; // @synthesize acousticFTMScores=_acousticFTMScores;
@property(retain, nonatomic) NSNumber *inputOrigin; // @synthesize inputOrigin=_inputOrigin;
@property(retain, nonatomic) AFSpeechPackage *speechPackage; // @synthesize speechPackage=_speechPackage;

@end

