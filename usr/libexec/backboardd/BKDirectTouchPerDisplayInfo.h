//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDigitizerTouchStreamAggregate, BKDisplayController, BKSHIDEventDisplay, NSArray, NSMutableDictionary, NSString;

@interface BKDirectTouchPerDisplayInfo : NSObject
{
    BKDisplayController *_displayController;	// 8 = 0x8
    BKSHIDEventDisplay *_display;	// 16 = 0x10
    BKDigitizerTouchStreamAggregate *_touchStreams;	// 24 = 0x18
    NSArray *_hitTestRegions;	// 32 = 0x20
    NSMutableDictionary *_serviceToDigitizer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000001d80
@property(retain, nonatomic) NSMutableDictionary *serviceToDigitizer; // @synthesize serviceToDigitizer=_serviceToDigitizer;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000001c9a
- (void)dealloc;	// IMP=0x0010000000001c60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

