//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DEValidatorResult : NSObject
{
    NSString *_status;	// 8 = 0x8
    NSArray *_errors;	// 16 = 0x10
    NSArray *_warnings;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022c7c1
@property(retain, nonatomic) NSArray *warnings; // @synthesize warnings=_warnings;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;

@end

