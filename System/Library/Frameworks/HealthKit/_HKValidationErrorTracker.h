//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface _HKValidationErrorTracker : NSObject
{
    long long _errorCount;	// 8 = 0x8
    NSMutableString *_errorMessage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069150
@property(retain, nonatomic) NSMutableString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
- (id)init;	// IMP=0x00000000000690c3

@end
