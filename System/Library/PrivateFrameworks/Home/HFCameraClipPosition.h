//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HMCameraClip, NSDate, NSString;
@protocol HFCameraRecordingEvent;

@interface HFCameraClipPosition : NSObject <NAIdentifiable, NSCopying>
{
    double _offset;	// 8 = 0x8
    id <HFCameraRecordingEvent> _event;	// 16 = 0x10
}

+ (id)na_identity;	// IMP=0x00000000002854d0
+ (id)positionWithEvent:(id)arg1 offset:(double)arg2;	// IMP=0x0000000000285260
+ (id)positionWithClip:(id)arg1 offset:(double)arg2;	// IMP=0x0000000000285205
- (void).cxx_destruct;	// IMP=0x00000000002857ba
@property(readonly, nonatomic) id <HFCameraRecordingEvent> event; // @synthesize event=_event;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000285652
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028545e
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, nonatomic) HMCameraClip *clip;
- (id)initWithClip:(id)arg1 offset:(double)arg2;	// IMP=0x00000000002853b0
- (id)initWithEvent:(id)arg1 offset:(double)arg2;	// IMP=0x00000000002852bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

