//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MNTracePlayerTimelineStream : NSObject
{
    NSArray *_data;	// 8 = 0x8
    unsigned long long _nextIndex;	// 16 = 0x10
    double _nextUpdatePosition;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b0284
@property(readonly, nonatomic) double nextUpdatePosition; // @synthesize nextUpdatePosition=_nextUpdatePosition;
@property(readonly, nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)jumpToPosition:(double)arg1;	// IMP=0x00000000000affc0
- (void)triggerNextUpdate;	// IMP=0x00000000000afd9d
- (id)initWithData:(id)arg1;	// IMP=0x00000000000afc1c

@end

