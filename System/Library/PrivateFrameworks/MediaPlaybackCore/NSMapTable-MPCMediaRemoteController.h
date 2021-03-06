//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMapTable.h>

#import <MediaPlaybackCore/MPCSupportedCommands-Protocol.h>

@class NSString;

@interface NSMapTable (MPCMediaRemoteController) <MPCSupportedCommands>
- (id)allCommandInfos;	// IMP=0x0000000000152387
- (void *)commandInfoForCommand:(unsigned int)arg1;	// IMP=0x0000000000152374

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

