//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface PRETrialCompletionResult : NSObject
{
    _Bool _isCompletionCalled;	// 8 = 0x8
    _Bool _isSuccess;	// 9 = 0x9
    NSError *_downloadError;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000dbe3
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) _Bool isCompletionCalled; // @synthesize isCompletionCalled=_isCompletionCalled;

@end

