//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _HKDataCollectorFlushRequest : NSObject
{
    NSDate *_date;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014656f
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001464a2

@end

