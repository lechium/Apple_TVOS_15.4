//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class AVAudioFormat, NSArray, NSString, NSUUID;

@interface ATAudioTapDescription : NSObject <NSSecureCoding>
{
    int _processIdentifier;	// 8 = 0x8
    long long _tapType;	// 16 = 0x10
    NSArray *_excludedPIDs;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
    AVAudioFormat *_format;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c5680
- (void).cxx_destruct;	// IMP=0x00000000000c5418
@property(readonly, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *excludedPIDs; // @synthesize excludedPIDs=_excludedPIDs;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) long long tapType; // @synthesize tapType=_tapType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c506c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c4d83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c4cab
- (id)initSystemTapWithFormat:(id)arg1 excludePIDs:(id)arg2;	// IMP=0x00000000000c4c38
- (id)initSystemTapWithFormat:(id)arg1;	// IMP=0x00000000000c4c21
- (id)initProcessTapWithFormat:(id)arg1 PID:(int)arg2;	// IMP=0x00000000000c4c0f
- (id)initProcessTapInternalWithFormat:(id)arg1 PID:(int)arg2;	// IMP=0x00000000000c4b10

@end
