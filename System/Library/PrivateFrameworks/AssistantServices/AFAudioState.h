//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@interface AFAudioState : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _audioSessionID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006e9df
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ea93
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e9e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e9a5
- (id)description;	// IMP=0x000000000006e91f

@end

