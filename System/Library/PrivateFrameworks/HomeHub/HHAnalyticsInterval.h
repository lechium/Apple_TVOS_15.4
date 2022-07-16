//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol HHAnalyticsBackend;

@interface HHAnalyticsInterval : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    CDUnknownBlockType _eventBuilder;	// 16 = 0x10
    NSString *_eventName;	// 24 = 0x18
    id <HHAnalyticsBackend> _backend;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000b778
@property(retain, nonatomic) id <HHAnalyticsBackend> backend; // @synthesize backend=_backend;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) CDUnknownBlockType eventBuilder; // @synthesize eventBuilder=_eventBuilder;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)endAndSendWithError:(id)arg1 eventBuilder:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b35e
- (id)initWithEventName:(id)arg1 eventBuilder:(CDUnknownBlockType)arg2 backend:(id)arg3;	// IMP=0x000000000000b268

@end
