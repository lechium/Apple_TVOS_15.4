//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CalVirtualConferenceJoinMethod : NSObject
{
    _Bool _isBroadcast;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000017627
@property(readonly, nonatomic) _Bool isBroadcast; // @synthesize isBroadcast=_isBroadcast;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017503
- (id)description;	// IMP=0x0000000000017413
- (id)initWithTitle:(id)arg1 URL:(id)arg2 isBroadcast:(_Bool)arg3;	// IMP=0x000000000001736f

@end

