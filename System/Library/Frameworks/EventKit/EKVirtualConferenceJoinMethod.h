//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface EKVirtualConferenceJoinMethod : NSObject
{
    _Bool _isBroadcast;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bb8e1
@property(nonatomic) _Bool isBroadcast; // @synthesize isBroadcast=_isBroadcast;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x00000000000bb809
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bb69d
- (id)initWithTitle:(id)arg1 url:(id)arg2;	// IMP=0x00000000000bb604

@end

