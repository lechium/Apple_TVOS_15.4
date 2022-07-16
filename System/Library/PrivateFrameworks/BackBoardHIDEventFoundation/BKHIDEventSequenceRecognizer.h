//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BKHIDEventRecognizer-Protocol.h>

@class NSArray, NSString;

@interface BKHIDEventSequenceRecognizer : NSObject <BKHIDEventRecognizer>
{
    long long _descriptorIndex;	// 8 = 0x8
    _Bool _shouldConsumeEvents;	// 16 = 0x10
    NSArray *_descriptors;	// 24 = 0x18
}

+ (id)recognizerForEventDescriptors:(id)arg1;	// IMP=0x0000000000014a43
+ (id)recognizerForEventDescriptor:(id)arg1;	// IMP=0x00000000000149a7
- (void).cxx_destruct;	// IMP=0x0000000000014b6c
@property(readonly, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(nonatomic) _Bool shouldConsumeEvents; // @synthesize shouldConsumeEvents=_shouldConsumeEvents;
- (long long)processEvent:(struct __IOHIDEvent *)arg1 shouldConsume:(_Bool *)arg2;	// IMP=0x0000000000014aa3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

