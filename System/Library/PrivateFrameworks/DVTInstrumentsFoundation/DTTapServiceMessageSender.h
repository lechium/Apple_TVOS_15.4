//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTXChannel;

@interface DTTapServiceMessageSender : NSObject
{
    DTXChannel *_channel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e90d
@property(readonly, retain, nonatomic) DTXChannel *channel; // @synthesize channel=_channel;
- (void)sendBarrierMessage;	// IMP=0x000000000000e8d6
- (void)sendMessage:(id)arg1;	// IMP=0x000000000000e8be
- (id)initWithChannel:(id)arg1;	// IMP=0x000000000000e853

@end

