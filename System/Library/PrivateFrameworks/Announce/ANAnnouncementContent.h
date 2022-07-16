//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/NSSecureCoding-Protocol.h>

@class NSString, NSURL, NSUUID;

@interface ANAnnouncementContent : NSObject <NSSecureCoding>
{
    NSString *_endpointIdentifier;	// 8 = 0x8
    NSUUID *_homeKitUserIdentifier;	// 16 = 0x10
    NSURL *_audioFileURL;	// 24 = 0x18
    NSString *_transcription;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f53a
+ (id)contentWithAudioFileURL:(id)arg1;	// IMP=0x000000000000f3ad
- (void).cxx_destruct;	// IMP=0x000000000000f74f
@property(retain, nonatomic) NSString *transcription; // @synthesize transcription=_transcription;
@property(retain, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f5d7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f542
- (void)setHomeKitUserIdentifier:(id)arg1;	// IMP=0x000000000000f529
- (id)homeKitUserIdentifier;	// IMP=0x000000000000f51b
- (void)setEndpointIdentifier:(id)arg1;	// IMP=0x000000000000f50a
- (id)endpointIdentifier;	// IMP=0x000000000000f4fc
- (id)description;	// IMP=0x000000000000f403
- (id)init;	// IMP=0x000000000000f37e

@end

