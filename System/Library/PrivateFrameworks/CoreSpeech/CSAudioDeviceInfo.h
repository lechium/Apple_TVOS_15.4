//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NSCopying-Protocol.h>
#import <CoreSpeech/NSSecureCoding-Protocol.h>

@class CSAudioRecordDeviceInfo, NSArray, NSString;

@interface CSAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>
{
    CSAudioRecordDeviceInfo *_recordDeviceInfo;	// 8 = 0x8
    NSString *_playbackRoute;	// 16 = 0x10
    NSArray *_playbackDeviceTypeList;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011b7e
- (void).cxx_destruct;	// IMP=0x0000000000011d1f
@property(readonly, copy, nonatomic) NSArray *playbackDeviceTypeList; // @synthesize playbackDeviceTypeList=_playbackDeviceTypeList;
@property(readonly, copy, nonatomic) NSString *playbackRoute; // @synthesize playbackRoute=_playbackRoute;
@property(readonly, copy, nonatomic) CSAudioRecordDeviceInfo *recordDeviceInfo; // @synthesize recordDeviceInfo=_recordDeviceInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011c09
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011b86
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011b73
- (id)description;	// IMP=0x0000000000011ab4
- (id)xpcObject;	// IMP=0x00000000000119bc
- (id)initWithXPCObject:(id)arg1;	// IMP=0x0000000000011858
- (id)initWithRecordDeviceInfo:(id)arg1 playbackRoute:(id)arg2 playbackDeviceTypeList:(id)arg3;	// IMP=0x0000000000011772

@end
