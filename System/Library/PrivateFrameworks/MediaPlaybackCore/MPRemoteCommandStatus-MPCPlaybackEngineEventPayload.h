//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPRemoteCommandStatus.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventPayloadValueJSONConvertible-Protocol.h>

@class NSString;

@interface MPRemoteCommandStatus (MPCPlaybackEngineEventPayload) <MPCPlaybackEngineEventPayloadValueJSONConvertible>
+ (id)payloadValueFromJSONValue:(id)arg1;	// IMP=0x000000000017b2be
- (id)mpc_jsonValue;	// IMP=0x00000000001793f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
