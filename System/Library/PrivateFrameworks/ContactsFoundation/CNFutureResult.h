//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface CNFutureResult : NSObject
{
    id _result;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008461
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id result; // @synthesize result=_result;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000083a6
- (id)description;	// IMP=0x00000000000081f4
- (void)setResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000081cc

@end

