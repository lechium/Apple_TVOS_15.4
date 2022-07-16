//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnounceDaemon/ANBackgroundActivityProtocol-Protocol.h>

@class NSBackgroundActivityScheduler;

@interface ANBackgroundActivity : NSObject <ANBackgroundActivityProtocol>
{
    NSBackgroundActivityScheduler *_backgroundActivity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000043573
@property(readonly, nonatomic) NSBackgroundActivityScheduler *backgroundActivity; // @synthesize backgroundActivity=_backgroundActivity;
- (_Bool)shouldDefer;	// IMP=0x0000000000043525
- (void)scheduleWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000434b3
- (id)init;	// IMP=0x00000000000433a7

@end
