//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface SASStartSpeech <SAServerBoundCommand>
{
}

+ (id)startSpeechWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000801d
+ (id)startSpeech;	// IMP=0x000000000000800b
- (_Bool)requiresResponse;	// IMP=0x0000000000008308
@property(copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property(copy, nonatomic) NSString *turnId;
@property(copy, nonatomic) NSNumber *noiseReductionLevel;
@property(copy, nonatomic) NSNumber *motionConfidence;
@property(copy, nonatomic) NSString *motionActivity;
@property(copy, nonatomic) NSNumber *isCarryDevice;
@property(copy, nonatomic) NSString *headsetName;
@property(copy, nonatomic) NSString *headsetId;
@property(copy, nonatomic) NSString *headsetAddress;
@property(nonatomic) _Bool enablePartialResults;
@property(copy, nonatomic) NSString *dspStatus;
@property(nonatomic) _Bool disableAutoEndpointing;
@property(copy, nonatomic) NSString *deviceModel;
@property(copy, nonatomic) NSString *deviceIdentifier;
@property(nonatomic) int codec;
@property(nonatomic) _Bool clearContext;
@property(copy, nonatomic) NSString *audioSource;
@property(copy, nonatomic) NSString *audioDestination;
@property(copy, nonatomic) NSString *origin;
- (id)encodedClassName;	// IMP=0x0000000000007ffe
- (id)groupIdentifier;	// IMP=0x0000000000007fea

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
