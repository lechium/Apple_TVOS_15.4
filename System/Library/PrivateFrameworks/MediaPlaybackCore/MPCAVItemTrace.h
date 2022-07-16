//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVItem, NSString;

__attribute__((visibility("hidden")))
@interface MPCAVItemTrace : NSObject
{
    unsigned int _endEvent;	// 8 = 0x8
    MPAVItem *_item;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    double _started;	// 32 = 0x20
    double _ended;	// 40 = 0x28
}

+ (id)traceIntervalWithName:(id)arg1 item:(id)arg2 beginEvent:(unsigned int)arg3 endEvent:(unsigned int)arg4;	// IMP=0x0000000000191644
+ (void)traceWithName:(id)arg1 item:(id)arg2 event:(unsigned int)arg3;	// IMP=0x0000000000191566
- (void).cxx_destruct;	// IMP=0x0000000000191540
@property(nonatomic) double ended; // @synthesize ended=_ended;
@property(nonatomic) double started; // @synthesize started=_started;
@property(nonatomic) unsigned int endEvent; // @synthesize endEvent=_endEvent;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak MPAVItem *item; // @synthesize item=_item;
- (void)cancel;	// IMP=0x0000000000191336
- (void)endInterval;	// IMP=0x00000000001911ac
- (void)dealloc;	// IMP=0x000000000019116e

@end

