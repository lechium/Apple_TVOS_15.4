//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class AVAudioSession, NSString;

@interface ATIOBinding : NSObject <NSSecureCoding>
{
    shared_ptr_7989b661 mImpl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006f206
- (id).cxx_construct;	// IMP=0x000000000006ebfc
- (void).cxx_destruct;	// IMP=0x000000000006ebee
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e98e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006e8dd
@property(readonly, nonatomic) unsigned int deviceID;
@property(readonly, retain, nonatomic) NSString *deviceUID;
@property(readonly, nonatomic) unsigned int sessionID;
@property(readonly, retain, nonatomic) AVAudioSession *session;
- (id)description;	// IMP=0x000000000006e814
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e796
- (id)initWithDeviceID:(unsigned int)arg1;	// IMP=0x000000000006e61c
- (id)initWithDeviceUID:(id)arg1;	// IMP=0x000000000006e4ed
- (id)initWithAudioSessionID:(unsigned int)arg1;	// IMP=0x000000000006e4df
- (id)initWithAudioSession:(id)arg1;	// IMP=0x000000000006e3b0
- (id)initWithImpl:(shared_ptr_7989b661)arg1;	// IMP=0x000000000006e359

@end
