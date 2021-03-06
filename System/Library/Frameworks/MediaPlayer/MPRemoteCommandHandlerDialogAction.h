//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPRemoteCommandEvent, MRSendCommandHandlerDialogAction, NSString;

@interface MPRemoteCommandHandlerDialogAction : NSObject <NSCopying>
{
    MRSendCommandHandlerDialogAction *_mediaRemoteType;	// 8 = 0x8
}

+ (id)actionWithTitle:(id)arg1 type:(long long)arg2 commandEvent:(id)arg3;	// IMP=0x00000000001a96de
- (void).cxx_destruct;	// IMP=0x00000000001a9664
@property(readonly, copy, nonatomic) MRSendCommandHandlerDialogAction *mediaRemoteType; // @synthesize mediaRemoteType=_mediaRemoteType;
@property(readonly, nonatomic) MPRemoteCommandEvent *event;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSString *title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a9419
- (id)description;	// IMP=0x00000000001a933a
- (id)initWithMediaRemoteType:(id)arg1;	// IMP=0x00000000001a92cf

@end

