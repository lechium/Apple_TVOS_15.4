//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSUUID;

@interface HMIPersonsModelPrediction : HMFObject
{
    NSUUID *_sourceUUID;	// 8 = 0x8
    NSUUID *_personUUID;	// 16 = 0x10
    NSNumber *_confidence;	// 24 = 0x18
    NSUUID *_linkedEntityUUID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007be2a
@property(readonly) NSUUID *linkedEntityUUID; // @synthesize linkedEntityUUID=_linkedEntityUUID;
@property(readonly) NSNumber *confidence; // @synthesize confidence=_confidence;
@property(readonly) NSUUID *personUUID; // @synthesize personUUID=_personUUID;
@property(readonly) NSUUID *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
- (id)initWithSourceUUID:(id)arg1 personUUID:(id)arg2 confidence:(id)arg3 linkedEntityUUID:(id)arg4;	// IMP=0x000000000007bcdb

@end

