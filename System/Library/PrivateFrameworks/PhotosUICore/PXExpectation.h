//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface PXExpectation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003b5fa7
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (id)description;	// IMP=0x00000000003b5ecb
- (void)_performHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000003b5e52
- (void)fulfill;	// IMP=0x00000000003b5e23
- (void)performWhenFulfilled:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x00000000003b5cad
- (id)initWithQueue:(id)arg1 labelFormat:(id)arg2;	// IMP=0x00000000003b5b03
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000003b5aed
- (id)initWithLabelFormat:(id)arg1;	// IMP=0x00000000003b5ad5
- (id)init;	// IMP=0x00000000003b5abf

@end

