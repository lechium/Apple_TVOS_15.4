//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetSendingVideoCallAction
{
    _Bool _sendingVideo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000411c5
@property(nonatomic, getter=isSendingVideo) _Bool sendingVideo; // @synthesize sendingVideo=_sendingVideo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000041266
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000411cd
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000004113c
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000041134
- (id)customDescription;	// IMP=0x00000000000410bc
- (id)initWithCallUUID:(id)arg1 sendingVideo:(_Bool)arg2;	// IMP=0x000000000004107a

@end

