//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VOTElementSnapshot : NSObject
{
    NSString *_label;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    unsigned long long _traits;	// 24 = 0x18
    struct _NSRange _rowRange;	// 32 = 0x20
    struct CGRect _frame;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000002883b
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct _NSRange rowRange;
@property(readonly, nonatomic) unsigned long long traits;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *label;
@property(readonly, copy) NSString *description;
- (id)initWithLabel:(id)arg1 value:(id)arg2 traits:(unsigned long long)arg3 rowRange:(struct _NSRange)arg4 frame:(struct CGRect)arg5;	// IMP=0x00100000000285e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

