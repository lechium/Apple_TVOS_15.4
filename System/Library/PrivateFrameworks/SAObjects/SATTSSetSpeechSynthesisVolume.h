//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface SATTSSetSpeechSynthesisVolume
{
}

+ (id)setSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000032ee5
+ (id)setSpeechSynthesisVolume;	// IMP=0x0000000000032ed3
- (_Bool)mutatingCommand;	// IMP=0x0000000000032f3b
- (_Bool)requiresResponse;	// IMP=0x0000000000032f33
@property(copy, nonatomic) NSNumber *volumeValue;
@property(copy, nonatomic) NSString *actionType;
- (id)encodedClassName;	// IMP=0x0000000000032ec6
- (id)groupIdentifier;	// IMP=0x0000000000032eb2

@end

