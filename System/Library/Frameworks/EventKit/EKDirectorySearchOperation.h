//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class EKDirectorySearchQuery, NSError, NSString;

@interface EKDirectorySearchOperation : NSOperation
{
    _Bool _isFinished;	// 8 = 0x8
    _Bool _isExecuting;	// 9 = 0x9
    NSString *_accountID;	// 16 = 0x10
    EKDirectorySearchQuery *_query;	// 24 = 0x18
    CDUnknownBlockType _resultsBlock;	// 32 = 0x20
    id _searchID;	// 40 = 0x28
    _Bool _numberOfMatchesExceededLimit;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
}

+ (_Bool)isSupported;	// IMP=0x00000000000453dc
- (void).cxx_destruct;	// IMP=0x0000000000045429
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool numberOfMatchesExceededLimit; // @synthesize numberOfMatchesExceededLimit=_numberOfMatchesExceededLimit;
- (void)_finishWithError:(id)arg1;	// IMP=0x0000000000045317
- (id)_processResults:(id)arg1 class:(Class)arg2;	// IMP=0x00000000000451db
- (void)_processResults:(id)arg1;	// IMP=0x0000000000044f5e
- (id)_recordTypes;	// IMP=0x0000000000044e6d
- (_Bool)isFinished;	// IMP=0x0000000000044e5d
- (_Bool)isExecuting;	// IMP=0x0000000000044e4d
- (void)cancel;	// IMP=0x0000000000044dd0
- (_Bool)isConcurrent;	// IMP=0x0000000000044dc8
- (void)main;	// IMP=0x0000000000044b38
- (void)start;	// IMP=0x0000000000044ad9
- (id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000449e5
- (id)init;	// IMP=0x00000000000449a1

@end

