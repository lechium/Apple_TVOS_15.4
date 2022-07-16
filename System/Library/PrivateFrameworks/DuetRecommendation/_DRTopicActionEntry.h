//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface _DRTopicActionEntry : NSObject
{
    NSString *_topic;	// 8 = 0x8
    NSDate *_when;	// 16 = 0x10
    unsigned long long _action;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000025f7
@property(readonly) unsigned long long action; // @synthesize action=_action;
@property(readonly, retain) NSDate *when; // @synthesize when=_when;
@property(readonly, retain) NSString *topic; // @synthesize topic=_topic;
- (id)description;	// IMP=0x0000000000002535
- (id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3;	// IMP=0x0000000000002490

@end

