//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MRLegacySendHIDEventMessage
{
    struct __IOHIDEvent *_event;	// 8 = 0x8
}

- (id)description;	// IMP=0x00000000000fc993
- (unsigned long long)type;	// IMP=0x00000000000fc988
@property(readonly, nonatomic) struct _MRHIDButtonEvent buttonEvent;
- (void)dealloc;	// IMP=0x00000000000fc88c
- (id)initWithHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000fc765

@end

