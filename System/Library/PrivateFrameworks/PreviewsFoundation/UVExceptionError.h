//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSException;

@interface UVExceptionError : NSError
{
    NSException *_exception;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000025f4
@property(readonly, nonatomic) NSException *exception; // @synthesize exception=_exception;
- (id)initWithException:(id)arg1;	// IMP=0x000000000000248a
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;	// IMP=0x00000000000023ad

@end

