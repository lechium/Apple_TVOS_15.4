//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPRemoteCommand, NSDictionary, NSString;

@interface MPRemoteCommandEvent : NSObject
{
    NSDictionary *_mediaRemoteOptions;	// 8 = 0x8
    NSString *_contextID;	// 16 = 0x10
    NSString *_commandID;	// 24 = 0x18
    MPRemoteCommand *_command;	// 32 = 0x20
    double _timestamp;	// 40 = 0x28
    double _timeout;	// 48 = 0x30
}

+ (id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000000749a1
- (void).cxx_destruct;	// IMP=0x0000000000074963
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) MPRemoteCommand *command; // @synthesize command=_command;
@property(readonly, nonatomic) long long playbackQueueOffset;
@property(readonly, nonatomic) NSString *contentItemID;
@property(readonly, nonatomic) NSString *sourceID;
@property(readonly, nonatomic) NSString *interfaceID;
@property(readonly, nonatomic) NSString *commandID;
@property(readonly, nonatomic) NSString *contextID;
@property(readonly, nonatomic) NSDictionary *mediaRemoteOptions;
@property(readonly, nonatomic) unsigned int mediaRemoteCommandType;
- (id)description;	// IMP=0x0000000000074624
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000000743be
- (id)init;	// IMP=0x000000000007434a

@end
