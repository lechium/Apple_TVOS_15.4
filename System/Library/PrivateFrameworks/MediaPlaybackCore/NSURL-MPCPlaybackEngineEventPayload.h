//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventPayloadValueJSONConvertible-Protocol.h>

@class NSString;

@interface NSURL (MPCPlaybackEngineEventPayload) <MPCPlaybackEngineEventPayloadValueJSONConvertible>
+ (id)payloadValueFromJSONValue:(id)arg1;	// IMP=0x000000000017a6da
- (id)mpc_jsonValue;	// IMP=0x0000000000178513

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

