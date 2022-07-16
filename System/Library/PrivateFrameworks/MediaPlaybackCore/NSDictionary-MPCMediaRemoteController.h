//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventPayloadJSONValue-Protocol.h>
#import <MediaPlaybackCore/MPCSupportedCommands-Protocol.h>

@class NSString;

@interface NSDictionary (MPCMediaRemoteController) <MPCSupportedCommands, MPCPlaybackEngineEventPayloadJSONValue>
- (id)allCommandInfos;	// IMP=0x000000000015263e
- (void *)commandInfoForCommand:(unsigned int)arg1;	// IMP=0x00000000001525d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

