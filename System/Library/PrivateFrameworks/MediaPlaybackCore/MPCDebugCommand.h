//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray, NSDictionary;

@interface MPCDebugCommand : MPRemoteCommand
{
    NSArray *_supportedSubsystems;	// 8 = 0x8
    NSDictionary *_subsystemRevisions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000169a78
@property(copy, nonatomic) NSDictionary *subsystemRevisions; // @synthesize subsystemRevisions=_subsystemRevisions;
@property(copy, nonatomic) NSArray *supportedSubsystems; // @synthesize supportedSubsystems=_supportedSubsystems;
- (id)_mediaRemoteCommandInfoOptions;	// IMP=0x00000000001698f5
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;	// IMP=0x0000000000169780

@end
