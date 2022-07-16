//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TVHKMediaCategoryTypesFetchControllerResult;

__attribute__((visibility("hidden")))
@interface TVHKMediaCategoryTypesFetchControllerOperation
{
    long long _queryReason;	// 8 = 0x8
    NSArray *_currentMediaCategoryTypes;	// 16 = 0x10
    TVHKMediaCategoryTypesFetchControllerResult *_result;	// 24 = 0x18
}

+ (id)_changeSetFromMediaCategoryTypes:(id)arg1 toMediaCategoryTypes:(id)arg2;	// IMP=0x0000000000039749
- (void).cxx_destruct;	// IMP=0x000000000003985e
@property(retain, nonatomic) TVHKMediaCategoryTypesFetchControllerResult *result; // @synthesize result=_result;
@property(copy, nonatomic) NSArray *currentMediaCategoryTypes; // @synthesize currentMediaCategoryTypes=_currentMediaCategoryTypes;
@property(nonatomic) long long queryReason; // @synthesize queryReason=_queryReason;
- (void)executionDidBegin;	// IMP=0x000000000003939b
- (id)initWithMediaLibrary:(id)arg1 queryReason:(long long)arg2;	// IMP=0x0000000000039357
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x00000000000392e8

@end
