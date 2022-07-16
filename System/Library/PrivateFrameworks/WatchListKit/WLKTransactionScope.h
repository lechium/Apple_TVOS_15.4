//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface WLKTransactionScope : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    double _delay;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000032ea
@property(readonly) double delay; // @synthesize delay=_delay;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)dealloc;	// IMP=0x0000000000003135
- (id)initWithIdentifier:(id)arg1 delay:(double)arg2;	// IMP=0x0000000000003011
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000002ff7
- (id)init;	// IMP=0x0000000000002fe3

@end

