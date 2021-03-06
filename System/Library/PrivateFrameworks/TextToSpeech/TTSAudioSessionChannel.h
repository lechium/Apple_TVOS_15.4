//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSessionChannelDescription, NSString;

@interface TTSAudioSessionChannel : NSObject
{
    unsigned int _channelLabel;	// 8 = 0x8
    AVAudioSessionChannelDescription *_channel;	// 16 = 0x10
    NSString *_channelName;	// 24 = 0x18
    unsigned long long _channelNumber;	// 32 = 0x20
    NSString *_owningPortUID;	// 40 = 0x28
}

+ (id)convertChannels:(id)arg1;	// IMP=0x0000000000014a74
+ (id)channelWithChannel:(id)arg1;	// IMP=0x0000000000014a1e
- (void).cxx_destruct;	// IMP=0x00000000000150a6
@property(retain, nonatomic) NSString *owningPortUID; // @synthesize owningPortUID=_owningPortUID;
@property(nonatomic) unsigned int channelLabel; // @synthesize channelLabel=_channelLabel;
@property(nonatomic) unsigned long long channelNumber; // @synthesize channelNumber=_channelNumber;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) AVAudioSessionChannelDescription *channel; // @synthesize channel=_channel;
- (id)description;	// IMP=0x0000000000014fc9
- (void)dealloc;	// IMP=0x0000000000014f89
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014e98
- (id)init;	// IMP=0x0000000000014cc8

@end

