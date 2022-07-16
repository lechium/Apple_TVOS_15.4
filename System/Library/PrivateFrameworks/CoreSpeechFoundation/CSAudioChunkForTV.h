//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CSAudioChunkForTV : NSObject
{
    float _avgPower;	// 8 = 0x8
    float _peakPower;	// 12 = 0xc
    unsigned int _numChannels;	// 16 = 0x10
    unsigned int _audioFormat;	// 20 = 0x14
    NSArray *_packets;	// 24 = 0x18
    unsigned long long _timeStamp;	// 32 = 0x20
    unsigned long long _streamHandleID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000002271
@property(nonatomic) unsigned long long streamHandleID; // @synthesize streamHandleID=_streamHandleID;
@property(nonatomic) unsigned int audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) unsigned int numChannels; // @synthesize numChannels=_numChannels;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) float peakPower; // @synthesize peakPower=_peakPower;
@property(nonatomic) float avgPower; // @synthesize avgPower=_avgPower;
@property(retain, nonatomic) NSArray *packets; // @synthesize packets=_packets;
- (id)xpcObject;	// IMP=0x000000000000209f
- (id)initWithXPCObject:(id)arg1;	// IMP=0x0000000000001f2f

@end

