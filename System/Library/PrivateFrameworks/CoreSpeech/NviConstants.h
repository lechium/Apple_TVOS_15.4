//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NviConstants : NSObject
{
}

+ (id)nviLogsRootDir;	// IMP=0x0000000000073bd8
+ (struct AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;	// IMP=0x0000000000073afa
+ (struct AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;	// IMP=0x0000000000073a4f
+ (struct AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;	// IMP=0x00000000000739a4
+ (struct AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;	// IMP=0x00000000000738c6
+ (struct AudioStreamBasicDescription)monoChannelLpcmASBD;	// IMP=0x000000000007382c
+ (unsigned int)nviDirectionalityEndingChannelId;	// IMP=0x0000000000073815
+ (unsigned int)nviDirectionalityStartingChannelId;	// IMP=0x00000000000737fe
+ (unsigned int)inputRecordingSampleByteDepth;	// IMP=0x00000000000737f3
+ (unsigned int)inputRecordingSampleBitDepth;	// IMP=0x00000000000737d6
+ (unsigned int)numChannelsForNviDirectionality;	// IMP=0x00000000000737c3
+ (unsigned int)inputRecordingNumberOfChannels;	// IMP=0x00000000000737a9
+ (unsigned int)inputRecordingBytesPerPacket;	// IMP=0x000000000007376f
+ (unsigned int)inputRecordingBytesPerFrame;	// IMP=0x0000000000073756
+ (unsigned int)inputRecordingFramesPerPacket;	// IMP=0x000000000007374b
+ (float)inputRecordingSampleRate;	// IMP=0x000000000007373d

@end

