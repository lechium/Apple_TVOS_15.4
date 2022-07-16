//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXMDataPoint, NSString;

@interface AXMDataAnnotation : NSObject
{
    _Bool _playsHaptic;	// 8 = 0x8
    _Bool _speakDuringPlayback;	// 9 = 0x9
    AXMDataPoint *_location;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000077201
@property(nonatomic) _Bool speakDuringPlayback; // @synthesize speakDuringPlayback=_speakDuringPlayback;
@property(nonatomic) _Bool playsHaptic; // @synthesize playsHaptic=_playsHaptic;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) AXMDataPoint *location; // @synthesize location=_location;
- (id)initWithLocation:(id)arg1;	// IMP=0x0000000000077195
- (id)initWithLocation:(id)arg1 label:(id)arg2;	// IMP=0x000000000007712a

@end

