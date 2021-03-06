//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString;

@interface SATTSGetSpeechSynthesisVolumeResponse <SAServerBoundCommand>
{
}

+ (id)getSpeechSynthesisVolumeResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001a555
+ (id)getSpeechSynthesisVolumeResponse;	// IMP=0x000000000001a543
- (_Bool)requiresResponse;	// IMP=0x000000000001a581
@property(copy, nonatomic) NSNumber *volumeLevel;
- (id)encodedClassName;	// IMP=0x000000000001a536
- (id)groupIdentifier;	// IMP=0x000000000001a522

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

