//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXGadget;

@interface PXGadgetNavigationItem : NSObject
{
    _Bool _animated;	// 8 = 0x8
    unsigned long long _gadgetType;	// 16 = 0x10
    NSString *_gadgetId;	// 24 = 0x18
    id <PXGadget> _gadget;	// 32 = 0x20
    long long _navigationType;	// 40 = 0x28
    CDUnknownBlockType _navigationBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000e7bba
@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, copy, nonatomic) CDUnknownBlockType navigationBlock; // @synthesize navigationBlock=_navigationBlock;
@property(readonly, nonatomic) long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) id <PXGadget> gadget; // @synthesize gadget=_gadget;
@property(readonly, nonatomic) NSString *gadgetId; // @synthesize gadgetId=_gadgetId;
@property(readonly, nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
- (id)initWithGadget:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e78be
- (id)initWithGadgetId:(id)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e7788
- (id)initWithGadetType:(unsigned long long)arg1 navigationBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e76f7

@end

