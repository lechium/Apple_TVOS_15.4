//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDMessageLink, NSString, NSTimeZone;

@interface GEOMessageLink : NSObject
{
    GEOPDMessageLink *_messageLink;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ef5bc2
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
- (id)messageBusinessHours;	// IMP=0x0000000000ef5b1c
- (int)responseTime;	// IMP=0x0000000000ef5af4
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *navTintColorString;
@property(readonly, nonatomic) NSString *navBackgroundColorString;
@property(readonly, nonatomic) NSString *messageURLString;
@property(readonly, nonatomic) NSString *messageID;
- (id)initWithMessageLink:(id)arg1;	// IMP=0x0000000000ef5862

@end

